// FUN_0081f43c @ 0081f43c

void FUN_0081f43c(undefined8 param_1)

{
  ulong uVar1;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  FUN_0081f6b4(local_18,0);
  _objc_retainAutoreleasedReturnValue();
  local_20 = uVar1;
  if ((uVar1 != 0) &&
     ((*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isHidden_026ca768), (uVar1 & 1) == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setHidden__026ca970,1);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

