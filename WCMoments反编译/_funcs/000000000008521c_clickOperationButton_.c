// clickOperationButton: @0x8521c

/* Function Stack Size: 0x18 bytes */

void WCMYBIBTopView::clickOperationButton_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_38;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  _objc_msgSend_clickOperation(local_18,local_38);
  lVar1 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)();
  if (lVar1 != 0) {
    _objc_msgSend_clickOperation(local_18,local_38);
    lVar1 = _objc_retainAutoreleasedReturnValue();
    uVar2 = _objc_msgSend_operationType(local_18,local_38);
    (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
    (*(code *)PTR__objc_release_00110458)(lVar1);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

