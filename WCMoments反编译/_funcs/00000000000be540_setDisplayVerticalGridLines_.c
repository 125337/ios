// setDisplayVerticalGridLines: @0xbe540

/* Function Stack Size: 0x14 bytes */

void WCMTOCropOverlayView::setDisplayVerticalGridLines_(ID param_1,SEL param_2,bool param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_58;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_00110518;
  *(byte *)(param_1 + (long)_displayVerticalGridLines) = (byte)param_3 & 1;
  _objc_msgSend_verticalGridLines(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_enumerateObjectsUsingBlock_(uVar1,local_58,&___block_literal_global_8);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  if ((*(byte *)(param_1 + (long)_displayVerticalGridLines) & 1) == 0) {
    _objc_msgSend_setVerticalGridLines_(param_1,local_58,PTR____NSArray0__struct_00110718);
  }
  else {
    _objc_msgSend_createNewLineView(param_1,local_58);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    local_28 = uVar1;
    _objc_msgSend_createNewLineView(param_1,local_58);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    local_20 = uVar2;
    _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_58,&local_28,2);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setVerticalGridLines_(param_1,local_58);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    (*(code *)PTR__objc_release_00110458)(uVar1);
  }
  _objc_msgSend_setGridHidden_animated_
            (param_1,local_58,*(byte *)(param_1 + (long)_gridHidden) & 1,0);
  _objc_msgSend_layoutLines(param_1,local_58);
  if (*(long *)PTR____stack_chk_guard_00110518 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_18);
  }
  return;
}

