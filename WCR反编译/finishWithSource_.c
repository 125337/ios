// finishWithSource: @ 00ee720c

/* Function Stack Size: 0x18 bytes */

void WCRChatRoomPickerBridge::finishWithSource_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  cfstringStruct *pcVar3;
  ID IVar4;
  undefined *puVar5;
  ID local_a0;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  ID local_70;
  ID local_68;
  cfstringStruct *local_60;
  ID local_58;
  ID local_50;
  byte local_41;
  ID local_40;
  ID local_38;
  undefined4 local_2c;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_hasReturned_026ab858);
  if ((IVar2 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setHasReturned__026ab868,1);
    local_41 = 0;
    bVar1 = local_28 == 0;
    if (bVar1) {
      local_a0 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pickerController_026ab800);
      _objc_retainAutoreleasedReturnValue();
      local_40 = local_a0;
    }
    else {
      local_a0 = local_28;
    }
    local_41 = bVar1;
    FUN_00ee4b18();
    _objc_retainAutoreleasedReturnValue();
    local_38 = local_a0;
    if ((local_41 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_40);
    }
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_completion_0269fb98);
    _objc_retainAutoreleasedReturnValue();
    local_50 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCompletion__0269fdc8,0);
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pickerController_026ab800);
    _objc_retainAutoreleasedReturnValue();
    local_58 = IVar2;
    if (IVar2 != 0) {
      pcVar3 = &cf_doClickCloseWithNeedAnimated_action_;
      _NSSelectorFromString();
      IVar4 = local_58;
      local_60 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_respondsToSelector__026ca818,pcVar3);
      IVar2 = local_58;
      if ((IVar4 & 1) == 0) {
        puVar5 = PTR__OBJC_CLASS___UIViewController_026cdf80;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_isKindOfClass__0269cd68,puVar5);
        if ((IVar2 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_dismissViewControllerAnimated_co_0269cf98,1,0);
        }
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_58,local_60,1,1);
      }
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_cleanup_026ab870);
    puVar5 = PTR___dispatch_main_q_02578680;
    if (local_50 != 0) {
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      IVar2 = local_50;
      local_90 = PTR___NSConcreteStackBlock_02578660;
      local_88 = 0xc2000000;
      local_84 = 0;
      local_80 = FUN_00ee75ac;
      local_78 = &DAT_0257ca68;
      (*(code *)PTR__objc_retain_02578638)();
      IVar4 = local_38;
      local_68 = IVar2;
      (*(code *)PTR__objc_retain_02578638)();
      local_70 = IVar4;
      _dispatch_async(puVar5,&local_90);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      _objc_storeStrong(&local_70);
      _objc_storeStrong(&local_68,0);
    }
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_38,0);
    local_2c = 0;
  }
  else {
    local_2c = 1;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

