// webTableHostIfEligible @ 01e89548

/* Function Stack Size: 0x10 bytes */

ID WCRefineToDoCardView::webTableHostIfEligible(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  ID local_18;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_usesExpandedPreviewSlot_026c7270);
  if ((IVar1 & 1) == 0) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (puVar3 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_enclosingTableView_026c6e68);
      _objc_retainAutoreleasedReturnValue();
      local_18 = param_1;
    }
    else {
      local_18 = 0;
    }
  }
  else {
    local_18 = 0;
  }
  _objc_autoreleaseReturnValue();
  return local_18;
}

