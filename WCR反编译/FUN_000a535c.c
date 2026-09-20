// FUN_000a535c @ 000a535c

byte FUN_000a535c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_30 = 0;
  local_28 = param_2;
  _objc_storeStrong(&local_30,param_3);
  pcVar1 = &cf_screenEdgePanGestureRecognizer;
  _NSSelectorFromString();
  pcVar2 = &cf__gestureRecognizer_shouldBeRequiredToFailByGestureRecognizer_;
  local_38 = pcVar1;
  _NSSelectorFromString();
  uVar3 = local_20;
  local_40 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,local_38);
  if ((uVar3 & 1) != 0) {
    uVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,local_40);
    if ((uVar3 & 1) != 0) {
      uVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,local_38);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = local_20;
      local_48 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,local_40,uVar3,local_30);
      local_11 = (byte)uVar4 & 1;
      _objc_storeStrong(&local_48,0);
      goto LAB_000a548c;
    }
  }
  local_11 = 0;
LAB_000a548c:
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

