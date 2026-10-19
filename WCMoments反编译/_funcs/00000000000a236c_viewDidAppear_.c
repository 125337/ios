// viewDidAppear: @0xa236c

/* Function Stack Size: 0x14 bytes */

void WCMTOCropViewController::viewDidAppear_(ID param_1,SEL param_2,bool param_3)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_88;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined8 local_48;
  long local_40;
  ID local_38;
  class_t *local_30;
  byte local_21;
  SEL local_20;
  ID local_18;
  
  local_21 = (byte)param_3;
  local_30 = &objc::class_t::WCMTOCropViewController;
  local_38 = param_1;
  local_20 = param_2;
  local_18 = param_1;
  _objc_msgSendSuper2(&local_38,"viewDidAppear:",param_3 & 1);
  _objc_msgSend_setInTransition_(local_18,local_88,0);
  _objc_msgSend_cropView(local_18,local_88);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setSimpleRenderMode_(uVar2,local_88,0);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  local_68 = PTR___NSConcreteStackBlock_001104f0;
  local_60 = 0xc2000000;
  local_5c = 0;
  local_58 = ___41__WCMTOCropViewController_viewDidAppear___block_invoke;
  local_50 = &___block_descriptor_40_e8_32s_e5_v8__0l;
  local_48 = (*(code *)PTR__objc_retain_00110460)(local_18);
  local_40 = _objc_retainBlock(&local_68);
  if ((local_21 & 1) == 0) {
    (**(code **)(local_40 + 0x10))();
  }
  else {
    _objc_msgSend_animateWithDuration_animations_
              (0x3fd3333340000000,&_OBJC_CLASS___UIView,local_88,local_40);
  }
  _objc_msgSend_cropView(local_18,local_88);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  uVar1 = _objc_msgSend_gridOverlayHidden(uVar2,local_88);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  if ((uVar1 & 1) != 0) {
    _objc_msgSend_cropView(local_18,local_88);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setGridOverlayHidden_animated_(uVar2,local_88,0,local_21 & 1);
    (*(code *)PTR__objc_release_00110458)(uVar2);
  }
  _objc_msgSend_navigationController(local_18,local_88);
  lVar3 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)();
  if (lVar3 == 0) {
    _objc_msgSend_cropView(local_18,local_88);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setBackgroundImageViewHidden_animated_(uVar2,local_88,0,local_21 & 1);
    (*(code *)PTR__objc_release_00110458)(uVar2);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_48,0);
  return;
}

