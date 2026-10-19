// gestureRecognizerShouldBegin: @0x19ec8

/* Function Stack Size: 0x18 bytes */

bool WCMVideoController::gestureRecognizerShouldBegin_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double in_d1;
  undefined8 local_68;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar1 = local_30;
  uVar2 = _objc_opt_class(&_OBJC_CLASS___UIPanGestureRecognizer);
  uVar3 = _objc_opt_isKindOfClass(uVar1,uVar2);
  uVar1 = local_30;
  if ((uVar3 & 1) == 0) {
    local_11 = 1;
  }
  else {
    _objc_msgSend_view(local_20,local_68);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    dVar5 = (double)_objc_msgSend_velocityInView_(uVar1,local_68);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _objc_msgSend_presentedViewController(local_20,local_68);
    lVar4 = _objc_retainAutoreleasedReturnValue();
    local_11 = lVar4 == 0 && ABS(in_d1) * 1.5 < ABS(dVar5);
    (*(code *)PTR__objc_release_00110458)(lVar4);
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

