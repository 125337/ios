// itemAtIndexPath: @ 01d182d4

/* Function Stack Size: 0x18 bytes */

ID WCRefineQuickReplyListViewController::itemAtIndexPath_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ID IVar2;
  ID IVar3;
  ulong local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_section_0269e988);
  if (uVar1 == 0) {
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_row_0269e210);
    IVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_repoItems_026c40b8);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    if (uVar1 < IVar3) {
      IVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_repoItems_026c40b8);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_row_0269e210);
      IVar3 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_objectAtIndexedSubscript__0269cc78,uVar1);
      _objc_retainAutoreleasedReturnValue();
      local_18 = IVar3;
      (*(code *)PTR__objc_release_02578630)(IVar2);
    }
    else {
      local_18 = 0;
    }
  }
  else {
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_row_0269e210);
    IVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_customItems_026af318);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    if (uVar1 < IVar3) {
      IVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_customItems_026af318);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_row_0269e210);
      IVar3 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_objectAtIndexedSubscript__0269cc78,uVar1);
      _objc_retainAutoreleasedReturnValue();
      local_18 = IVar3;
      (*(code *)PTR__objc_release_02578630)(IVar2);
    }
    else {
      local_18 = 0;
    }
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

