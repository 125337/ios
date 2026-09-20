// FUN_0072fcd0 @ 0072fcd0

ulong FUN_0072fcd0(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_50;
  ulong local_48 [3];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_18;
  local_30 = param_4;
  FUN_007301c0();
  uVar2 = local_18;
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_48[0] = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_respondsToSelector__026ca818,PTR_s_getSectionAt__026a0a78);
    if ((uVar2 & 1) != 0) {
      uVar2 = local_48[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_getSectionAt__026a0a78,local_30);
      _objc_retainAutoreleasedReturnValue();
      local_50 = uVar2;
      FUN_007300e4(uVar2,local_48[0]);
      FUN_00730570(local_50);
      _objc_storeStrong(&local_50,0);
    }
    _objc_storeStrong(local_48,0);
  }
  uVar2 = local_18;
  (*DAT_028cc4d8)(local_18,local_20,local_28,local_30);
  _objc_storeStrong(&local_28,0);
  return uVar2;
}

