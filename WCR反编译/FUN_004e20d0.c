// FUN_004e20d0 @ 004e20d0

byte FUN_004e20d0(undefined8 param_1,long param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long local_40 [3];
  byte local_21;
  long local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_21 = 0;
  local_20 = param_2;
  if (param_2 == 0) {
    uVar2 = local_18;
    FUN_004e33ec();
    local_21 = (byte)uVar2;
  }
  else if (param_2 == 1) {
    uVar2 = local_18;
    FUN_004e35e4(0);
    local_21 = (byte)uVar2;
  }
  else if (param_2 != 2) {
    if (param_2 == 3) {
      uVar2 = local_18;
      FUN_004e36cc(local_18,PTR_s_onCopy__026a4340);
      local_21 = (byte)uVar2;
    }
    else if (param_2 == 4) {
      uVar2 = local_18;
      FUN_004e3a4c(0);
      local_21 = (byte)uVar2;
    }
    else if (param_2 == 5) {
      uVar2 = local_18;
      FUN_004e3e6c(0);
      local_21 = (byte)uVar2;
    }
    else if (param_2 == 6) {
      puVar3 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_tryPresentThemeBoxAirDropFromMes_026a4348,
                 local_18);
      local_21 = (byte)puVar3;
    }
    else if (param_2 == 7) {
      uVar2 = local_18;
      FUN_004e43b4(local_18,0);
      local_21 = (byte)uVar2;
    }
    else if (param_2 == 8) {
      uVar2 = local_18;
      FUN_004e43b4(local_18,1);
      local_21 = (byte)uVar2;
    }
    else if (param_2 == 9) {
      uVar2 = local_18;
      FUN_004e477c(0);
      local_21 = (byte)uVar2;
    }
    else if (param_2 == 10) {
      uVar2 = local_18;
      FUN_004e4e9c(0);
      local_21 = (byte)uVar2;
    }
  }
  if ((local_21 & 1) == 0) {
    if (local_20 + -2 != 0) {
      lVar4 = local_20;
      FUN_004e568c(local_20 + -2);
      _objc_retainAutoreleasedReturnValue();
      local_40[0] = lVar4;
      (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_length_0269cca0);
      if (lVar4 != 0) {
        FUN_004e5890(lVar4,local_40[0]);
      }
      _objc_storeStrong(local_40,0);
    }
  }
  else {
    FUN_004e55d4();
  }
  bVar1 = local_21;
  _objc_storeStrong(&local_18,0);
  return bVar1 & 1;
}

