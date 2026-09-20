// _WCRVoiceProgressSeekTouchHitsVoiceBar @ 015c287c

byte _WCRVoiceProgressSeekTouchHitsVoiceBar
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  ulong uVar1;
  ulong local_38;
  ulong local_30;
  undefined8 local_28;
  undefined8 local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_1;
  local_20 = param_2;
  _objc_storeStrong(&local_30,param_5);
  uVar1 = local_30;
  FUN_015c2a0c();
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar1;
  if (uVar1 == 0) {
    local_11 = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_bounds_026ca548);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_convertRect_toView__0269ded8,local_30);
    _CGRectIsEmpty(param_1,param_2,param_3,param_4);
    local_11 = (byte)uVar1;
    if ((uVar1 & 1) == 0) {
      _CGRectInset();
      _CGRectContainsPoint(param_1,param_2,param_3,param_4,local_28,local_20);
      local_11 = local_11 & 1;
    }
    else {
      local_11 = 0;
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

