// FUN_008af868 @ 008af868

/* WARNING: Removing unreachable block (ram,0x008af96c) */
/* WARNING: Removing unreachable block (ram,0x008af94c) */

void FUN_008af868(ulong param_1,undefined8 param_2)

{
  byte bVar1;
  ulong uVar2;
  ulong local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  FUN_008b4e10();
  if ((param_1 & 1) != 0) {
    uVar2 = local_18;
    FUN_008c0384(local_18,"m_arrSelectMsg");
    _objc_retainAutoreleasedReturnValue();
    local_28 = uVar2;
    FUN_008c0aec(uVar2);
    _objc_storeStrong(&local_28,0);
  }
  bVar1 = DAT_028ce038 & 1;
  DAT_028ce038 = 1;
  (*DAT_028cdf68)(local_18,local_20);
  DAT_028ce038 = bVar1;
  return;
}

