ARG PYTORCH="1.13.0"
ARG CUDA="11.6"
ARG CUDNN="8"

FROM pytorch/pytorch:${PYTORCH}-cuda${CUDA}-cudnn${CUDNN}-devel

RUN apt-get update && apt-get install -y git \
    && apt-get clean \
    && rm -rf /var/lib/apt/lists/*
COPY docker/check_env.py /work_dir/
CMD [ "/work_dir/check_env.py" ]
RUN echo ">>> Finish setting up enviroment."

