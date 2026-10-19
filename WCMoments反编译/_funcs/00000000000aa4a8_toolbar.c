// toolbar @0xaa4a8

/* Function Stack Size: 0x10 bytes */

ID WCMTOCropViewController::toolbar(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  undefined8 local_30;
  
  if (*(long *)(param_1 + (long)_toolbar) == 0) {
    uVar1 = _objc_alloc(&objc::class_t::WCMTOCropToolbar);
    uVar1 = _objc_msgSend_initWithFrame_
                      (*(undefined8 *)PTR__CGRectZero_001108d8,
                       *(undefined8 *)(PTR__CGRectZero_001108d8 + 8),
                       *(undefined8 *)(PTR__CGRectZero_001108d8 + 0x10),
                       *(undefined8 *)(PTR__CGRectZero_001108d8 + 0x18),uVar1,local_30);
    uVar2 = *(undefined8 *)(param_1 + (long)_toolbar);
    *(undefined8 *)(param_1 + (long)_toolbar) = uVar1;
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _objc_msgSend_view(param_1,local_30);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_addSubview_(uVar1,local_30,*(undefined8 *)(param_1 + (long)_toolbar));
    (*(code *)PTR__objc_release_00110458)(uVar1);
  }
  IVar3 = _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + (long)_toolbar));
  return IVar3;
}

