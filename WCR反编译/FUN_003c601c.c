// FUN_003c601c @ 003c601c

void FUN_003c601c(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong *puVar2;
  ulong uVar3;
  double dVar4;
  double local_88;
  double local_70;
  undefined8 local_40;
  double local_38;
  ulong local_30;
  byte local_21;
  undefined8 local_20;
  ulong local_18;
  
  puVar2 = &local_18;
  local_18 = 0;
  _objc_storeStrong(puVar2,param_2);
  local_21 = (byte)puVar2;
  local_20 = param_3;
  _WCRHomeScrollPerfIsActive();
  uVar3 = local_18;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = uVar3;
  if ((local_21 & 1) == 0) {
    local_70 = 0.0;
  }
  else {
    _CACurrentMediaTime();
    local_70 = param_1;
  }
  uVar1 = DAT_028ca288;
  local_38 = local_70;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = uVar1;
  DAT_028ca288 = local_18;
  if (DAT_028ca268 != (code *)0x0) {
    (*DAT_028ca268)(local_18,local_20);
  }
  DAT_028ca288 = local_40;
  if ((local_21 & 1) == 0) {
    local_88 = 0.0;
  }
  else {
    _CACurrentMediaTime();
    local_88 = local_70;
  }
  uVar3 = local_30;
  dVar4 = local_88;
  FUN_00372850();
  if ((uVar3 & 1) != 0) {
    FUN_003c67a4(local_18);
    FUN_003c8f34(local_18);
  }
  if ((local_21 & 1) == 0) {
    FUN_003c94dc(local_18);
  }
  FUN_003c69dc(local_18);
  if ((local_21 & 1) != 0) {
    _CACurrentMediaTime();
    _WCRHomeScrollPerfRecordItemLayout((local_88 - local_38) * 1000.0,(dVar4 - local_88) * 1000.0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_18,0);
  return;
}

