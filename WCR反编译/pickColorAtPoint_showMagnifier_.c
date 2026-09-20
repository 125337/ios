// pickColorAtPoint:showMagnifier: @ 0191037c

/* Function Stack Size: 0x24 bytes */

void WCRefineColorPickerController::pickColorAtPoint_showMagnifier_
               (ID param_1,SEL param_2,CGPoint param_3,bool param_4)

{
  ID IVar1;
  ID IVar2;
  double in_d0;
  double dVar3;
  double in_d1;
  double dVar4;
  double in_d2;
  double in_d3;
  ID local_108;
  ID local_100;
  ID local_f8;
  double local_f0;
  double dStack_e8;
  double local_e0;
  double dStack_d8;
  double local_c8;
  double dStack_c0;
  undefined4 local_b4;
  ID local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_88;
  double local_70;
  double local_58;
  double local_50;
  byte local_41;
  SEL local_40;
  ID local_38;
  double local_30;
  double local_28;
  
  local_41 = param_3.field0_0x0._0_1_;
  local_40 = param_2;
  local_38 = param_1;
  local_30 = in_d0;
  local_28 = in_d1;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_pickedImageView_026b8a28,param_3.field0_0x0,param_3.field1_0x8,param_4);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_58 = in_d2;
  local_50 = in_d3;
  (*(code *)PTR__objc_release_02578630)(param_1);
  if ((((0.0 <= local_30) && (0.0 <= local_28)) && (local_30 <= local_58)) && (local_28 <= local_50)
     ) {
    IVar1 = local_38;
    dVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_pickedImage_026b8a98);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (IVar1 != 0) {
      IVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_pickedImage_026b8a98);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      dVar3 = dVar3 / local_58;
      (*(code *)PTR__objc_release_02578630)(IVar1);
      IVar1 = local_38;
      local_70 = dVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_pickedImage_026b8a98);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_98 = dVar3;
      (*(code *)PTR__objc_release_02578630)(IVar1);
      dVar3 = local_30 * local_70;
      dVar4 = local_28 * (local_58 / local_50);
      local_88 = local_58 / local_50;
      FUN_019051e4();
      IVar1 = local_38;
      IVar2 = local_38;
      local_a8 = dVar3;
      local_a0 = dVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_pickedImage_026b8a98);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_a8,local_a0,IVar1,PTR_s_colorAtPixel_inImage__026b8aa0);
      _objc_retainAutoreleasedReturnValue();
      local_b0 = IVar1;
      (*(code *)PTR__objc_release_02578630)(IVar2);
      if (local_b0 == 0) {
        local_b4 = 1;
      }
      else {
        IVar1 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_pickedImageCrosshair_026b8a38);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar1);
        IVar1 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_pickedImageView_026b8a28);
        _objc_retainAutoreleasedReturnValue();
        IVar2 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_pickedImageContainer_026b8a18);
        _objc_retainAutoreleasedReturnValue();
        dVar3 = local_30;
        dVar4 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_convertPoint_toView__0269e548);
        local_c8 = dVar3;
        dStack_c0 = dVar4;
        (*(code *)PTR__objc_release_02578630)(IVar2);
        (*(code *)PTR__objc_release_02578630)(IVar1);
        dStack_d8 = dStack_c0;
        local_e0 = local_c8;
        IVar1 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_pickedImageCrosshair_026b8a38);
        _objc_retainAutoreleasedReturnValue();
        dStack_e8 = dStack_d8;
        local_f0 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,dStack_d8);
        (*(code *)PTR__objc_release_02578630)(IVar1);
        IVar1 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_pickedImageCrosshair_026b8a38);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar1);
        if ((local_41 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,local_28,local_a8,local_a0,local_c8,dStack_c0,local_38,
                     PTR_s_updateMagnifierAtPoint_imagePoin_026b8aa8);
        }
        IVar1 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_pickedImageContainer_026b8a18);
        _objc_retainAutoreleasedReturnValue();
        IVar2 = IVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_f8 = IVar2;
        (*(code *)PTR__objc_release_02578630)(IVar1);
        IVar1 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_pickedImageContainer_026b8a18);
        _objc_retainAutoreleasedReturnValue();
        IVar2 = IVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_100 = IVar2;
        (*(code *)PTR__objc_release_02578630)(IVar1);
        IVar1 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_pickedImageContainer_026b8a18);
        _objc_retainAutoreleasedReturnValue();
        IVar2 = IVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_108 = IVar2;
        (*(code *)PTR__objc_release_02578630)(IVar1);
        (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_setHidden__026ca970,0);
        (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_setBackgroundColor__026ca888,local_b0);
        (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_setHidden__026ca970,0);
        IVar1 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_hexStringFromColor__026b30d0,local_b0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_setText__026caa88);
        (*(code *)PTR__objc_release_02578630)(IVar1);
        (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_setHidden__026ca970,0);
        _objc_storeStrong(&local_108);
        _objc_storeStrong(&local_100,0);
        _objc_storeStrong(&local_f8,0);
        local_b4 = 0;
      }
      _objc_storeStrong(&local_b0,0);
    }
  }
  return;
}

