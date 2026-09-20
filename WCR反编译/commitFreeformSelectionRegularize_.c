// commitFreeformSelectionRegularize: @ 0164a5b0

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x14 bytes */

void WCRSuperFloatCropViewController::commitFreeformSelectionRegularize_
               (ID param_1,SEL param_2,bool param_3)

{
  ID IVar1;
  undefined *puVar2;
  ID IVar3;
  undefined8 in_d0;
  undefined8 in_d1;
  double in_d2;
  double in_d3;
  long local_58;
  undefined *local_40;
  byte local_31;
  SEL local_30;
  ID local_28;
  
  local_31 = (byte)param_3;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_freeformPoints_026b1f50);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  if (IVar1 < 8) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_clearCropSelectionAllowingRecrea_026b1f88);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UIBezierPath_026ce268;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIBezierPath_026ce268,PTR_s_bezierPath_026a01a8);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_28;
    local_40 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_freeformPoints_026b1f50);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_moveToPoint__026a01b0);
    local_58 = 1;
    while( true ) {
      IVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_freeformPoints_026b1f50);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar1);
      puVar2 = local_40;
      if ((long)IVar3 <= local_58) break;
      IVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_freeformPoints_026b1f50);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addLineToPoint__026a01b8);
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(IVar1);
      local_58 = local_58 + 1;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_closePath_026a66f8);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_bounds_026ca548);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_imageDisplayFrame_026b1f90);
    _CGRectIntersection();
    if ((in_d2 < 24.0) || (in_d3 < 24.0)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_clearCropSelectionAllowingRecrea_026b1f88);
    }
    else {
      if ((local_31 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setFreeformPath__026b1f38,local_40);
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setFreeformClosed__026b1f48,1);
        (*(code *)PTR__objc_msgSend_02578628)
                  (in_d0,in_d1,in_d2,in_d3,local_28,PTR_s_setCropRect__026b1b80);
        IVar1 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_freeformPreviewLayer_026b1bc8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar1);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setFreeformPath__026b1f38);
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setFreeformClosed__026b1f48,0);
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setCropShape__026b1f98,0);
        (*(code *)PTR__objc_msgSend_02578628)
                  (in_d0,in_d1,in_d2,in_d3,local_28,PTR_s_setCropRect__026b1b80);
        IVar1 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_freeformPreviewLayer_026b1bc8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar1);
        IVar1 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_freeformPreviewLayer_026b1bc8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar1);
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__RS_Nwb__S);
      }
      IVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_freeformPoints_026b1f50);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar1);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_refreshCropChrome_026b1e98);
    }
    _objc_storeStrong(&local_40,0);
  }
  return;
}

