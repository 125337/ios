// WCRefine_tryEmbedSearchButtonIntoRightTopMenu @ 004c8148

/* Function Stack Size: 0x10 bytes */

void WCRefineMainFrameSearchButton::WCRefine_tryEmbedSearchButtonIntoRightTopMenu
               (ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  ID local_38;
  undefined4 local_2c;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_navigationItem_0269cf08);
  _objc_retainAutoreleasedReturnValue();
  local_28 = param_1;
  if (param_1 == 0) {
    local_2c = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_rightBarButtonItem_0269feb8);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = false;
    local_38 = param_1;
    if (param_1 == 0) {
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_rightBarButtonItems_0269eab0);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = IVar3 != 0;
      (*(code *)PTR__objc_release_02578630)(IVar2);
    }
    if (bVar1) {
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_rightBarButtonItems_0269eab0);
      _objc_retainAutoreleasedReturnValue();
      IVar4 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      IVar2 = local_38;
      local_38 = IVar4;
      (*(code *)PTR__objc_release_02578630)(IVar2);
      (*(code *)PTR__objc_release_02578630)(IVar3);
    }
    IVar2 = local_38;
    puVar5 = PTR__OBJC_CLASS___UIBarButtonItem_026ce058;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIBarButtonItem_026ce058,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_isKindOfClass__0269cd68,puVar5);
    if ((IVar2 & 1) == 0) {
      local_2c = 1;
    }
    else {
      FUN_004c7fcc();
      if (IVar2 == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_WCRefine_removeEmbeddedSearchBut_026a4090,local_38);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_WCRefine_embedSearchButtonInRigh_026a4088,local_38);
      }
      local_2c = 0;
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

