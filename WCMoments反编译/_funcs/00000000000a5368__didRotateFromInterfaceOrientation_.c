// _didRotateFromInterfaceOrientation: @0xa5368

/* Function Stack Size: 0x18 bytes */

void WCMTOCropViewController::_didRotateFromInterfaceOrientation_
               (ID param_1,SEL param_2,long_long param_3)

{
  undefined8 uVar1;
  undefined8 local_40;
  
  _objc_msgSend_toolbarSnapshotView(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_removeFromSuperview(uVar1,local_40);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_setToolbarSnapshotView_(param_1,local_40,0);
  _objc_msgSend_cropView(param_1,local_40);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setSimpleRenderMode_animated_(uVar1,local_40,0,1);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_cropView(param_1,local_40);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setInternalLayoutDisabled_(uVar1,local_40,0);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  return;
}

