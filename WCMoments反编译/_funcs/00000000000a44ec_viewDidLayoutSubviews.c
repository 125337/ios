// viewDidLayoutSubviews @0xa44ec

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCMTOCropViewController::viewDidLayoutSubviews(ID param_1,SEL param_2)

{
  ID IVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined8 local_118;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined8 local_48;
  ID local_40;
  class_t *local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = &objc::class_t::WCMTOCropViewController;
  local_40 = param_1;
  local_30 = param_2;
  local_28 = param_1;
  _objc_msgSendSuper2(&local_40,"viewDidLayoutSubviews");
  local_68 = PTR___NSConcreteStackBlock_001104f0;
  local_60 = 0xc2000000;
  local_5c = 0;
  local_58 = ___48__WCMTOCropViewController_viewDidLayoutSubviews__block_invoke;
  local_50 = &___block_descriptor_40_e8_32s_e5_v8__0l;
  local_48 = (*(code *)PTR__objc_retain_00110460)(local_28);
  _objc_msgSend_performWithoutAnimation_(&_OBJC_CLASS___UIView,local_118,&local_68);
  IVar1 = local_28;
  uVar3 = _objc_msgSend_verticalLayout(local_28,local_118);
  uVar7 = _objc_msgSend_frameForCropViewWithVerticalLayout_(IVar1,local_118,uVar3);
  _objc_msgSend_cropView(local_28,local_118);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setFrame_(uVar7,uVar3,local_118);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  _objc_msgSend_adjustCropViewInsets(local_28,local_118);
  _objc_msgSend_cropView(local_28,local_118);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_moveCroppedContentToCenterAnimated_(uVar3,local_118,0);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  iVar2 = _objc_msgSend_firstTime(local_28,local_118);
  if (iVar2 == 0) {
    _objc_msgSend_cropView(local_28,local_118);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_performInitialSetup(uVar3,local_118);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    _objc_msgSend_setFirstTime_(local_28,local_118,1);
  }
  _objc_msgSend_title(local_28,local_118);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  lVar4 = _objc_msgSend_length(uVar3,local_118);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  IVar1 = local_28;
  if (lVar4 != 0) {
    _objc_msgSend_titleLabel(local_28,local_118);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_frame(uVar5,local_118);
    uVar3 = in_d2;
    uVar7 = in_d3;
    uVar6 = _objc_msgSend_verticalLayout(local_28,local_118);
    uVar8 = _objc_msgSend_frameForTitleLabelWithSize_verticalLayout_(in_d2,IVar1,local_118,uVar6);
    _objc_msgSend_titleLabel(local_28,local_118);
    uVar6 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setFrame_(uVar8,in_d3,uVar3,uVar7,uVar6,local_118);
    (*(code *)PTR__objc_release_00110458)(uVar6);
    (*(code *)PTR__objc_release_00110458)(uVar5);
    _objc_msgSend_cropView(local_28,local_118);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_moveCroppedContentToCenterAnimated_(uVar3,local_118,0);
    (*(code *)PTR__objc_release_00110458)(uVar3);
  }
  _objc_storeStrong(&local_48,0);
  return;
}

