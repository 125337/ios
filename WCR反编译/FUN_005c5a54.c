// FUN_005c5a54 @ 005c5a54

void FUN_005c5a54(undefined8 param_1)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  char *local_40;
  char *local_38;
  undefined4 local_30;
  long local_20;
  char *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_18 = (char *)0x0;
    local_30 = 1;
  }
  else {
    pcVar2 = "WCUploadTask";
    _objc_getClass();
    local_38 = pcVar2;
    if (pcVar2 == (char *)0x0) {
      local_18 = (char *)0x0;
      local_30 = 1;
    }
    else {
      _objc_alloc_init();
      pcVar3 = pcVar2;
      FUN_005c6904(pcVar2,2,local_20);
      _objc_retainAutoreleasedReturnValue();
      local_40 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setMediaList__026a5a88,0);
      pcVar2 = local_40;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar2;
      local_30 = 1;
      _objc_storeStrong(&local_40,0);
    }
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

