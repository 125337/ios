// _HookEncodingMatches @0x60b4c

bool _HookEncodingMatches(long param_1,char *param_2)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  
  bVar1 = false;
  if (param_1 != 0) {
    pcVar3 = (char *)_method_getTypeEncoding(param_1);
    iVar2 = _strcmp(pcVar3,param_2);
    bVar1 = iVar2 == 0;
  }
  return bVar1;
}

