// FUN_003fab90 @ 003fab90

void FUN_003fab90(undefined8 param_1)

{
  long lVar1;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 != 0) {
    FUN_003f2900(local_18);
    lVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_state_026cab20);
    if ((lVar1 == 1) ||
       (lVar1 = local_18, (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_state_026cab20),
       lVar1 == 2)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setEnabled__026ca938,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setEnabled__026ca938,1);
      FUN_003f2900(local_18);
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

