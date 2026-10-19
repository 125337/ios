// ___61-[WCMTOCropViewController_frameForToolbarWithVerticalLayout:]_block_invoke @0xa35f8

void ___61__WCMTOCropViewController_frameForToolbarWithVerticalLayout___block_invoke
               (undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  undefined8 local_90;
  long local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  char *local_40 [5];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_00110518;
  local_40[1] = "Corner";
  local_40[0] = "Radius";
  local_40[3] = "_";
  local_40[2] = "display";
  local_50 = param_1;
  local_48 = param_1;
  local_58 = (*(code *)PTR__objc_retain_00110460)(&cf___);
  for (local_60 = 3; uVar2 = local_58, -1 < local_60; local_60 = local_60 + -1) {
    uVar1 = _objc_msgSend_stringWithCString_encoding_
                      (&_OBJC_CLASS___NSString,local_90,local_40[local_60],4);
    uVar1 = _objc_retainAutoreleasedReturnValue(uVar1);
    uVar2 = _objc_msgSend_stringByAppendingString_(uVar2,local_90);
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar2);
    uVar2 = local_58;
    local_58 = uVar3;
    (*(code *)PTR__objc_release_00110458)(uVar2);
    (*(code *)PTR__objc_release_00110458)(uVar1);
  }
  uVar2 = _objc_msgSend_mainScreen(&_OBJC_CLASS___UIScreen,local_90);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  uVar1 = _objc_msgSend_valueForKey_(uVar2,local_90,local_58);
  uVar1 = _objc_retainAutoreleasedReturnValue(uVar1);
  fVar4 = (float)_objc_msgSend_floatValue(uVar1,local_90);
  _frameForToolbarWithVerticalLayout__cornerRadius = (double)fVar4;
  (*(code *)PTR__objc_release_00110458)(uVar1);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_storeStrong(&local_58,0);
  if (*(long *)PTR____stack_chk_guard_00110518 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_18);
  }
  return;
}

