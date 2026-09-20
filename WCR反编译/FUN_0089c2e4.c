// FUN_0089c2e4 @ 0089c2e4

void FUN_0089c2e4(undefined8 param_1,mode_t param_2)

{
  char *pcVar1;
  char *local_18;
  
  local_18 = (char *)0x0;
  _objc_storeStrong(&local_18,param_1);
  pcVar1 = local_18;
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_fileSystemRepresentation_026a95c0);
  if (pcVar1 != (char *)0x0) {
    _chmod(pcVar1,param_2);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

