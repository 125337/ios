// WCRefineToDo_ensureCard @ 007fe754

/* Function Stack Size: 0x10 bytes */

void WCRefineToDoHook::WCRefineToDo_ensureCard(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID local_38;
  undefined4 local_2c;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_WCRefineToDo_findMainTableView_026a87e8);
  _objc_retainAutoreleasedReturnValue();
  local_28 = param_1;
  if (param_1 == 0) {
    local_2c = 1;
  }
  else {
    FUN_007fe8cc();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(param_1);
    IVar1 = local_18;
    _objc_getAssociatedObject(local_18,&DAT_028ccee6);
    _objc_retainAutoreleasedReturnValue();
    local_38 = IVar1;
    FUN_007f309c();
    if (((((IVar1 & 1) == 0) && (FUN_007f7ae4(), (IVar1 & 1) == 0)) &&
        (FUN_007f8a9c(), (IVar1 & 1) == 0)) && (FUN_007f4368(), (IVar1 & 1) == 0)) {
      local_2c = 0;
    }
    else {
      IVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      IVar1 = local_28;
      (*(code *)PTR__objc_release_02578630)();
      if (IVar2 == IVar1) {
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_removeFromSuperview_026ca800);
      }
      local_2c = 1;
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

