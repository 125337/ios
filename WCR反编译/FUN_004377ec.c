// FUN_004377ec @ 004377ec

void FUN_004377ec(undefined8 param_1)

{
  ulong uVar1;
  undefined *local_28;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 != 0) {
    local_28 = PTR_s_initBarItem_0269fe20;
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_m_bMultiSelect_026a39d0);
    if (((uVar1 & 1) != 0) &&
       (uVar1 = local_18,
       (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_m_bMultiSelect_026a39d0),
       (uVar1 & 1) != 0)) {
      local_28 = PTR_s_updateMultiSelectRightBtn_026a39d8;
    }
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_respondsToSelector__026ca818,local_28);
    if ((uVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,local_28);
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

