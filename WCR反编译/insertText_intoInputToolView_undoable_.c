// insertText:intoInputToolView:undoable: @ 00fe9748

/* Function Stack Size: 0x24 bytes */

bool WCRefineInputBoxGestureSupport::insertText_intoInputToolView_undoable_
               (ID param_1,SEL param_2,ID param_3,ID param_4,bool param_5)

{
  long lVar1;
  ID IVar2;
  undefined *puVar3;
  ID IVar4;
  ID local_b0;
  uint local_94;
  ID local_70;
  byte local_61;
  ID local_60;
  ID local_58;
  ID local_50;
  ID local_48;
  undefined4 local_40;
  byte local_39;
  ID local_38;
  long local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  local_39 = (byte)param_5;
  lVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  IVar2 = local_38;
  if ((lVar1 == 0) || (local_38 == 0)) {
    local_11 = 0;
    local_40 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = IVar2;
    local_50 = 0;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar2,PTR_s_respondsToSelector__026ca818,PTR_s_textView_0269d0f8);
    if ((IVar2 & 1) != 0) {
      IVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_textView_0269d0f8);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
      local_58 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
      if ((IVar2 & 1) != 0) {
        _objc_storeStrong(&local_50,local_58);
      }
      _objc_storeStrong(&local_58,0);
    }
    local_61 = 0;
    local_94 = 0;
    if (local_50 == 0) {
      IVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_class_0269cd60);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      local_61 = 1;
      local_60 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_94 = (uint)IVar2;
    }
    if ((local_61 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    if ((local_94 & 1) != 0) {
      _objc_storeStrong(&local_50,local_48);
      IVar4 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_inputToolViewFromGrowTextView__026a34c0,local_50);
      _objc_retainAutoreleasedReturnValue();
      IVar2 = local_48;
      local_48 = IVar4;
      (*(code *)PTR__objc_release_02578630)(IVar2);
    }
    if (local_50 == 0) {
      local_b0 = local_48;
    }
    else {
      local_b0 = local_50;
    }
    IVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_innerTextViewFromGrowTextView__026a3440,local_b0);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = local_50;
    local_70 = IVar2;
    FUN_00fe9ab4(local_50,local_48,IVar2,local_30,local_39 & 1);
    local_11 = (byte)IVar4 & 1;
    local_40 = 1;
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

