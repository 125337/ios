// FUN_01f56270 @ 01f56270

byte FUN_01f56270(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_valueForKey__0269d128,&cf_viewModel);
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar2;
  if (uVar2 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_respondsToSelector__026ca818,PTR_s_isPlaying_026ab3f8);
    if ((uVar2 & 1) != 0) {
      uVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isPlaying_026ab3f8);
      local_11 = (byte)uVar2 & 1;
      bVar1 = true;
      goto LAB_01f56364;
    }
  }
  bVar1 = false;
LAB_01f56364:
  _objc_storeStrong(&local_28,0);
  if (!bVar1) {
    local_11 = 0;
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

