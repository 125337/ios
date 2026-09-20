// FUN_00526448 @ 00526448

void FUN_00526448(undefined *param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined8 local_28;
  undefined *local_20;
  undefined *local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  FUN_0052b2cc();
  if (((ulong)param_1 & 1) != 0) {
    puVar2 = PTR_WCRefineMomentsMonitor_026ce718;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineMomentsMonitor_026ce718,PTR_s_archivedMediaPathForMediaItem_ki_026a4b48,
               local_20,&cf_hd);
    _objc_retainAutoreleasedReturnValue();
    local_30 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_length_0269cca0);
    puVar3 = local_30;
    bVar1 = puVar2 != (undefined *)0x0;
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = puVar3;
    }
    _objc_storeStrong(bVar1,&local_30,0);
    if (bVar1) goto LAB_0052655c;
  }
  puVar3 = local_20;
  (*DAT_028cb190)(local_20,local_28);
  _objc_retainAutoreleasedReturnValue();
  local_18 = puVar3;
LAB_0052655c:
  _objc_autoreleaseReturnValue(local_18);
  return;
}

