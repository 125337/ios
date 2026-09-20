// FUN_0027bc38 @ 0027bc38

byte FUN_0027bc38(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_20;
  bool local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = false;
  }
  else {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_isVideoMedia_026a1660);
    if ((uVar1 & 1) == 0) {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_valueForKey__0269d128,&cf_mediaType);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar1);
      local_11 = uVar2 == 4 || uVar2 == 9;
    }
    else {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isVideoMedia_026a1660);
      local_11 = (bool)((byte)uVar1 & 1);
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

