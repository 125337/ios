// isSearching @ 019a3184

/* Function Stack Size: 0x10 bytes */

bool WCRefineFileManagerViewController::isSearching(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined4 local_38;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_searchVisible_026ba6e8);
  local_38 = 0;
  if ((IVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_searchText_026ba710);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_38 = (bool)(IVar1 != 0);
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  return local_38;
}

