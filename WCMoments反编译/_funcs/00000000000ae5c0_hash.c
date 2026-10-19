// hash @0xae5c0

/* Function Stack Size: 0x10 bytes */

unsigned_long_long __thiscall
WCMTOCropViewControllerAspectRatioPreset::hash
          (WCMTOCropViewControllerAspectRatioPreset *this,ID param_1,SEL param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 in_d1;
  undefined8 local_60;
  
  uVar4 = _objc_msgSend_size(this);
  _objc_msgSend_numberWithDouble_(uVar4,&_OBJC_CLASS___NSNumber,local_60);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  lVar1 = _objc_msgSend_hash(uVar4,local_60);
  (*(code *)PTR__objc_release_00110458)(uVar4);
  _objc_msgSend_size(this,local_60);
  _objc_msgSend_numberWithDouble_(in_d1,&_OBJC_CLASS___NSNumber,local_60);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  lVar2 = _objc_msgSend_hash(uVar4,local_60);
  (*(code *)PTR__objc_release_00110458)(uVar4);
  _objc_msgSend_title(this,local_60);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  lVar3 = _objc_msgSend_hash(uVar4,local_60);
  (*(code *)PTR__objc_release_00110458)(uVar4);
  return ((lVar1 + 0x20f) * 0x1f + lVar2) * 0x1f + lVar3;
}

