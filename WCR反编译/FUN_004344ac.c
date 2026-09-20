// FUN_004344ac @ 004344ac

void FUN_004344ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar3;
  undefined8 local_50 [3];
  byte local_31;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 *puVar2;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar2 = &local_30;
  local_30 = 0;
  _objc_storeStrong(puVar2,param_4);
  uVar1 = (uint)puVar2;
  FUN_00436d1c();
  local_31 = (byte)uVar1;
  if ((uVar1 & 1) != 0) {
    uVar3 = local_18;
    FUN_00436dfc(local_18,"m_forwardLogicController");
    _objc_retainAutoreleasedReturnValue();
    local_50[0] = uVar3;
    FUN_00436f2c(uVar3);
    _objc_storeStrong(local_50,0);
  }
  (*DAT_028ca8a0)(local_18,local_20,local_28,local_30);
  if ((local_31 & 1) != 0) {
    uVar3 = local_18;
    FUN_00436dfc(local_18,"m_forwardLogicController");
    _objc_retainAutoreleasedReturnValue();
    FUN_00436f2c();
    (*(code *)PTR__objc_release_02578630)(uVar3);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

