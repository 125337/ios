// setup @0xbcc04

/* Function Stack Size: 0x10 bytes */

void WCMTOCropOverlayView::setup(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_f0;
  undefined8 local_a8;
  long local_a0;
  SEL local_98;
  ID local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  local_98 = param_2;
  local_90 = param_1;
  local_a8 = (*(code *)PTR__objc_retain_00110460)(param_1);
  local_a0 = _objc_retainBlock();
  (**(code **)(local_a0 + 0x10))();
  uVar1 = _objc_retainAutoreleasedReturnValue();
  local_48 = uVar1;
  (**(code **)(local_a0 + 0x10))();
  uVar2 = _objc_retainAutoreleasedReturnValue();
  local_40 = uVar2;
  (**(code **)(local_a0 + 0x10))();
  uVar3 = _objc_retainAutoreleasedReturnValue();
  local_38 = uVar3;
  (**(code **)(local_a0 + 0x10))();
  uVar4 = _objc_retainAutoreleasedReturnValue();
  local_30 = uVar4;
  _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_f0,&local_48,4);
  uVar5 = _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(local_90 + (long)_outerLineViews);
  *(undefined8 *)(local_90 + (long)_outerLineViews) = uVar5;
  (*(code *)PTR__objc_release_00110458)(uVar6);
  (*(code *)PTR__objc_release_00110458)(uVar4);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  (**(code **)(local_a0 + 0x10))();
  uVar1 = _objc_retainAutoreleasedReturnValue();
  local_58 = uVar1;
  (**(code **)(local_a0 + 0x10))();
  uVar2 = _objc_retainAutoreleasedReturnValue();
  local_50 = uVar2;
  _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_f0,&local_58);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(local_90 + (long)_topLeftLineViews);
  *(undefined8 *)(local_90 + (long)_topLeftLineViews) = uVar3;
  (*(code *)PTR__objc_release_00110458)(uVar4);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  (**(code **)(local_a0 + 0x10))();
  uVar1 = _objc_retainAutoreleasedReturnValue();
  local_68 = uVar1;
  (**(code **)(local_a0 + 0x10))();
  uVar2 = _objc_retainAutoreleasedReturnValue();
  local_60 = uVar2;
  _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_f0,&local_68,2);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(local_90 + (long)_bottomLeftLineViews);
  *(undefined8 *)(local_90 + (long)_bottomLeftLineViews) = uVar3;
  (*(code *)PTR__objc_release_00110458)(uVar4);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  (**(code **)(local_a0 + 0x10))();
  uVar1 = _objc_retainAutoreleasedReturnValue();
  local_78 = uVar1;
  (**(code **)(local_a0 + 0x10))();
  uVar2 = _objc_retainAutoreleasedReturnValue();
  local_70 = uVar2;
  _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_f0,&local_78,2);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(local_90 + (long)_topRightLineViews);
  *(undefined8 *)(local_90 + (long)_topRightLineViews) = uVar3;
  (*(code *)PTR__objc_release_00110458)(uVar4);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  (**(code **)(local_a0 + 0x10))();
  uVar1 = _objc_retainAutoreleasedReturnValue();
  local_88 = uVar1;
  (**(code **)(local_a0 + 0x10))();
  uVar2 = _objc_retainAutoreleasedReturnValue();
  local_80 = uVar2;
  _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_f0,&local_88,2);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(local_90 + (long)_bottomRightLineViews);
  *(undefined8 *)(local_90 + (long)_bottomRightLineViews) = uVar3;
  (*(code *)PTR__objc_release_00110458)(uVar4);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_setDisplayHorizontalGridLines_(local_90,local_f0,1);
  _objc_msgSend_setDisplayVerticalGridLines_(local_90,local_f0,1);
  _objc_storeStrong(&local_a0);
  _objc_storeStrong(&local_a8,0);
  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);
  }
  return;
}

