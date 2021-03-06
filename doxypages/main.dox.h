/*! \mainpage PANOC: Fast nonlinear model predictive control
 *
 * 
 * 
 * 
 * 
 * \section panoc_about PANOC in a nutshell
 * 
 * This is a C implementation of PANOC, a Proximal Averaged Newton-type method for Optimal Control.
 * 
 * PANOC is a fast solver for nonlinear optimal control problems which arise in 
 * nonlinear model predictive control (NMPC) and other applications.
 * 
 * Features of the method:
 * 
 * - Very fast convergence, <b>sub-millisecond-fast</b> MPC
 * - <b>Low memory</b> requirements
 * - Suitable for embedded applications
 * - Global convergence properties
 * - Not sensitive to ill conditioning
 * - Unlike SQP, does not require inner iterative procedures
 * 
 * Features of the implementation:
 * 
 * - <b>Dependency-free</b> C implementation (no libraries, <b>C89 standard</b>)
 * - Very easy to install
 * - Controller design in MATLAB, implementation in C (powered by 
 *   [CasADi](https://github.com/casadi/casadi/wiki))
 * - Unit-tested (very high [coverage](https://codecov.io/gh/kul-forbes/EmbeddedMPC))
 * - Memory-leak-free (checked with [valgrind](http://valgrind.org))
 * - Detailed documentation
 * - MEX interface for testing/simulation purposes (work in progress)
 * 
 * The main API with which end-users interact is provided in panoc.h.
 * 
 *  
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * \section panoc_obstacle_avoidance Obstacle avoidance
 * 
 * PANOC comes with a MATLAB toolbox that allows the design of obstacle avoidance
 * controllers based on nonlinear model predictive control while it produces C code
 * (following the C89 standard) which can be used on embedded devices.
 * 
 * Below we see a collection of trajectories from different initial points \f$(x_0, y_0)\f$
 * and different initial headings \f$\theta_0\f$ towards the target point \f$(x_r, y_r, \theta_r) = (3.5, 0.5, 0)\f$.
 * 
 * <img src="pics/navigation-01.png" alt="navigation" width="40%" height="40%"/>
 * 
 * The associated nonlinear model predictive problem consists in solving the following
 * optimization problem:
 * 
 * Here is a video of PANOC in action:
 * 
 * 
 * \htmlonly
 * <div style="width=100%;text-align:center">
 *     <div id="main_video_navigation" style="display: inline-block">
 *         <video width="600" height="400" controls>
 *             <source src="pics/navigation-v0.1-001.mp4" type="video/mp4">
 *             Your browser does not support the video tag.
 *         </video> 
 *     </div>
 * </div>
 * \endhtmlonly
 * 
 * See some more obstacle avoidance examples \link obstacle_avoidance here\endlink.
 * 
 * 
 * 
 * 
 * 
 * 
 * \section panoc_cite Cite PANOC
 * 
 * Please, cite PANOC as follows:
 * 
 * - L. Stella, A. Themelis, P. Sopasakis and P. Patrinos,
 * <em><a href="https://arxiv.org/abs/1709.06487" >A Simple and Efficient Algorithm for Nonlinear Model Predictive Control</a></em>,
 * IEEE CDC 2017, Melbourne, Australia, Dec 2017.
 * - A. Sathya, P. Sopasakis, A. Themelis, R. Van Parys, G. Pipeleers and P. Patrinos,
 *  <em><a href="#" >Embedded nonlinear model predictive control for obstacle avoidance using PANOC</a></em>,
 *  European Control Conference, Limassol, Cyprus, June 2018 (accepted).
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * \section panoc_legal Licences
 * 
 * 
 * The logo of PANOC, which is in the header of this page, was designed by 
 * [Ker'is](https://thenounproject.com/watcharin_wma/collection/technology/?oq=microchip&cidx=1&i=846745)
 * from the Noun Project
 * It is licensed with a [CC 3.0 BY US licence](https://creativecommons.org/licenses/by/3.0/us/).
 *
 */ 
