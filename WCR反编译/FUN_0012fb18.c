// FUN_0012fb18 @ 0012fb18

byte FUN_0012fb18(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_30;
  undefined8 local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_30 = 0;
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_valueForKey__0269d128,&cf_viewModel);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_30;
  local_30 = uVar1;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  if (((local_30 == 0) ||
      (uVar2 = local_30,
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_isHeadPart_0269f0b0),
      (uVar2 & 1) == 0)) ||
     (uVar2 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isHeadPart_0269f0b0),
     (uVar2 & 1) != 0)) {
    if (((local_30 == 0) ||
        (uVar2 = local_30,
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_isShowHeadImage_0269e240),
        (uVar2 & 1) == 0)) ||
       (uVar2 = local_30,
       (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isShowHeadImage_0269e240),
       (uVar2 & 1) != 0)) {
      uVar2 = local_20;
      FUN_00132838(local_20,local_28);
      local_11 = (byte)uVar2 & 1;
    }
    else {
      local_11 = 0;
    }
  }
  else {
    local_11 = 0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

