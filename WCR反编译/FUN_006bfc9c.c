// FUN_006bfc9c @ 006bfc9c

void FUN_006bfc9c(ulong param_1,undefined8 param_2)

{
  char *pcVar1;
  ulong uVar2;
  ulong local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*DAT_028cc1d0)(param_1,param_2);
  uVar2 = local_18;
  if (DAT_028cc1f0 == (char *)0x0) {
    pcVar1 = "MMTitleView";
    _objc_getClass();
    DAT_028cc1f0 = pcVar1;
  }
  pcVar1 = DAT_028cc1f0;
  _objc_retainAutoreleaseReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isMemberOfClass__026a2030,pcVar1);
  if ((uVar2 & 1) != 0) {
    uVar2 = local_18;
    FUN_006c0ab0();
    _objc_retainAutoreleasedReturnValue();
    local_28 = uVar2;
    if (uVar2 != 0) {
      FUN_006c00cc(uVar2,local_18);
    }
    _objc_storeStrong(&local_28,0);
  }
  return;
}

