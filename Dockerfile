FROM gcc:latest

COPY /definitely_a_real_program.c /

RUN gcc definitely_a_real_program.c -o prog

CMD [ "/bin/sh", "-c", "./prog"]