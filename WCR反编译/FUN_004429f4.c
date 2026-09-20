// FUN_004429f4 @ 004429f4

void FUN_004429f4(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  
  (*DAT_028caa50)(param_1,param_2);
  puVar1 = PTR_WCRefineLocalEmoticonStore_026ce440;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_isEnabled_026a0ef0);
  if ((((ulong)puVar1 & 1) != 0) && (uVar2 = param_1, FUN_004504e8(), (uVar2 & 1) != 0)) {
    FUN_00456b5c(param_1);
  }
  return;
}

