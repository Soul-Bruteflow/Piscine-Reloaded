#!/bin/bash
find . -type f -name "*.sh" | sed s/"\.sh$"\//g | sed 's/.\/\///g' | sed 's/.*\///g'