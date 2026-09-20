// handleLongPressFromCell: @ 00f6ee18

/* Function Stack Size: 0x18 bytes */

void WCRefineForwardToGroupHelper::handleLongPressFromCell_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong local_50;
  ulong local_48;
  undefined4 local_3c;
  ulong local_38;
  SEL local_30;
  ID local_28;
  ulong local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_longPressEntryEnabled_026ac9d8);
  if ((IVar1 & 1) == 0) {
    local_3c = 1;
  }
  else {
    FUN_00f6f008();
    uVar2 = local_38;
    FUN_00f6e63c();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_38;
    local_48 = uVar2;
    if (uVar2 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elSmo_);
      local_3c = 1;
    }
    else {
      local_50 = 0;
      puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
      if ((uVar4 & 1) != 0) {
        uVar2 = local_38;
        FUN_00f6f13c();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = local_50;
        local_50 = uVar2;
        (*(code *)PTR__objc_release_02578630)(uVar4);
      }
      uVar4 = local_50;
      local_20 = local_48;
      puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_20
                 ,1);
      _objc_retainAutoreleasedReturnValue();
      FUN_00f6f26c(uVar4);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      _objc_storeStrong(&local_50,0);
      local_3c = 0;
    }
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

