// setCanBeReset: @0xb7810

/* Function Stack Size: 0x14 bytes */

void WCMTOCropView::setCanBeReset_(ID param_1,SEL param_2,bool param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 local_38;
  
  if ((param_3 & 1) != (*(byte *)(param_1 + (long)_canBeReset) & 1)) {
    *(byte *)(param_1 + (long)_canBeReset) = (byte)param_3 & 1;
    if ((param_3 & 1) == 0) {
      _objc_msgSend_delegate(param_1,local_38);
      uVar2 = _objc_retainAutoreleasedReturnValue();
      uVar1 = _objc_opt_respondsToSelector(uVar2,"cropViewDidBecomeNonResettable:");
      (*(code *)PTR__objc_release_00110458)(uVar2);
      if ((uVar1 & 1) != 0) {
        _objc_msgSend_delegate(param_1,local_38);
        uVar2 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend_cropViewDidBecomeNonResettable_(uVar2,local_38,param_1);
        (*(code *)PTR__objc_release_00110458)(uVar2);
      }
    }
    else {
      _objc_msgSend_delegate(param_1,local_38);
      uVar2 = _objc_retainAutoreleasedReturnValue();
      uVar1 = _objc_opt_respondsToSelector(uVar2,"cropViewDidBecomeResettable:");
      (*(code *)PTR__objc_release_00110458)(uVar2);
      if ((uVar1 & 1) != 0) {
        _objc_msgSend_delegate(param_1,local_38);
        uVar2 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend_cropViewDidBecomeResettable_(uVar2,local_38,param_1);
        (*(code *)PTR__objc_release_00110458)(uVar2);
      }
    }
  }
  return;
}

