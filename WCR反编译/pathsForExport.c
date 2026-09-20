// pathsForExport @ 019cf0f0

/* Function Stack Size: 0x10 bytes */

ID WCRefineFontListViewController::pathsForExport(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *local_58;
  bool local_49;
  undefined *local_48;
  ID local_40;
  SEL local_38;
  ID local_30;
  undefined *local_28;
  ID local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_38 = param_2;
  local_30 = param_1;
  if ((*(byte *)(param_1 + (long)_multiSelectMode) & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_currentActiveFontPath_026bae10);
    _objc_retainAutoreleasedReturnValue();
    local_40 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_length_0269cca0);
    if (param_1 == 0) {
      local_58 = *(undefined **)PTR____NSArray0___02578280;
    }
    else {
      local_20 = local_40;
      local_58 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_20
                 ,1);
      _objc_retainAutoreleasedReturnValue();
      local_48 = local_58;
    }
    local_49 = param_1 != 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = local_58;
    if (local_49) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    _objc_storeStrong(&local_40,0);
  }
  else {
    puVar1 = *(undefined **)(param_1 + (long)_selectedPaths);
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_allObjects_0269d228);
    _objc_retainAutoreleasedReturnValue();
    local_28 = puVar1;
  }
  if (*(long *)PTR____stack_chk_guard_02578670 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_28;
}

