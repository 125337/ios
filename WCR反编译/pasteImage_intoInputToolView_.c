// pasteImage:intoInputToolView: @ 00fed61c

/* Function Stack Size: 0x20 bytes */

bool WCRefineInputBoxGestureSupport::pasteImage_intoInputToolView_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ulong uVar1;
  ulong uVar2;
  ID IVar3;
  undefined *puVar4;
  ID local_58;
  ulong local_50;
  ulong local_48;
  undefined4 local_3c;
  ulong local_38;
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
  if ((local_30 == 0) || (local_38 == 0)) {
    local_11 = 0;
    local_3c = 1;
  }
  else {
    local_48 = 0;
    uVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_textView_0269d0f8);
    if ((uVar1 & 1) != 0) {
      uVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_textView_0269d0f8);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_48;
      local_48 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    local_50 = 0;
    uVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_delegate_0269e808);
    if ((uVar1 & 1) != 0) {
      uVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_delegate_0269e808);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_50;
      local_50 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    if ((local_50 == 0) ||
       (uVar1 = local_50,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_pasteImage__026aaae0),
       (uVar1 & 1) == 0)) {
      uVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_respondsToSelector__026ca818,
                 PTR_s_MMGrowTextView_pasteImage__026ad570);
      if ((uVar1 & 1) == 0) {
        if ((local_48 == 0) ||
           (uVar1 = local_48,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_48,PTR_s_respondsToSelector__026ca818,
                      PTR_s_textview_pasteImage__026ad578), (uVar1 & 1) == 0)) {
          puVar4 = PTR__OBJC_CLASS___UIPasteboard_026ce040;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIPasteboard_026ce040,PTR_s_generalPasteboard_0269ce70);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar4);
          local_11 = 1;
          local_3c = 1;
        }
        else {
          IVar3 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_20,PTR_s_innerTextViewFromGrowTextView__026a3440,local_48);
          _objc_retainAutoreleasedReturnValue();
          local_58 = IVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_textview_pasteImage__026ad578,IVar3,local_30);
          local_11 = 1;
          local_3c = 1;
          _objc_storeStrong(&local_58,0);
        }
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_MMGrowTextView_pasteImage__026ad570,local_48,local_30);
        local_11 = 1;
        local_3c = 1;
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_pasteImage__026aaae0,local_30);
      local_11 = 1;
      local_3c = 1;
    }
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

