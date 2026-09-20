// FUN_00935e24 @ 00935e24

void FUN_00935e24(undefined8 param_1)

{
  char *pcVar1;
  char *local_18;
  
  local_18 = (char *)0x0;
  _objc_storeStrong(&local_18,param_1);
  pcVar1 = local_18;
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_fileSystemRepresentation_026a95c0);
  if (pcVar1 != (char *)0x0) {
    _unlink(pcVar1);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

