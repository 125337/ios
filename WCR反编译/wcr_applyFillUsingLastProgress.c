// wcr_applyFillUsingLastProgress @ 015c0c80

/* Function Stack Size: 0x10 bytes */

void WCRVoiceSeekOverlay::wcr_applyFillUsingLastProgress(ID param_1,SEL param_2)

{
  ID IVar1;
  double in_d0;
  double dVar2;
  double dVar3;
  undefined8 in_d1;
  undefined8 in_d3;
  double local_180;
  double local_170;
  double local_168;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_trackView_026b0d70);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  _CGRectGetWidth(in_d0,in_d1);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  if (0.5 < in_d0) {
    local_168 = 1.0;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_lastProgress_026b0d78);
    if (1.0 < local_168) {
      local_168 = 1.0;
    }
    if (local_168 <= 0.0) {
      local_170 = 0.0;
    }
    else {
      local_170 = local_168;
    }
    IVar1 = param_1;
    dVar2 = local_170;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_trackView_026b0d70);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    local_180 = in_d0 * local_170;
    if (local_180 <= 2.0) {
      local_180 = 2.0;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___CATransaction_026ce3d8,PTR_s_begin_026ca520);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___CATransaction_026ce3d8,PTR_s_setDisableActions__026ca918,1);
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_fillView_026b0d80);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(dVar2,local_168,local_180,in_d3);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    _CGRectGetMaxX();
    IVar1 = param_1;
    dVar3 = dVar2;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_trackView_026b0d70);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    _CGRectGetMidY(dVar3,local_168,local_180,in_d3);
    FUN_015c1054();
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_knobView_026b0d88);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(dVar2,dVar3);
    (*(code *)PTR__objc_release_02578630)(param_1);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___CATransaction_026ce3d8,PTR_s_commit_026ca580);
  }
  return;
}

