// FUN_00681c84 @ 00681c84

void FUN_00681c84(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  cfstringStruct *local_c0;
  ulong *local_a8;
  ulong local_78;
  cfstringStruct *local_70;
  ulong local_68 [3];
  ulong local_50;
  long local_48;
  undefined8 local_40;
  ulong local_38;
  ulong local_30;
  long local_28;
  
  local_30 = 0;
  local_28 = param_1;
  _objc_storeStrong(&local_30);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  uVar2 = local_30;
  local_48 = param_1;
  FUN_0067d82c();
  _objc_retainAutoreleasedReturnValue();
  local_50 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
  if (uVar2 == 0) {
    local_a8 = (ulong *)(param_1 + 0x20);
  }
  else {
    local_a8 = &local_50;
  }
  uVar2 = *local_a8;
  (*(code *)PTR__objc_retain_02578638)();
  uVar1 = (uint)*(undefined8 *)(param_1 + 0x28);
  local_68[0] = uVar2;
  FUN_0067e48c();
  if ((uVar1 & 1) == 0) {
    local_c0 = &cf___;
  }
  else {
    local_c0 = *(cfstringStruct **)(param_1 + 0x28);
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_70 = local_c0;
  local_78 = 0;
  uVar2 = local_68[0];
  FUN_0067e48c();
  if ((uVar2 & 1) == 0) {
    uVar3 = local_68[0];
    FUN_00682068(local_68[0],local_70);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_78;
    local_78 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  else {
    _objc_storeStrong(&local_70,local_68[0]);
    _objc_storeStrong(&local_78,local_68[0]);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_resignFirstResponder_0269ea18);
  uVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_dismissWithAnimated__0269e420);
  if ((uVar2 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_dismissWithAnimated__0269e420,1);
  }
  uVar2 = local_78;
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
  if (uVar2 != 0) {
    param_1 = param_1 + 0x38;
    _objc_loadWeakRetained();
    FUN_006827f0();
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  _objc_storeStrong(&local_78);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(local_68,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return;
}

