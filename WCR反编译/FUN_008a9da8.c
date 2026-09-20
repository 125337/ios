// FUN_008a9da8 @ 008a9da8

void FUN_008a9da8(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_40 [3];
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*DAT_028cde20)(local_18,local_20,local_28);
  uVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_viewModel_0269d080);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_008ab668();
  _objc_retainAutoreleasedReturnValue();
  local_40[0] = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = local_40[0];
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40[0],PTR_s_respondsToSelector__026ca818,PTR_s_IsSameMsg__026a99b8);
  if ((uVar1 & 1) != 0) {
    uVar1 = local_40[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_IsSameMsg__026a99b8,local_28);
    if ((uVar1 & 1) != 0) {
      FUN_008abd94(local_18);
    }
  }
  _objc_storeStrong(local_40,0);
  _objc_storeStrong(&local_28,0);
  return;
}

