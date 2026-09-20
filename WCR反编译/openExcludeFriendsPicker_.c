// openExcludeFriendsPicker: @ 01ac8eb4

/* Function Stack Size: 0x18 bytes */

void WCRefineGroupManagementViewController::openExcludeFriendsPicker_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_b0;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined *local_58;
  byte local_49;
  undefined *local_48;
  undefined *local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_b0 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    local_b0 = *(undefined **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_b0;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar3 = local_40;
  FUN_01ac6854(local_40,0);
  _objc_retainAutoreleasedReturnValue();
  local_49 = 0;
  local_48 = puVar3;
  FUN_01ac91c4(puVar3,&local_49);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_48;
  local_48 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if ((local_49 & 1) != 0) {
    puVar2 = local_40;
    FUN_01ac6854(local_40,1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_48;
    local_58 = puVar2;
    FUN_01ac9510(local_48,puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(&local_58,0);
  }
  _objc_initWeak(auStack_60,local_28);
  IVar1 = local_28;
  puVar3 = local_48;
  puVar2 = PTR_WCRefineGroupManagementViewController_026ce580;
  local_88 = PTR___NSConcreteStackBlock_02578660;
  local_80 = 0xc2000000;
  local_7c = 0;
  local_78 = FUN_01ac9a00;
  local_70 = &DAT_0257a7d0;
  _objc_copyWeak(auStack_68,auStack_60);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_presentOfficialContactPickerFrom_026ac950,IVar1,&cf_bN6e_v_YS,puVar3,
             &local_88);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_60);
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

