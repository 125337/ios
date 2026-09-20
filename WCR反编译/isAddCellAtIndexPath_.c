// isAddCellAtIndexPath: @ 01eb5b6c

/* Function Stack Size: 0x18 bytes */

bool WCRefineToDoListEditorViewController::isAddCellAtIndexPath_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  long lVar2;
  bool local_2c;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_showAddCell_026c7788);
  local_2c = 0;
  if ((IVar1 & 1) != 0) {
    lVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_section_0269e988);
    local_2c = 0;
    if (lVar2 == 0) {
      lVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_row_0269e210);
      local_2c = (bool)(lVar2 == 0);
    }
  }
  _objc_storeStrong(&local_28,0);
  return local_2c;
}

