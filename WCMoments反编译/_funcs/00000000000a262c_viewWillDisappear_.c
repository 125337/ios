// viewWillDisappear: @0xa262c

/* Function Stack Size: 0x14 bytes */

void WCMTOCropViewController::viewWillDisappear_(ID param_1,SEL param_2,bool param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_78;
  uint local_64;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  undefined8 local_40;
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
  _objc_msgSendSuper2(&local_38,"viewWillDisappear:",param_3 & 1);
  _objc_msgSend_setInTransition_(local_18,local_78,1);
  local_60 = PTR___NSConcreteStackBlock_001104f0;
  local_58 = 0xc2000000;
  local_54 = 0;
  local_50 = ___45__WCMTOCropViewController_viewWillDisappear___block_invoke;
  local_48 = &___block_descriptor_40_e8_32s_e5_v8__0l;
  local_40 = (*(code *)PTR__objc_retain_00110460)(local_18);
  _objc_msgSend_animateWithDuration_animations_
            (0x3fe0000000000000,&_OBJC_CLASS___UIView,local_78,&local_60);
  _objc_msgSend_navigationController(local_18,local_78);
  lVar1 = _objc_retainAutoreleasedReturnValue();
  local_64 = 0;
  if (lVar1 != 0) {
    local_64 = _objc_msgSend_hidesNavigationBar(local_18,local_78);
  }
  (*(code *)PTR__objc_release_00110458)(lVar1);
  if ((local_64 & 1) != 0) {
    _objc_msgSend_navigationController(local_18,local_78);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    uVar3 = _objc_msgSend_navigationBarHidden(local_18,local_78);
    _objc_msgSend_setNavigationBarHidden_animated_(uVar2,local_78,uVar3,local_21 & 1);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _objc_msgSend_navigationController(local_18,local_78);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    uVar3 = _objc_msgSend_toolbarHidden(local_18,local_78);
    _objc_msgSend_setToolbarHidden_animated_(uVar2,local_78,uVar3,local_21 & 1);
    (*(code *)PTR__objc_release_00110458)(uVar2);
  }
  _objc_storeStrong(&local_40,0);
  return;
}

