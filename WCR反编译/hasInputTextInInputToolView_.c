// hasInputTextInInputToolView: @ 00fe951c

/* Function Stack Size: 0x18 bytes */

bool WCRefineInputBoxGestureSupport::hasInputTextInInputToolView_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ID IVar4;
  undefined *puVar5;
  ulong local_48;
  ulong local_40;
  uint local_34;
  ulong local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  if (local_30 == 0) {
    local_11 = 0;
    local_34 = 1;
    goto LAB_00fe9728;
  }
  local_40 = 0;
  uVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_textView_0269d0f8);
  if ((uVar2 & 1) != 0) {
    uVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_textView_0269d0f8);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_40;
    local_40 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  if (local_40 == 0) {
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68);
    if ((uVar2 & 1) != 0) {
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_text_0269ce68);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_48 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar5);
      bVar1 = (uVar2 & 1) != 0;
      if (bVar1) {
        uVar2 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
        local_11 = uVar2 != 0;
      }
      local_34 = (uint)bVar1;
      _objc_storeStrong(&local_48,0);
      if (local_34 != 0) goto LAB_00fe9718;
    }
    local_11 = 0;
    local_34 = 1;
  }
  else {
    IVar4 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_hasInputTextInGrowTextView__026a3420,local_40);
    local_11 = (byte)IVar4 & 1;
    local_34 = 1;
  }
LAB_00fe9718:
  _objc_storeStrong(&local_40,0);
LAB_00fe9728:
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

