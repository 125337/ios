// FUN_004433ec @ 004433ec

void FUN_004433ec(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  
  puVar1 = PTR_WCRefineLocalEmoticonStore_026ce440;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_isEnabled_026a0ef0);
  if ((((ulong)puVar1 & 1) != 0) && (uVar2 = param_1, FUN_004504e8(), (uVar2 & 1) != 0)) {
    FUN_0043c2a4(param_1);
  }
  return;
}

