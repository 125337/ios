// setTitle: @0xa9be0

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

void WCMTOCropViewController::setTitle_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined8 uVar7;
  undefined8 local_118;
  ID local_48;
  class_t *local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_48 = local_28;
  local_40 = &objc::class_t::WCMTOCropViewController;
  _objc_msgSendSuper2(&local_48,"setTitle:",local_38);
  _objc_msgSend_title(local_28,local_118);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  lVar3 = _objc_msgSend_length(uVar2,local_118);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  if (lVar3 == 0) {
    _objc_msgSend_removeFromSuperview(*(undefined8 *)(local_28 + (long)_titleLabel),local_118);
    uVar7 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar2 = _UIEdgeInsetsMake(0);
    _objc_msgSend_setCropRegionInsets_
              (uVar2,uVar4,uVar5,uVar7,*(undefined8 *)(local_28 + (long)_cropView),local_118);
    _objc_storeStrong(local_28 + (long)_titleLabel,0);
  }
  else {
    _objc_msgSend_title(local_28,local_118);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_titleLabel(local_28,local_118);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setText_(uVar4,local_118,uVar2);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _objc_msgSend_titleLabel(local_28,local_118);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_sizeToFit(uVar2,local_118);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    IVar1 = local_28;
    _objc_msgSend_titleLabel(local_28,local_118);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_frame(uVar5,local_118);
    uVar2 = in_d2;
    uVar4 = in_d3;
    uVar7 = _objc_msgSend_verticalLayout(local_28,local_118);
    uVar6 = _objc_msgSend_frameForTitleLabelWithSize_verticalLayout_(in_d2,IVar1,local_118,uVar7);
    _objc_msgSend_titleLabel(local_28,local_118);
    uVar7 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setFrame_(uVar6,in_d3,uVar2,uVar4,uVar7,local_118);
    (*(code *)PTR__objc_release_00110458)(uVar7);
    (*(code *)PTR__objc_release_00110458)(uVar5);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

