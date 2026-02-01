## Todos

* Experiment with GET
    * Link URL to wanted file
    * Send content back to user
* Multiple clients
    * Handle Fast and slow clients
    * Partial writing/reading
* Config files
    * Reading the config file
    * Handling multiple sites/content on different ports
    * Associate requests to the wanted server by port
    * Routing URL paths to the server's folders/files
* POST requests
    * Read POST body
    * Ensure Content-Length
    * File upload (Stack/yesn't depends on size)
* DELETE
    * Delete files if authorized to
    * Perms and error handling
* CGI (Common Gateway interface)
    * Run an external program meant to return data to a HTTP request (PHP or Python etc)
    * Content-length/errors/timeout handling
* Testing
    * Error pages
    * Attempting non-authorized requests or behavior
    * Size limits/methods for uploads
    * Slow clients