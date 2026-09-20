// FUN_00326b1c @ 00326b1c

void FUN_00326b1c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  ulong uVar4;
  ulong uVar5;
  undefined **ppuVar6;
  uint local_104;
  uint local_cc;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined *local_98;
  undefined **local_90;
  undefined1 auStack_88 [8];
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  undefined1 auStack_60 [8];
  undefined **local_58;
  undefined1 auStack_50 [15];
  byte local_41;
  ulong local_40;
  undefined4 local_38;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  uVar4 = local_28;
  local_cc = 1;
  if (((ulong)puVar2 & 1) != 0) {
    pcVar3 = &cf_ContactsViewController;
    _NSClassFromString();
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,pcVar3);
    local_cc = (uint)uVar4 ^ 1;
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if ((local_cc & 1) == 0) {
    local_41 = 0;
    uVar4 = local_28;
    _objc_getAssociatedObject(local_28,&_kWCContactsTopShortcutRefreshingKey);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_104 = 1;
    if ((uVar5 & 1) == 0) {
      uVar5 = local_28;
      _objc_getAssociatedObject(local_28,&_kWCContactsTopShortcutRefreshScheduledKey);
      _objc_retainAutoreleasedReturnValue();
      local_41 = 1;
      local_40 = uVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_104 = (uint)uVar5;
    }
    if ((local_41 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_40);
    }
    (*(code *)PTR__objc_release_02578630)(uVar4);
    uVar4 = local_28;
    if ((local_104 & 1) == 0) {
      puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(uVar4,&_kWCContactsTopShortcutRefreshScheduledKey,puVar1,1);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      _objc_initWeak(auStack_50,local_28);
      puVar1 = PTR___NSConcreteStackBlock_02578660;
      ppuVar6 = &local_80;
      local_80 = PTR___NSConcreteStackBlock_02578660;
      local_78 = 0xc2000000;
      local_74 = 0;
      local_70 = FUN_00327370;
      local_68 = &DAT_02578da0;
      _objc_copyWeak(auStack_60,auStack_50);
      _objc_retainBlock();
      puVar2 = PTR___dispatch_main_q_02578680;
      local_58 = ppuVar6;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = local_58;
      local_b0 = puVar1;
      local_a8 = 0xc2000000;
      local_a4 = 0;
      local_a0 = FUN_00328d00;
      local_98 = &DAT_0257c218;
      (*(code *)PTR__objc_retain_02578638)();
      local_90 = ppuVar6;
      _objc_copyWeak(auStack_88,auStack_50);
      _dispatch_async(puVar2,&local_b0);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      _objc_destroyWeak(auStack_88);
      _objc_storeStrong(&local_90);
      _objc_storeStrong(&local_58,0);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_50);
      local_38 = 0;
    }
    else {
      local_38 = 1;
    }
  }
  else {
    local_38 = 1;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

