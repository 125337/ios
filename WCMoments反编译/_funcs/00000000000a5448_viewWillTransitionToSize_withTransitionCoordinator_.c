// viewWillTransitionToSize:withTransitionCoordinator: @0xa5448

/* Function Stack Size: 0x28 bytes */

void WCMTOCropViewController::viewWillTransitionToSize_withTransitionCoordinator_
               (ID param_1,SEL param_2,CGSize param_3,ID param_4)

{
  undefined *puVar1;
  ID IVar2;
  uint uVar3;
  undefined8 uVar4;
  double dVar5;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined8 local_108;
  undefined *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  code *local_e0;
  undefined *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  code *local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  double local_70;
  ID local_58;
  class_t *local_50;
  undefined8 local_48;
  SEL local_40;
  ID local_38;
  double local_30;
  double local_28;
  
  local_28 = param_3.field1_0x8;
  local_30 = param_3.field0_0x0;
  local_48 = 0;
  local_40 = param_2;
  local_38 = param_1;
  _objc_storeStrong(&local_48,param_4);
  local_58 = local_38;
  local_50 = &objc::class_t::WCMTOCropViewController;
  dVar5 = local_28;
  _objc_msgSendSuper2(local_30,&local_58,"viewWillTransitionToSize:withTransitionCoordinator:",
                      local_48);
  _objc_msgSend_view(local_38,local_108);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  local_78 = _objc_msgSend_bounds(uVar4,local_108);
  local_70 = dVar5;
  uVar3 = ___CGSizeEqualToSize(local_30,local_28,in_d2,in_d3);
  (*(code *)PTR__objc_release_00110458)(uVar4);
  IVar2 = local_38;
  if ((uVar3 & 1) == 0) {
    local_88 = 1;
    if (local_28 <= local_30) {
      local_88 = 4;
    }
    uVar4 = local_88;
    _objc_msgSend_transitionDuration(local_48,local_108);
    _objc_msgSend__willRotateToInterfaceOrientation_duration_(IVar2,local_108,uVar4);
    uVar4 = local_48;
    puVar1 = PTR___NSConcreteStackBlock_001104f0;
    local_c0 = PTR___NSConcreteStackBlock_001104f0;
    local_b8 = 0xc2000000;
    local_b4 = 0;
    local_b0 = 
    ___78__WCMTOCropViewController_viewWillTransitionToSize_withTransitionCoordinator___block_invoke
    ;
    local_a8 = &
               ___block_descriptor_56_e8_32s40s_e56_v16__0__<UIViewControllerTransitionCoordinatorContext>_8l
    ;
    local_a0 = (*(code *)PTR__objc_retain_00110460)(local_38);
    local_90 = local_88;
    local_98 = (*(code *)PTR__objc_retain_00110460)(local_48);
    local_f0 = puVar1;
    local_e8 = 0xc2000000;
    local_e4 = 0;
    local_e0 = 
    ___78__WCMTOCropViewController_viewWillTransitionToSize_withTransitionCoordinator___block_invoke_39
    ;
    local_d8 = &
               ___block_descriptor_48_e8_32s_e56_v16__0__<UIViewControllerTransitionCoordinatorContext>_8l
    ;
    local_d0 = (*(code *)PTR__objc_retain_00110460)(local_38);
    local_c8 = local_88;
    _objc_msgSend_animateAlongsideTransition_completion_(uVar4,local_108,&local_c0,&local_f0);
    _objc_storeStrong(&local_d0);
    _objc_storeStrong(&local_98,0);
    _objc_storeStrong(&local_a0,0);
    local_7c = 0;
  }
  else {
    local_7c = 1;
  }
  _objc_storeStrong(&local_48,0);
  return;
}

