// FUN_0006b8cc @ 0006b8cc

void FUN_0006b8cc(double param_1,ulong param_2,undefined8 param_3)

{
  byte bVar1;
  ulong uVar2;
  double local_58;
  double local_50;
  double local_48;
  
  uVar2 = param_2;
  _WCRHomeScrollPerfIsActive();
  bVar1 = (byte)uVar2;
  _WCRHomeJankTableCaptureIsActive();
  if (((uVar2 & 1) == 0) && ((bVar1 & 1) == 0)) {
    local_48 = 0.0;
  }
  else {
    _CACurrentMediaTime();
    local_48 = param_1;
  }
  local_50 = local_48;
  (*DAT_028c7e08)(param_2,param_3);
  if (((uVar2 & 1) == 0) && ((bVar1 & 1) == 0)) {
    local_50 = 0.0;
  }
  else {
    _CACurrentMediaTime();
  }
  local_58 = local_50;
  FUN_00078388(param_2);
  if (((uVar2 & 1) == 0) && ((bVar1 & 1) == 0)) {
    local_58 = 0.0;
  }
  else {
    _CACurrentMediaTime();
  }
  if ((uVar2 & 1) != 0) {
    _WCRHomeScrollPerfRecordAvatarLayout
              ((local_50 - local_48) * 1000.0,(local_58 - local_50) * 1000.0);
  }
  if ((bVar1 & 1) != 0) {
    _WCRHomeJankRecordAvatarLayout((local_50 - local_48) * 1000.0,(local_58 - local_50) * 1000.0);
  }
  return;
}

