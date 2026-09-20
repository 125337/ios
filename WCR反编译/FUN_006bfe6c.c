// FUN_006bfe6c @ 006bfe6c

void FUN_006bfe6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_WCRefineQuickRemarkEditor_026ce820;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineQuickRemarkEditor_026ce820,PTR_s_handleOwnedOfficialDismissIfNeed_026a6900,
             param_1);
  if (((ulong)puVar1 & 1) == 0) {
    (*DAT_028cc1e8)(param_1,param_2);
  }
  return;
}

