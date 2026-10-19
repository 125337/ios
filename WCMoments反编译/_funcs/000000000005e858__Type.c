// _Type @0x5e858

char * _Type(char *param_1)

{
  bool bVar1;
  char *pcVar2;
  char *local_18;
  
  local_18 = param_1;
  while( true ) {
    bVar1 = false;
    if (*local_18 != '\0') {
      pcVar2 = _strchr("rnNoORV",(int)*local_18);
      bVar1 = pcVar2 != (char *)0x0;
    }
    if (!bVar1) break;
    local_18 = local_18 + 1;
  }
  return local_18;
}

