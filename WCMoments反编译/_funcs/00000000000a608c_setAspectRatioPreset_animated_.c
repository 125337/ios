// setAspectRatioPreset:animated: @0xa608c

/* Function Stack Size: 0x24 bytes */

void __thiscall
WCMTOCropViewController::setAspectRatioPreset_animated_
          (WCMTOCropViewController *this,ID param_1,SEL param_2,CGSize param_3,bool param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_48;
  
  lVar2 = (long)_aspectRatioPreset;
  *(double *)(this + lVar2 + 8) = param_3.field1_0x8;
  *(double *)(this + lVar2) = param_3.field0_0x0;
  _objc_msgSend_cropView(this,param_1,param_2,param_4);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setAspectRatio_animated_
            (param_3.field0_0x0,param_3.field1_0x8,uVar1,local_48,(byte)param_2 & 1);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  return;
}

