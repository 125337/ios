// dismissalTransitionDidEnd: @0xf660

/* Function Stack Size: 0x14 bytes */

void WCMCommentPresentation::dismissalTransitionDidEnd_(ID param_1,SEL param_2,bool param_3)

{
  undefined8 uVar1;
  undefined8 local_38;
  
  if ((param_3 & 1) != 0) {
    _objc_msgSend_dimmer(param_1,local_38);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_removeFromSuperview(uVar1,local_38);
    (*(code *)PTR__objc_release_00110458)(uVar1);
  }
  return;
}

