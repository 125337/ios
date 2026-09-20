// FUN_00516e28 @ 00516e28

void FUN_00516e28(undefined8 param_1)

{
  ulong uVar1;
  ulong local_28;
  undefined4 local_1c;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if ((local_18 == 0) || ((DAT_028cb05a & 1) != 0)) {
    local_1c = 1;
  }
  else {
    DAT_028cb05a = 1;
    uVar1 = local_18;
    FUN_00516fb4();
    _objc_retainAutoreleasedReturnValue();
    local_28 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_count_0269cfe0);
    if (uVar1 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_removeAllObjects_0269d508);
      uVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_saveFailedLikeQueue_026a47e0);
      if ((uVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_saveFailedLikeQueue_026a47e0);
      }
    }
    DAT_028cb05a = 0;
    _objc_storeStrong(&local_28,0);
    local_1c = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

