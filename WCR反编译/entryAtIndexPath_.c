// entryAtIndexPath: @ 01eb57e8

/* Function Stack Size: 0x18 bytes */

ID WCRefineToDoListEditorViewController::entryAtIndexPath_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  long lVar2;
  ID IVar3;
  ID IVar4;
  long local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  lVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_section_0269e988);
  if (lVar2 == 0) {
    IVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_showAddCell_026c7788);
    lVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_row_0269e210);
    lVar2 = lVar2 - (int)(uint)((IVar3 & 1) != 0);
    bVar1 = false;
    if (-1 < lVar2) {
      IVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_pendingEntries_026c7790);
      _objc_retainAutoreleasedReturnValue();
      IVar4 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = lVar2 < (long)IVar4;
      (*(code *)PTR__objc_release_02578630)(IVar3);
    }
    if (bVar1) {
      IVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_pendingEntries_026c7790);
      _objc_retainAutoreleasedReturnValue();
      IVar4 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_18 = IVar4;
      (*(code *)PTR__objc_release_02578630)(IVar3);
    }
    else {
      local_18 = 0;
    }
  }
  else {
    lVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_section_0269e988);
    bVar1 = false;
    if (lVar2 == 1) {
      lVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_row_0269e210);
      IVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_doneEntries_026c7758);
      _objc_retainAutoreleasedReturnValue();
      IVar4 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = lVar2 < (long)IVar4;
      (*(code *)PTR__objc_release_02578630)(IVar3);
    }
    if (bVar1) {
      IVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_doneEntries_026c7758);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_row_0269e210);
      IVar4 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_objectAtIndexedSubscript__0269cc78,lVar2);
      _objc_retainAutoreleasedReturnValue();
      local_18 = IVar4;
      (*(code *)PTR__objc_release_02578630)(IVar3);
    }
    else {
      local_18 = 0;
    }
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

