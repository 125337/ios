// FUN_003668c8 @ 003668c8

void FUN_003668c8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  char *pcVar2;
  cfstringStruct *pcVar3;
  char *local_48;
  cfstringStruct *local_40;
  char *local_38;
  uint local_2c;
  char *local_28;
  long local_20;
  char *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = (char *)0x0;
  _objc_storeStrong(&local_28,param_2);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  pcVar2 = local_28;
  if (lVar1 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar2;
    local_2c = 1;
    goto LAB_00366ab0;
  }
  pcVar2 = "MMNewSessionMgr";
  _objc_getClass();
  FUN_00392f1c();
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = &cf_GetSessionByUserName_;
  local_38 = pcVar2;
  _NSSelectorFromString();
  pcVar2 = local_38;
  local_40 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_respondsToSelector__026ca818,pcVar3);
  if (((ulong)pcVar2 & 1) == 0) {
LAB_00366a78:
    pcVar2 = local_28;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar2;
    local_2c = 1;
  }
  else {
    pcVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,local_40,local_20);
    _objc_retainAutoreleasedReturnValue();
    local_48 = pcVar2;
    if (pcVar2 != (char *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar2;
    }
    local_2c = (uint)(pcVar2 != (char *)0x0);
    _objc_storeStrong(&local_48,0);
    if (local_2c == 0) goto LAB_00366a78;
  }
  _objc_storeStrong(&local_38,0);
LAB_00366ab0:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

