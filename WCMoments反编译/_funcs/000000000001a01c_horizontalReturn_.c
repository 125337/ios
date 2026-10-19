// horizontalReturn: @0x1a01c

/* Function Stack Size: 0x18 bytes */

void WCMVideoController::horizontalReturn_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  undefined8 local_50;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar2 = _objc_msgSend_state(local_28,local_50);
  uVar1 = local_28;
  if (lVar2 == 3) {
    _objc_msgSend_view(local_18,local_50);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    dVar4 = (double)_objc_msgSend_translationInView_(uVar1,local_50);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    uVar1 = local_28;
    _objc_msgSend_view(local_18,local_50);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    dVar5 = (double)_objc_msgSend_velocityInView_(uVar1,local_50);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    if ((70.0 < ABS(dVar4)) || (650.0 < ABS(dVar5))) {
      _objc_msgSend_close(local_18,local_50);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

