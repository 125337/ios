// enclosingNonTableScrollView @ 01e8e9c8

/* Function Stack Size: 0x10 bytes */

ID WCRefineToDoCardView::enclosingNonTableScrollView(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  ID local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_superview_026cab50);
  _objc_retainAutoreleasedReturnValue();
  local_30 = param_1;
  do {
    IVar2 = local_30;
    if (local_30 == 0) {
      local_18 = 0;
LAB_01e8eb24:
      _objc_storeStrong(&local_30,0);
      _objc_autoreleaseReturnValue();
      return local_18;
    }
    puVar1 = PTR__OBJC_CLASS___UITableView_026ce1a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    IVar3 = local_30;
    if ((IVar2 & 1) != 0) {
      local_18 = 0;
      goto LAB_01e8eb24;
    }
    puVar1 = PTR__OBJC_CLASS___UIScrollView_026ce1a0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIScrollView_026ce1a0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
    IVar2 = local_30;
    if ((IVar3 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = IVar2;
      goto LAB_01e8eb24;
    }
    IVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_30;
    local_30 = IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar2);
  } while( true );
}

