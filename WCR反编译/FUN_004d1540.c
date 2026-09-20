// FUN_004d1540 @ 004d1540

void FUN_004d1540(ulong param_1,undefined8 param_2,byte param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_30;
  byte local_21;
  undefined8 local_20;
  ulong local_18;
  
  local_21 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  if ((DAT_028cace9 & 1) != 0) {
    if ((param_3 & 1) == 0) {
      FUN_004d2324(param_1,"m_arrMsgCanBeOprate");
      _objc_retainAutoreleasedReturnValue();
      local_30 = param_1;
      if (param_1 == 0) {
        uVar1 = local_18;
        FUN_004d2324(local_18,"_m_arrMsgCanBeOprate");
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_30;
        local_30 = uVar1;
        (*(code *)PTR__objc_release_02578630)(uVar2);
      }
      uVar2 = local_30;
      FUN_004d2df8();
      if ((uVar2 < 2) || (uVar1 = uVar2, FUN_004d211c(uVar2 - 2), (uVar1 & 1) == 0)) {
        FUN_004d2d9c();
      }
      else {
        FUN_004d3020(uVar2);
      }
      _objc_storeStrong(&local_30,0);
    }
    else {
      FUN_004d2d9c();
    }
  }
  (*DAT_028cacc0)(local_18,local_20,local_21 & 1);
  return;
}

