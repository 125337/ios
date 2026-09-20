// toggleEncryptAllSessions: @ 016f292c

/* Function Stack Size: 0x18 bytes */

void SpecificPageLockViewController::toggleEncryptAllSessions_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined *local_98;
  undefined8 local_90;
  byte local_88;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  undefined1 auStack_60 [8];
  byte local_58;
  undefined1 auStack_48 [15];
  byte local_39;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  uVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isOn_0269d560);
  local_39 = (byte)uVar2;
  _objc_initWeak(auStack_48,local_28);
  puVar3 = PTR_WCRefinePageLockGuard_026ce020;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePageLockGuard_026ce020,PTR_s_sharedGuard_0269cdc8);
  _objc_retainAutoreleasedReturnValue();
  local_b0 = PTR___NSConcreteStackBlock_02578660;
  pcVar1 = &cf_NT;
  if ((local_39 & 1) == 0) {
    pcVar1 = &cf_NTsQhQOR_;
  }
  local_80 = PTR___NSConcreteStackBlock_02578660;
  local_78 = 0xc2000000;
  local_74 = 0;
  local_70 = FUN_016f2b7c;
  local_68 = &DAT_0257f4b8;
  local_58 = local_39 & 1;
  _objc_copyWeak(auStack_60,auStack_48);
  uVar2 = local_38;
  local_a8 = 0xc2000000;
  local_a4 = 0;
  local_a0 = FUN_016f2c38;
  local_98 = &DAT_02583028;
  (*(code *)PTR__objc_retain_02578638)();
  local_90 = uVar2;
  local_88 = local_39 & 1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_authenticateForKey_scope_reason__0269cdd0,0,1,pcVar1,&local_80,&local_b0);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_90);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_48);
  _objc_storeStrong(&local_38,0);
  return;
}

