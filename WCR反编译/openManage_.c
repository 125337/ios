// openManage: @ 00953b00

/* Function Stack Size: 0x18 bytes */

void WCRClipboardHistoryPanelController::openManage_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined **ppuVar2;
  dispatch_time_t dVar3;
  undefined *puVar4;
  ID local_68;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  undefined1 auStack_40 [8];
  undefined **local_38;
  undefined1 auStack_30 [8];
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_originalHost_026aaaf8);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  ppuVar2 = &local_60;
  local_60 = PTR___NSConcreteStackBlock_02578660;
  local_58 = 0xc2000000;
  local_54 = 0;
  local_50 = FUN_00953d78;
  local_48 = &DAT_0257be28;
  _objc_copyWeak(auStack_40,auStack_30);
  _objc_retainBlock();
  IVar1 = local_18;
  local_38 = ppuVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sheet_026aa728);
  _objc_retainAutoreleasedReturnValue();
  local_68 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setSheet__026aa770,0);
  if (local_68 != 0) {
    IVar1 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_68,PTR_s_respondsToSelector__026ca818,PTR_s_dismissWithAnimated__0269e420);
    if ((IVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_dismissWithAnimated__0269e420,1);
      dVar3 = _dispatch_time(0,280000000);
      puVar4 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      _dispatch_after(dVar3,puVar4,local_38);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      goto LAB_00953d28;
    }
  }
  (*(code *)local_38[2])();
LAB_00953d28:
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_38,0);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_30);
  _objc_storeStrong(&local_28,0);
  return;
}

