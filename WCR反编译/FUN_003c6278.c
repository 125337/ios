// FUN_003c6278 @ 003c6278

void FUN_003c6278(double param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  double dVar3;
  double local_60;
  double local_58;
  undefined8 local_18;
  undefined8 *puVar2;
  
  puVar2 = &local_18;
  local_18 = 0;
  _objc_storeStrong(puVar2,param_2);
  bVar1 = (byte)puVar2;
  _WCRHomeScrollPerfIsActive();
  if ((bVar1 & 1) == 0) {
    local_58 = 0.0;
  }
  else {
    _CACurrentMediaTime();
    local_58 = param_1;
  }
  local_60 = local_58;
  if (DAT_028ca278 != (code *)0x0) {
    (*DAT_028ca278)(local_18,param_3);
  }
  if ((bVar1 & 1) == 0) {
    local_60 = 0.0;
  }
  else {
    _CACurrentMediaTime();
  }
  dVar3 = local_60;
  FUN_003cbf5c(local_18);
  if ((bVar1 & 1) != 0) {
    _CACurrentMediaTime();
    _WCRHomeScrollPerfRecordCellLayout((local_60 - local_58) * 1000.0,(dVar3 - local_60) * 1000.0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

