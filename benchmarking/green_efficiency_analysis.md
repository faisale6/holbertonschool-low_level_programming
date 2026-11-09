Green Efficiency Analysis

Measurement methodology
During this task we had to figure out how to find a way to measure the overall CPU timing. In order to find this out, I had to understand what the difference between 'clock()' and 'clock_t' functions is and how to use them. clock_t is basically the data type used to store CPU clock readings whereas 'clock()' is a function that returns a CPU clock reading. To calculate the measurement or the total elapsed time we need to understand what "double" does in the algorithm. Shown below is the algorithm:

total_elapsed = (double)(total_end - total_start) / CLOCKS_PER_SEC

double - allows us to calculate execution times containing decimal values
CLOCKS_PER_SEC - converts clock ticks into seconds

I ran the benchmarking programs 3 times because execution times can vary, and multiple runs helps us identify variability and calculate a more represenatitve average.

The flags used for compiling

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-long-long

-Wall - Enables common compiler warnings
-Werror - Treats warnings as errors
-Wextra - Enables additional warnings
-pedantic - Warns about violations of the specified language standard
-std=gnu89 - Uses the GNU C89 language dialect
-Wno-long-long - Disables warnings specifically about the long long type

Observed Performance Difference

During the benchmarking experiment, I compared the naive algorithm implementations with the single pass algorithm implementation. Based on my recorded measurements, I have found that in every run/iteration the Single pass algorithm is faster than the Naive algorithm. The Single pass algorithm average execution timed in 0.000102 seconds whereas Naive algorithm average execution timed in 2.653067 seconds. This identifies that the single-pass implementation recorded a much shorter execution time, approximately 25,926 times shorter based on these averages. One implementation might take longer than another due to the operations a CPU has to perform.

Relation between Runtime and Energy Consumption

The results suggest that the single - pass algorithm could use less CPU energy, assuming similar power consumption. However the experiment measures runtime. A program that runs longer consume more energy due to the amount of operations the CPU has to perform. The more operations to perform, the longer the CPU stays running. The single pass algorithm may be found to be more energy efficient due to the less amount of operations the CPU has to perform which potentially reducing CPU energy consumption. We cannot determine exactly how much electricity was saved because I measured execution time, not actual electrical power consumption.

Limitations of the experiment

Running a benchmarking program 3 times: Execution times vary between runs, and 3 measurements may not be enough to produce a reliable average

Background applications: Background applications can compete for CPU resources, potentially affecting your benchmarking results.

Measuring execution time alone: Execution time cannot measure actual power consumption, so we cannot calculate exact energy usage.

Also, I haven't confirmed if both Naive and Single-pass perform the same amount of work. This could affect if both were measured fairly and could ideally change the results.

Practical Engineering Takeaway

- Benchmarking provides measureable results that help software engineers identify performance problems and evaluate whether changes improve a program.

- Choosing an effificient algorithm is important because algorithms can reduce execution time, improve performace, and potentially reduce resource consumption.

- Sofware engineers should consider both performance and energy efficiency when developing applications because performance affects execution speed, while energy efficiency affects resource consumption and operating costs.
