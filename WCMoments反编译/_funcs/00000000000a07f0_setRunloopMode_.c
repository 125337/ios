// setRunloopMode: @0xa07f0

/* Function Stack Size: 0x18 bytes */

void WCMYYAnimatedImageView::setRunloopMode_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_38;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = _objc_msgSend_isEqual_(*(undefined8 *)(local_18 + (long)_runloopMode),local_38,local_28);
  if ((uVar1 & 1) == 0) {
    if (*(long *)(local_18 + (long)_link) != 0) {
      if (*(long *)(local_18 + (long)_runloopMode) != 0) {
        uVar4 = *(undefined8 *)(local_18 + (long)_link);
        _objc_msgSend_mainRunLoop(&_OBJC_CLASS___NSRunLoop,local_38);
        uVar2 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend_removeFromRunLoop_forMode_
                  (uVar4,local_38,uVar2,*(undefined8 *)(local_18 + (long)_runloopMode));
        (*(code *)PTR__objc_release_00110458)(uVar2);
      }
      lVar3 = _objc_msgSend_length(local_28,local_38);
      if (lVar3 != 0) {
        uVar4 = *(undefined8 *)(local_18 + (long)_link);
        _objc_msgSend_mainRunLoop(&_OBJC_CLASS___NSRunLoop,local_38);
        uVar2 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend_addToRunLoop_forMode_(uVar4,local_38,uVar2,local_28);
        (*(code *)PTR__objc_release_00110458)(uVar2);
      }
    }
    uVar2 = _objc_msgSend_copy(local_28,local_38);
    uVar4 = *(undefined8 *)(local_18 + (long)_runloopMode);
    *(undefined8 *)(local_18 + (long)_runloopMode) = uVar2;
    (*(code *)PTR__objc_release_00110458)(uVar4);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

