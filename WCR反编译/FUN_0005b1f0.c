// FUN_0005b1f0 @ 0005b1f0

void FUN_0005b1f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long local_a0;
  long local_78;
  long local_48 [3];
  ulong local_30;
  ulong local_28;
  undefined8 local_20;
  long local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_28;
  FUN_0005c958();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_18;
  local_30 = uVar1;
  FUN_00062f70();
  _objc_retainAutoreleasedReturnValue();
  local_78 = lVar2;
  if (lVar2 == 0) {
    local_78 = local_18;
  }
  uVar1 = local_30;
  local_48[0] = lVar2;
  FUN_0005d074(local_30,local_78);
  if ((((uVar1 & 1) == 0) && (uVar1 = local_30, FUN_0005d4c8(), (uVar1 & 1) == 0)) &&
     (uVar1 = local_30, FUN_0005db14(), (uVar1 & 1) == 0)) {
    if (local_48[0] == 0) {
      local_a0 = local_18;
    }
    else {
      local_a0 = local_48[0];
    }
    uVar1 = local_30;
    FUN_0005e1b8(local_30,local_a0);
    if ((uVar1 & 1) == 0) {
      (*DAT_028c7c60)(local_18,local_20,local_28);
    }
    else if ((local_28 == 0) ||
            (uVar1 = local_28,
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_setText__026caa88),
            (uVar1 & 1) == 0)) {
      FUN_00062394(local_48[0],&cf___);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setText__026caa88,&cf___);
    }
  }
  _objc_storeStrong(local_48);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

