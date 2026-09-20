// FUN_0089beac @ 0089beac

ushort FUN_0089beac(undefined8 param_1,ushort param_2)

{
  int iVar1;
  char *pcVar2;
  stat sStack_c8;
  ushort local_32;
  char *local_30;
  ushort local_22;
  
  local_30 = (char *)0x0;
  _objc_storeStrong(&local_30,param_1);
  pcVar2 = local_30;
  local_32 = param_2;
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_fileSystemRepresentation_026a95c0);
  if (pcVar2 != (char *)0x0) {
    iVar1 = _stat(pcVar2,&sStack_c8);
    if (iVar1 == 0) {
      local_22 = sStack_c8.st_mode & 0x1ff;
      goto LAB_0089bf88;
    }
  }
  local_22 = local_32;
LAB_0089bf88:
  _objc_storeStrong(&local_30,0);
  return local_22;
}

