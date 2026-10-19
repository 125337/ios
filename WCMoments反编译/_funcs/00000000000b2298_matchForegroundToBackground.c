// matchForegroundToBackground @0xb2298

/* Function Stack Size: 0x10 bytes */

void WCMTOCropView::matchForegroundToBackground(ID param_1,SEL param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined8 local_b0;
  
  uVar1 = _objc_msgSend_disableForgroundMatching(param_1);
  if ((uVar1 & 1) == 0) {
    _objc_msgSend_backgroundContainerView(param_1,local_b0);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_superview(uVar2,local_b0);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_backgroundContainerView(param_1,local_b0);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    uVar6 = _objc_msgSend_frame(uVar4,local_b0);
    _objc_msgSend_foregroundContainerView(param_1,local_b0);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    uVar7 = _objc_msgSend_convertRect_toView_(uVar6,uVar3,local_b0);
    _objc_msgSend_foregroundImageView(param_1,local_b0);
    uVar6 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setFrame_(uVar7,in_d1,in_d2,in_d3,uVar6,local_b0);
    (*(code *)PTR__objc_release_00110458)(uVar6);
    (*(code *)PTR__objc_release_00110458)(uVar5);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    (*(code *)PTR__objc_release_00110458)(uVar2);
  }
  return;
}

