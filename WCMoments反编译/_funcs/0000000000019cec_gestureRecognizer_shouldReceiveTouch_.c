// gestureRecognizer:shouldReceiveTouch: @0x19cec

/* Function Stack Size: 0x20 bytes */

bool WCMVideoController::gestureRecognizer_shouldReceiveTouch_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 local_58;
  int local_50;
  long local_40;
  undefined8 local_38;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  _objc_msgSend_view(local_38,local_58);
  local_40 = _objc_retainAutoreleasedReturnValue();
  while( true ) {
    lVar1 = local_40;
    bVar2 = false;
    if (local_40 != 0) {
      _objc_msgSend_collection(local_20,local_58);
      lVar3 = _objc_retainAutoreleasedReturnValue();
      bVar2 = lVar1 != lVar3;
      (*(code *)PTR__objc_release_00110458)(lVar3);
    }
    lVar1 = local_40;
    if (!bVar2) break;
    uVar4 = _objc_opt_class(&_OBJC_CLASS___UIControl);
    uVar5 = _objc_opt_isKindOfClass(lVar1,uVar4);
    if ((uVar5 & 1) != 0) {
      local_11 = 0;
      local_50 = 1;
LAB_00019e64:
      _objc_storeStrong(&local_40,0);
      local_50 = local_50 + -2;
      if (local_50 == 0) {
        local_50 = 1;
        local_11 = 1;
      }
      _objc_storeStrong(local_50,&local_38);
      _objc_storeStrong(&local_30,0);
      return local_11 & 1;
    }
    _objc_msgSend_superview(local_40,local_58);
    lVar3 = _objc_retainAutoreleasedReturnValue();
    lVar1 = local_40;
    local_40 = lVar3;
    (*(code *)PTR__objc_release_00110458)(lVar1);
  }
  local_50 = 2;
  goto LAB_00019e64;
}

