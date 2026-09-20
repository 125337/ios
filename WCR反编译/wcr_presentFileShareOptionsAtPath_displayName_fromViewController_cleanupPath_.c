// wcr_presentFileShareOptionsAtPath:displayName:fromViewController:cleanupPath: @ 00fb0e3c

/* Function Stack Size: 0x30 bytes */

void WCRefineHelper::wcr_presentFileShareOptionsAtPath_displayName_fromViewController_cleanupPath_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  uint local_ac;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  undefined **local_68;
  undefined4 local_60;
  byte local_59;
  undefined *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_6);
  lVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  local_59 = 0;
  local_ac = 1;
  if (lVar3 != 0) {
    puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_59 = 1;
    local_58 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_ac = (uint)puVar4 ^ 1;
  }
  if ((local_59 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  uVar2 = local_48;
  if ((local_ac & 1) == 0) {
    ppuVar5 = &local_a8;
    local_a8 = PTR___NSConcreteStackBlock_02578660;
    local_a0 = 0xc2000000;
    local_9c = 0;
    local_98 = FUN_00fb1308;
    local_90 = &DAT_0257d718;
    (*(code *)PTR__objc_retain_02578638)();
    uVar1 = local_50;
    local_88 = uVar2;
    (*(code *)PTR__objc_retain_02578638)();
    uVar2 = local_40;
    local_80 = uVar1;
    (*(code *)PTR__objc_retain_02578638)();
    lVar3 = local_38;
    local_78 = uVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_70 = lVar3;
    _objc_retainBlock();
    puVar6 = PTR__OBJC_CLASS___NSThread_026ce0a8;
    local_68 = ppuVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
    puVar4 = PTR___dispatch_main_q_02578680;
    if (((ulong)puVar6 & 1) == 0) {
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      _dispatch_async();
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
    else {
      (*(code *)local_68[2])();
    }
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_78,0);
    _objc_storeStrong(&local_80,0);
    _objc_storeStrong(&local_88,0);
    local_60 = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_eN_NX__W);
    FUN_00fb1194(DAT_02323c68,local_50);
    local_60 = 1;
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

