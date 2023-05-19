/**
 * @param {Function} fn
 * @param {number} t milliseconds
 * @return {Function}
 */
var debounce = function(fn, t) {
    let timer; // A local variable to store previous setTimeout key
    return function(...args) {
        clearTimeout(timer) // clear any previously existing timer
        timer = setTimeout(()=> { // start a new timer to call after `t` ms
        fn(...args) // call the function with all the original arguments
    }, t)
    };
};

/**
 * const log = debounce(console.log, 100);
 * log('Hello'); // cancelled
 * log('Hello'); // cancelled
 * log('Hello'); // Logged at t=100ms
 */