// FUN_000fb6cc @ 000fb6cc

void FUN_000fb6cc(undefined8 param_1)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined1 auStack_48 [8];
  cfstringStruct *local_40;
  undefined1 auStack_38 [8];
  uint local_30;
  cfstringStruct *local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  pcVar2 = &cf_wcr_relayoutNewFileAndQuoteTips;
  _NSSelectorFromString();
  uVar3 = local_18;
  local_20 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_respondsToSelector__026ca818,pcVar2);
  bVar1 = (uVar3 & 1) != 0;
  if (bVar1) {
    _objc_initWeak(auStack_38,local_18);
    puVar4 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_68 = PTR___NSConcreteStackBlock_02578660;
    local_60 = 0xc2000000;
    local_5c = 0;
    local_58 = FUN_000ff2c8;
    local_50 = &DAT_02579bb0;
    _objc_copyWeak(auStack_48,auStack_38);
    local_40 = local_20;
    _dispatch_async(puVar4,&local_68);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_destroyWeak(auStack_48);
    _objc_destroyWeak(auStack_38);
  }
  local_30 = (uint)!bVar1;
  _objc_storeStrong(&local_18,0);
  return;
}

