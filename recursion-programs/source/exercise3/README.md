# thinking recursively


mathmatical induction is most useful when several instances of the inductive hypothesis are required for each induction step.

one prominent case recursion is the phenomenon of the fibonacci sequence.

$$ 
	F_{n} = \varphi^{n} - \psi^{n} \over \varphi - \psi
$$

where $\varphi$ represents the $n$th **fibonacci number**, ${\varphi} = {1 + \sqrt{5} \over 2}$ represents the **goldren ratio**, and ${\psi} = {1 - \sqrt{5} \over 2}$ represents the roots of the polynomial $x^{2} - x - 1$

recursively speaking we use the fact that,

$$
	F_{n+2} = F_{n+1} + F_{n}, \forall n \in \mathbb{N}

$$

$F_{n}$ can be verified by direct calculation for $F_{n+2}$ if there is an assumption established for both $F_{n+1}$ and $F_{n}$

However in order to compete a proof by induction we must show that the inductive hypothesis is true for all $n \in \mathbb{N}$, this is done by verifying that the two base cases are true for $n = 0$ and $n = 1$.

Therefore a proof by induction for the fibonacci sequence would look like this,

## math proof

$$
	\begin{align}
		F_{0} &= 0 \\
		F_{1} &= 1 \\
		F_{n+2} &= F_{n+1} + F_{n}, \forall n \in \mathbb{N}
	\end{align}
$$

## code proof

we can represent this sequence easily in any implementation of a programming language, you yourself can run and play with this program to see it's output.

```c++
#include <iostream>
#include <string>

int fib(int n) {
    if (n == 0) {
        return (0);
    } else if (n == 1) {
        return (1);
    } else {
        return (fib(n - 1) + fib (n - 2));
    }
}

bool verify(int number) {
    
    int i = 0;
    bool found = false;
    
    do {
        if (fib(i) == number) {
            found = true;
        }
        i++;
    } while (fib(i) <= number);
    
    return(found);
}


int main(int argc, char* argv[]) {
    
    if (argc != 3) {
        std::cerr << "error incorrect number of parameters." << std::endl;
        return(0);
    } else if (argc == 3) {
        
        std::string tag = argv[1];
        int nth = atoi(argv[2]);
        
        if (tag == "-i") {
            
            std::cout << fib(nth) << std::endl;
            
        } else if (tag == "-v") {
            
            if (verify(nth) == true) {
                std::cout << nth << " is in the sequence" << std::endl;
            } else {
                std::cout << nth << " is not in the sequence" << std::endl;
            }
        }
    }
    return (0);
}
```

### what if I still don't understand $F_{n}$?

The first time I encountered recursion I was confused, disoriented, and discouraged because it took multiple attempts with different applications in order to meld my mind and come to grips with the notion that a function can call itself.  However, being slow at learning something (which is often the case for me), means that because you take your time you see aspects that others overlook.  So if you're stuck with recursion for a year don't be discouraged, time efficiency is something everyone care about in terms of "smartness", whereby being smart is defined by how **fast** you can learn something, however I believe that this is not something to be concerned with, for success in life is not in totality contigent upon speed, but rather by virtue.  

So take your time and learn recursion, it's a beautiful thing.
