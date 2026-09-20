// onChipBarTap: @ 01b64b94

/* Function Stack Size: 0x18 bytes */

void WCRefineLocalEmoticonLibraryViewController::onChipBarTap_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  ID IVar2;
  ID local_38;
  undefined4 local_2c;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_state_026cab20);
  if (lVar1 == 3) {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_chipIgnoreTap_026bf920);
    if ((IVar2 & 1) == 0) {
      IVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_chipAtGesture__026bf930,local_28);
      _objc_retainAutoreleasedReturnValue();
      local_38 = IVar2;
      if (IVar2 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_chipTapped__026bf938,IVar2);
      }
      _objc_storeStrong(&local_38,0);
      local_2c = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setChipIgnoreTap__026bf928,0);
      local_2c = 1;
    }
  }
  else {
    local_2c = 1;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

