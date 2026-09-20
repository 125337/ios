// sendItem: @ 01f8fcc8

/* Function Stack Size: 0x18 bytes */

void WCRefineVoicePackPickerViewController::sendItem_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  long local_68;
  undefined *local_60;
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [8];
  undefined *local_38;
  undefined4 local_2c;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar4 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sending_026c9820);
  if (((IVar4 & 1) == 0) && (local_28 != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setSending__026c9840,1);
    puVar5 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showWeToastLoadingWithText__0269cea8,&cf_S_N_);
    _objc_retainAutoreleasedReturnValue();
    local_38 = puVar5;
    _objc_initWeak(auStack_40,local_18);
    lVar2 = local_28;
    puVar5 = PTR_WCRefineVoicePackSender_026ce128;
    IVar4 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_chatName_026aa868);
    _objc_retainAutoreleasedReturnValue();
    local_88 = PTR___NSConcreteStackBlock_02578660;
    local_80 = 0xc2000000;
    local_7c = 0;
    local_78 = FUN_01f8ff30;
    local_70 = &DAT_0258d050;
    _objc_copyWeak(auStack_58,auStack_40);
    lVar3 = local_28;
    (*(code *)PTR__objc_retain_02578638)();
    puVar1 = local_38;
    local_68 = lVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_sendItem_toChatName_completion__026b0bd8,lVar2,IVar4,&local_88);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_68,0);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_40);
    _objc_storeStrong(&local_38,0);
    local_2c = 0;
  }
  else {
    local_2c = 1;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

