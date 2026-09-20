// FUN_0024a020 @ 0024a020

void FUN_0024a020(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  (*DAT_028c9378)(param_1,param_2);
  puVar1 = PTR_WCRefineEmoticonGroupStore_026ce420;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineEmoticonGroupStore_026ce420,PTR_s_isEnabled_026a0ef0);
  if (((ulong)puVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_WCRefine_ensureGroupMoveButton_026a0e00);
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_WCRefine_syncGroupMoveButtonVisi_026a0df8);
  }
  return;
}

