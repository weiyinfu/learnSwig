int system(const char* command)
{
        sts = system(command);
        if (sts < 0) {
                return NULL;
        }
        return sts;
}
