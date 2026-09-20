// FUN_0032d0a4 @ 0032d0a4

void FUN_0032d0a4(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  undefined8 uVar5;
  uint local_74;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  uint local_28;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  uVar5 = local_18;
  local_74 = 1;
  if (((ulong)puVar3 & 1) != 0) {
    pcVar4 = &cf_ContactsViewController;
    _NSClassFromString();
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,pcVar4);
    local_74 = (uint)uVar5 ^ 1;
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  bVar1 = (local_74 & 1) == 0;
  if (bVar1) {
    _objc_initWeak(auStack_30,local_18);
    puVar2 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_58 = PTR___NSConcreteStackBlock_02578660;
    local_50 = 0xc2000000;
    local_4c = 0;
    local_48 = FUN_0032d2b4;
    local_40 = &DAT_02578da0;
    _objc_copyWeak(auStack_38,auStack_30);
    _dispatch_async(puVar2,&local_58);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_destroyWeak(auStack_38);
    _objc_destroyWeak(auStack_30);
  }
  local_28 = (uint)!bVar1;
  _objc_storeStrong(&local_18,0);
  return;
}

