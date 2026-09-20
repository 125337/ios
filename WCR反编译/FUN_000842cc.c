// FUN_000842cc @ 000842cc

byte FUN_000842cc(undefined8 param_1,undefined1 *param_2,ulong *param_3,ulong *param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_58 [3];
  ulong local_40;
  ulong *local_38;
  ulong *local_30;
  undefined1 *local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = 0;
  }
  uVar1 = local_20;
  local_38 = param_4;
  local_30 = param_3;
  local_28 = param_2;
  FUN_00085798();
  _objc_retainAutoreleasedReturnValue();
  local_40 = uVar1;
  FUN_00089c80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_40;
  local_58[0] = uVar1;
  if (local_30 != (ulong *)0x0) {
    _objc_retainAutorelease();
    *local_30 = uVar2;
  }
  uVar2 = local_58[0];
  if (local_38 != (ulong *)0x0) {
    _objc_retainAutorelease();
    *local_38 = uVar2;
  }
  uVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if ((uVar2 == 0) ||
     (uVar2 = local_58[0], (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_length_0269cca0),
     uVar2 == 0)) {
    local_11 = 0;
  }
  else {
    uVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_containsString__0269d0b0,&cf__chatroom);
    if ((uVar2 & 1) == 0) {
      if (local_28 != (undefined1 *)0x0) {
        *local_28 = 1;
      }
      uVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,local_58[0]);
      local_11 = (byte)uVar2 & 1;
    }
    else {
      local_11 = 0;
    }
  }
  _objc_storeStrong(local_58);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

