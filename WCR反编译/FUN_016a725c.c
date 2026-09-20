// FUN_016a725c @ 016a725c

void FUN_016a725c(ulong param_1,undefined8 param_2,byte param_3)

{
  undefined *puVar1;
  
  (*DAT_028e3df0)(param_1,param_2,param_3 & 1);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isMovingFromParentViewController_0269f458);
  if ((param_1 & 1) != 0) {
    puVar1 = PTR_WCRefineMessageRepositoryStore_026ce120;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineMessageRepositoryStore_026ce120,PTR_s_isCompositeCapturePending_026b2e00)
    ;
    if (((ulong)puVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineMessageRepositoryStore_026ce120,PTR_s_cancelCompositeCapture_026b2e08);
    }
  }
  return;
}

