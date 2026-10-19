// gestureRecognizerShouldBegin: @0xb6b8

/* Function Stack Size: 0x18 bytes */

bool WCMInboxController::gestureRecognizerShouldBegin_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double in_d1;
  double dVar7;
  undefined8 local_98;
  undefined8 local_40;
  undefined4 local_34;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  bool local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar3 = local_30;
  uVar1 = _objc_opt_class(&_OBJC_CLASS___UIPanGestureRecognizer);
  uVar2 = _objc_opt_isKindOfClass(uVar3,uVar1);
  if ((uVar2 & 1) == 0) {
    local_11 = true;
    local_34 = 1;
  }
  else {
    uVar3 = (*(code *)PTR__objc_retain_00110460)(local_30);
    local_40 = uVar3;
    _objc_msgSend_view(local_20,local_98);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    dVar5 = (double)_objc_msgSend_locationInView_(uVar3,local_98);
    dVar7 = in_d1;
    (*(code *)PTR__objc_release_00110458)(uVar1);
    uVar3 = local_40;
    _objc_msgSend_view(local_20,local_98);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    dVar6 = (double)_objc_msgSend_velocityInView_(uVar3,local_98);
    (*(code *)PTR__objc_release_00110458)(uVar1);
    _objc_msgSend_setCategorySwipeStart_(dVar5,in_d1,local_20,local_98);
    if ((dVar5 < 28.0) || (ABS(dVar6) < ABS(dVar7) * 1.4)) {
      local_11 = false;
    }
    else {
      _objc_msgSend_categories(local_20,local_98);
      uVar3 = _objc_retainAutoreleasedReturnValue();
      lVar4 = _objc_msgSend_selectedSegmentIndex(uVar3,local_98);
      (*(code *)PTR__objc_release_00110458)(uVar3);
      if ((dVar6 <= 0.0) || (local_11 = false, lVar4 != 0)) {
        local_11 = 0.0 <= dVar6 || lVar4 != 2;
      }
    }
    local_34 = 1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

