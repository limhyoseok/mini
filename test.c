// #include <sys/types.h>
// #include <unistd.h>
// #include <sys/wait.h>
// #include <stdio.h>
// #include <errno.h>
// #include <string.h>
// #include <stdlib.h>

// int main(int argc, char **argv, char **envp)
// {
//     //int status;
//     //int ret;
    
//     char *arg[3] = {"/bin/ls", "fklanfdklafdsfasdf", NULL};
//     //pid_t pid = fork();

//     //if (pid == 0)
//     //{
//     //    dup2(1,2);
//         //exit(10);
//         if(execve("/bin/ls", arg, envp) == -1)
//            printf("%s\n", strerror(errno));
//     //}
//     //else
//     //{
//     //    ret = wait(&status);
//         //printf("WEXITSTATUS : %d, status: %d, pid : %d\n", WEXITSTATUS(status), status, ret);

//     //}
// }
