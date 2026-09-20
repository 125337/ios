// handleChatIndentSliderChanged: @ 01b47aa4

/* Function Stack Size: 0x18 bytes */

void __thiscall
WCRefineLayoutFunctionViewController::handleChatIndentSliderChanged_
          (WCRefineLayoutFunctionViewController *this,ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  ID IVar2;
  long lVar3;
  undefined *puVar4;
  float in_s0;
  float fVar5;
  long local_48;
  long local_40;
  undefined *local_38;
  double local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_value_0269d830);
  local_30 = (double)in_s0;
  local_38 = (undefined *)((long)(local_30 / 5.0) * 5);
  puVar4 = local_38;
  if (((0 < (long)local_38) && (puVar4 = local_38 + -0x32, (long)local_38 < 0x32)) &&
     (puVar4 = &UNK_02323000, ABS(local_30 - (double)(long)local_38) <= DAT_02323d30)) {
    local_30 = (double)(long)local_38;
  }
  fVar5 = (float)local_30;
  lVar1 = (long)local_30;
  FUN_01b46f10(puVar4);
  local_40 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_value_0269d830);
  if (DAT_02323d10 < ABS((double)(fVar5 - (float)local_40))) {
    (*(code *)PTR__objc_msgSend_02578628)((float)local_40,local_28,PTR_s_setValue__026a51b0);
  }
  lVar1 = local_28;
  _objc_getAssociatedObject(local_28,&DAT_028e4578);
  _objc_retainAutoreleasedReturnValue();
  local_48 = lVar1;
  if (((local_40 < 1) || (0x31 < local_40)) || (local_40 % 5 != 0)) {
    if (lVar1 != 0) {
      _objc_setAssociatedObject(local_28,&DAT_028e4578,0,1);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_integerValue_026ca750);
    if (lVar1 != local_40) {
      IVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_chatIndentSelectionGenerator_026bf1c0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar2);
      IVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_chatIndentSelectionGenerator_026bf1c0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar2);
      lVar1 = local_28;
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_40);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(lVar1,&DAT_028e4578,puVar4,1);
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
  }
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_setChatIndentValue_forTarget__026bf4d8,local_40,lVar1);
  IVar2 = local_18;
  lVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_superview_026cab50);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar2,PTR_s_updateChatIndentValueButtonTitle_026bf4e0,lVar3,lVar1,local_40);
  (*(code *)PTR__objc_release_02578630)(lVar3);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sendSettingsChangedNotification_026b61d8);
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_28,0);
  return;
}

