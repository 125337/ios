// openExcludeChatRoomsPicker: @ 01ac9dac

/* Function Stack Size: 0x18 bytes */

void WCRefineGroupManagementViewController::openExcludeChatRoomsPicker_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_90;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined *local_38;
  undefined *local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_90 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    local_90 = *(undefined **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_90;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_30;
  FUN_01ac6854(local_30,1);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar2;
  _objc_initWeak(auStack_40,local_18);
  IVar1 = local_18;
  puVar3 = local_38;
  puVar2 = PTR_WCRefineChatRoomPicker_026cef60;
  local_68 = PTR___NSConcreteStackBlock_02578660;
  local_60 = 0xc2000000;
  local_5c = 0;
  local_58 = FUN_01ac9fcc;
  local_50 = &DAT_0257a7d0;
  _objc_copyWeak(auStack_48,auStack_40);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_presentFromViewController_title__026ab898,IVar1,&cf_bN6e_v_J,puVar3,
             &local_68);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_40);
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

