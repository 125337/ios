// showTailoringImageView: @0x6cf10

/* Function Stack Size: 0x18 bytes */

void WCMYBIBImageCell::showTailoringImageView_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 in_d1;
  undefined8 uVar6;
  undefined8 local_98;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  _objc_msgSend_wcm_yb_containerSize(local_18,local_98);
  lVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_wcm_yb_currentOrientation(local_18,local_98);
  lVar2 = _objc_retainAutoreleasedReturnValue();
  uVar3 = (**(code **)(lVar2 + 0x10))();
  uVar5 = (**(code **)(lVar1 + 0x10))(lVar1,uVar3);
  (*(code *)PTR__objc_release_00110458)(lVar2);
  (*(code *)PTR__objc_release_00110458)(lVar1);
  _objc_msgSend_tailoringImageView(local_18,local_98);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_superview(uVar3,local_98);
  lVar1 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)();
  (*(code *)PTR__objc_release_00110458)(uVar3);
  if (lVar1 == 0) {
    _objc_msgSend_contentView(local_18,local_98);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_tailoringImageView(local_18,local_98);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_addSubview_(uVar3,local_98);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    (*(code *)PTR__objc_release_00110458)(uVar3);
  }
  uVar6 = 0;
  uVar4 = _CGRectMake(0);
  _objc_msgSend_tailoringImageView(local_18,local_98);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setFrame_(uVar4,uVar6,uVar5,in_d1,uVar3,local_98);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  _objc_msgSend_tailoringImageView(local_18,local_98);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setHidden_(uVar3,local_98,0);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  uVar3 = local_28;
  _objc_msgSend_tailoringImageView(local_18,local_98);
  uVar5 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setImage_(uVar5,local_98,uVar3);
  (*(code *)PTR__objc_release_00110458)(uVar5);
  _objc_storeStrong(&local_28,0);
  return;
}

