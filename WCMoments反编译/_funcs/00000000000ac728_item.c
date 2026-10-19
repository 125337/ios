// item @0xac728

/* Function Stack Size: 0x10 bytes */

ID WCMTOActivityCroppedImageProvider::item(ID param_1,SEL param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ID IVar5;
  undefined8 uVar6;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined8 local_b8;
  uint local_ac;
  undefined8 local_88;
  byte local_79;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  undefined8 local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  lVar1 = _objc_msgSend_angle(param_1);
  local_79 = 0;
  local_ac = 0;
  if (lVar1 == 0) {
    local_48 = _objc_msgSend_cropFrame(local_20,local_b8);
    uStack_68 = *(undefined8 *)(PTR__CGPointZero_00110850 + 8);
    local_70 = *(undefined8 *)PTR__CGPointZero_00110850;
    local_40 = in_d1;
    local_38 = in_d2;
    local_30 = in_d3;
    _objc_msgSend_image(local_20,local_b8);
    local_78 = _objc_retainAutoreleasedReturnValue();
    local_79 = 1;
    local_60 = _objc_msgSend_size(local_78,local_b8);
    local_ac = _CGRectEqualToRect(local_48);
    in_d1 = local_40;
    in_d2 = local_38;
    in_d3 = local_30;
  }
  if ((local_79 & 1) != 0) {
    (*(code *)PTR__objc_release_00110458)(local_78);
  }
  if ((local_ac & 1) == 0) {
    _objc_msgSend_image(local_20,local_b8);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    uVar6 = _objc_msgSend_cropFrame(local_20,local_b8);
    uVar3 = _objc_msgSend_angle(local_20,local_b8);
    uVar4 = _objc_msgSend_circular(local_20,local_b8);
    _objc_msgSend_wcm_croppedImageWithFrame_angle_circularClip_
              (uVar6,in_d1,in_d2,in_d3,uVar2,local_b8,uVar3,uVar4);
    local_88 = _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _objc_msgSend_setCroppedImage_(local_20,local_b8,local_88);
    _objc_msgSend_croppedImage(local_20,local_b8);
    local_18 = _objc_retainAutoreleasedReturnValue();
    _objc_storeStrong(&local_88,0);
  }
  else {
    _objc_msgSend_image(local_20,local_b8);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setCroppedImage_(local_20,local_b8);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _objc_msgSend_croppedImage(local_20,local_b8);
    local_18 = _objc_retainAutoreleasedReturnValue();
  }
  IVar5 = _objc_autoreleaseReturnValue(local_18);
  return IVar5;
}

