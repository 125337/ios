// FUN_001aab74 @ 001aab74

void FUN_001aab74(undefined8 param_1)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  undefined4 local_28;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  FUN_001ac9f4();
  uVar3 = local_18;
  if ((uVar1 & 1) != 0) {
    pcVar2 = &cf_ContactsViewController;
    _NSClassFromString();
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,pcVar2);
    if ((uVar3 & 1) != 0) {
      _objc_initWeak(auStack_30,local_18);
      puVar4 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      local_58 = PTR___NSConcreteStackBlock_02578660;
      local_50 = 0xc2000000;
      local_4c = 0;
      local_48 = FUN_001acd50;
      local_40 = &DAT_02578da0;
      _objc_copyWeak(auStack_38,auStack_30);
      _dispatch_async(puVar4,&local_58);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      _objc_destroyWeak(auStack_38);
      _objc_destroyWeak(auStack_30);
      local_28 = 0;
      goto LAB_001aaccc;
    }
  }
  local_28 = 1;
LAB_001aaccc:
  _objc_storeStrong(&local_18,0);
  return;
}

