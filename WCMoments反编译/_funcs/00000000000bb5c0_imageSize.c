// imageSize @0xbb5c0

/* Function Stack Size: 0x10 bytes */

CGSize __thiscall WCMTOCropView::imageSize(WCMTOCropView *this,ID param_1,SEL param_2)

{
  CGSize CVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double in_d1;
  undefined8 local_78;
  undefined8 local_20;
  undefined8 local_18;
  
  lVar2 = _objc_msgSend_angle(this);
  if (lVar2 + 0x5a != 0) {
    lVar2 = _objc_msgSend_angle(lVar2 + 0x5a,this,local_78);
    if (lVar2 + 0x10e != 0) {
      lVar2 = _objc_msgSend_angle(lVar2 + 0x10e,this,local_78);
      if (lVar2 + -0x5a != 0) {
        lVar2 = _objc_msgSend_angle(lVar2 + -0x5a,this,local_78);
        if (lVar2 + -0x10e != 0) {
          _objc_msgSend_image(lVar2 + -0x10e,this,local_78);
          uVar3 = _objc_retainAutoreleasedReturnValue();
          local_20 = (double)_objc_msgSend_size(uVar3,local_78);
          _objc_msgSend_image(this,local_78);
          uVar4 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend_size(uVar4,local_78);
          (*(code *)PTR__objc_release_00110458)(uVar4);
          (*(code *)PTR__objc_release_00110458)(uVar3);
          local_18 = in_d1;
          goto LAB_000bb73c;
        }
      }
    }
  }
  _objc_msgSend_image(0,this,local_78);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_size(uVar3,local_78);
  _objc_msgSend_image(this,local_78);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  local_18 = (double)_objc_msgSend_size(uVar4,local_78);
  (*(code *)PTR__objc_release_00110458)(uVar4);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  local_20 = in_d1;
LAB_000bb73c:
  CVar1.field1_0x8 = local_18;
  CVar1.field0_0x0 = local_20;
  return CVar1;
}

