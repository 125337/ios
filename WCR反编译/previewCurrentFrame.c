// previewCurrentFrame @ 01831d74

/* Function Stack Size: 0x10 bytes */

void WCRefineAvatarFrameLibraryViewController::previewCurrentFrame(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 in_d0;
  undefined8 uVar5;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined *local_80 [5];
  undefined *local_58;
  ID local_50;
  ID local_48;
  uint local_3c;
  ID local_38;
  SEL local_30;
  ID local_28;
  
  if (*(long *)(param_1 + (long)_selectedFramePath) != 0) {
    local_30 = param_2;
    local_28 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_imagePathForFramePath__026b6460,
               *(undefined8 *)(param_1 + (long)_selectedFramePath));
    _objc_retainAutoreleasedReturnValue();
    local_38 = param_1;
    if (param_1 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_showToast__026b3a18,&cf_4YPFhQfeVGr);
      local_3c = 1;
    }
    else {
      FUN_0182e730();
      _objc_retainAutoreleasedReturnValue();
      local_48 = param_1;
      if (param_1 == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_showToast__026b3a18,&cf_R_1Y_);
        local_3c = 1;
      }
      else {
        IVar1 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_keyWindowForPreview_026b6540);
        _objc_retainAutoreleasedReturnValue();
        local_50 = IVar1;
        if (IVar1 != 0) {
          puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
          _objc_alloc();
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_bounds_026ca548);
          (*(code *)PTR__objc_msgSend_02578628)(in_d0,in_d1,puVar2,PTR_s_initWithFrame__026ca6e8);
          uVar5 = 0;
          uVar4 = 0x3fe3333333333333;
          puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
          local_58 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithWhite_alpha__0269cf30);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setBackgroundColor__026ca888);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setTag__026caa80,0x5f53);
          puVar2 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
          _objc_alloc();
          (*(code *)PTR__objc_msgSend_02578628)();
          local_80[0] = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setContentMode__026ca8e0,1);
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_bounds_026ca548);
          _CGRectInset();
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar5,uVar4,in_d2,in_d3,local_80[0],PTR_s_setFrame__026ca960);
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_addSubview__026ca4c0,local_80[0]);
          puVar2 = local_58;
          puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_026cdfa0;
          _objc_alloc();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addGestureRecognizer__026ca4a8);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addSubview__026ca4c0,local_58);
          _objc_storeStrong(local_80);
          _objc_storeStrong(&local_58,0);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_showToast__026b3a18,&cf_el>f_y);
        }
        local_3c = (uint)(IVar1 == 0);
        _objc_storeStrong(&local_50,0);
      }
      _objc_storeStrong(&local_48,0);
    }
    _objc_storeStrong(&local_38,0);
  }
  return;
}

