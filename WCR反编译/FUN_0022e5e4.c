// FUN_0022e5e4 @ 0022e5e4

void FUN_0022e5e4(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  ulong uVar3;
  char *pcVar4;
  ulong local_30;
  undefined4 local_24;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  if (local_20 == 0) {
    local_18 = 0;
    local_24 = 1;
    goto LAB_0022e840;
  }
  local_30 = 0;
  pcVar1 = &cf_headImgCacher;
  _NSSelectorFromString();
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_respondsToSelector__026ca818,pcVar1);
  uVar3 = local_20;
  if ((uVar2 & 1) != 0) {
    pcVar1 = &cf_headImgCacher;
    _NSSelectorFromString();
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,pcVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_30;
    local_30 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  if (local_30 == 0) {
    uVar3 = local_20;
    FUN_0022bab4(local_20,"_headImgCacher");
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_30;
    local_30 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  if (local_30 == 0) {
    uVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_valueForKey__0269d128,&cf__headImgCacher);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_30;
    local_30 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  pcVar4 = "MMHeadImageCacher";
  _objc_getClass();
  if (pcVar4 == (char *)0x0) {
LAB_0022e820:
    local_18 = 0;
  }
  else {
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isKindOfClass__0269cd68,pcVar4);
    local_18 = local_30;
    if ((uVar2 & 1) == 0) goto LAB_0022e820;
    (*(code *)PTR__objc_retain_02578638)();
  }
  local_24 = 1;
  _objc_storeStrong(&local_30,0);
LAB_0022e840:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

