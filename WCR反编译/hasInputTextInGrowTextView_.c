// hasInputTextInGrowTextView: @ 00fe9044

/* Function Stack Size: 0x18 bytes */

bool WCRefineInputBoxGestureSupport::hasInputTextInGrowTextView_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_60;
  cfstringStruct *local_50;
  ID local_48;
  ID local_40;
  undefined4 local_34;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  if (local_30 == (cfstringStruct *)0x0) {
    local_11 = 0;
    local_34 = 1;
  }
  else {
    IVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_inputToolViewFromGrowTextView__026a34c0,local_30);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_20;
    local_40 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_innerTextViewFromGrowTextView__026a3440,local_30);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_30;
    local_48 = IVar2;
    FUN_00fe91d8(local_30,local_40,IVar2);
    _objc_retainAutoreleasedReturnValue();
    local_60 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_60 = &::cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = local_60;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
    local_11 = pcVar3 != (cfstringStruct *)0x0;
    local_34 = 1;
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

