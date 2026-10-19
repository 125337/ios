// setOperationType: @0x852d4

/* Function Stack Size: 0x18 bytes */

void WCMYBIBTopView::setOperationType_(ID param_1,SEL param_2,long_long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_50;
  undefined8 local_30;
  long_long local_28;
  SEL local_20;
  ID local_18;
  
  *(long_long *)(param_1 + (long)_operationType) = param_3;
  local_30 = 0;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  if (param_3 == 0) {
    _objc_msgSend_sharedManager(&objc::class_t::WCMYBIBIconManager,local_50);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_toolSaveImage(uVar1,local_50);
    lVar2 = _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))();
    uVar3 = _objc_retainAutoreleasedReturnValue();
    uVar4 = local_30;
    local_30 = uVar3;
    (*(code *)PTR__objc_release_00110458)(uVar4);
    (*(code *)PTR__objc_release_00110458)(lVar2);
    (*(code *)PTR__objc_release_00110458)(uVar1);
  }
  else if (param_3 == 1) {
    _objc_msgSend_sharedManager(&objc::class_t::WCMYBIBIconManager,local_50);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_toolMoreImage(uVar1,local_50);
    lVar2 = _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))();
    uVar3 = _objc_retainAutoreleasedReturnValue();
    uVar4 = local_30;
    local_30 = uVar3;
    (*(code *)PTR__objc_release_00110458)(uVar4);
    (*(code *)PTR__objc_release_00110458)(lVar2);
    (*(code *)PTR__objc_release_00110458)(uVar1);
  }
  _objc_msgSend_operationButton(local_18,local_50);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setImage_forState_(uVar4,local_50,local_30,0);
  (*(code *)PTR__objc_release_00110458)(uVar4);
  _objc_storeStrong(&local_30,0);
  return;
}

