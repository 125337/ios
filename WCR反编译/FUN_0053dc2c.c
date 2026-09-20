// FUN_0053dc2c @ 0053dc2c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte FUN_0053dc2c(long param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long local_d0;
  long local_c0;
  long local_b0;
  long local_a0;
  long local_90;
  byte local_81;
  long local_80;
  byte local_71;
  long local_70;
  byte local_61;
  long local_60;
  byte local_51;
  long local_50;
  undefined8 local_38;
  long local_30;
  byte local_21;
  
  local_38 = param_2;
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_textView_0269d0f8);
  _objc_retainAutoreleasedReturnValue();
  local_51 = 0;
  local_61 = 0;
  local_71 = 0;
  local_81 = 0;
  bVar5 = false;
  if (param_1 != 0) {
    lVar6 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_textView_0269d0f8);
    _objc_retainAutoreleasedReturnValue();
    local_51 = 1;
    local_50 = lVar6;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_61 = 1;
    bVar5 = false;
    local_60 = lVar6;
    if (lVar6 != 0) {
      lVar6 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_textView_0269d0f8);
      _objc_retainAutoreleasedReturnValue();
      local_71 = 1;
      local_70 = lVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_81 = 1;
      local_80 = lVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar5 = lVar6 != 0;
    }
  }
  if ((local_81 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_80);
  }
  if ((local_71 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_70);
  }
  if ((local_61 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  (*(code *)PTR__objc_release_02578630)(param_1);
  if (bVar5) {
    lVar6 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_textView_0269d0f8);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar7;
    (*(code *)PTR__objc_msgSend_02578628)(lVar7,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    local_90 = lVar9;
    (*(code *)PTR__objc_release_02578630)(puVar8);
    (*(code *)PTR__objc_release_02578630)(lVar7);
    (*(code *)PTR__objc_release_02578630)(lVar6);
    lVar6 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0);
    bVar5 = lVar6 != 0;
    if (bVar5) {
      local_21 = 1;
    }
    _objc_storeStrong(bVar5,&local_90,0);
    if (bVar5) goto LAB_0053e7c0;
  }
  lVar6 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_imageSelectorController_026a4d88);
  _objc_retainAutoreleasedReturnValue();
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  bVar1 = false;
  bVar5 = false;
  if (lVar6 != 0) {
    local_a0 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_imageSelectorController_026a4d88);
    _objc_retainAutoreleasedReturnValue();
    bVar4 = true;
    local_b0 = local_a0;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    bVar3 = true;
    bVar5 = false;
    if (local_b0 != 0) {
      local_c0 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_imageSelectorController_026a4d88);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = true;
      local_d0 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      lVar7 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar5 = lVar7 != 0;
    }
  }
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_d0);
  }
  if (bVar2) {
    (*(code *)PTR__objc_release_02578630)(local_c0);
  }
  if (bVar3) {
    (*(code *)PTR__objc_release_02578630)(local_b0);
  }
  if (bVar4) {
    (*(code *)PTR__objc_release_02578630)(local_a0);
  }
  (*(code *)PTR__objc_release_02578630)(lVar6);
  if (bVar5) {
    local_21 = 1;
  }
  else {
    lVar6 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_imageSelectorController_026a4d88);
    _objc_retainAutoreleasedReturnValue();
    bVar5 = false;
    if (lVar6 != 0) {
      lVar7 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_imageSelectorController_026a4d88);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar7;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      bVar5 = lVar9 != 0;
      (*(code *)PTR__objc_release_02578630)(lVar9);
      (*(code *)PTR__objc_release_02578630)(lVar7);
    }
    (*(code *)PTR__objc_release_02578630)(lVar6);
    if (bVar5) {
      local_21 = 1;
    }
    else {
      lVar6 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_sightDraft_026a4d98);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (lVar6 == 0) {
        lVar6 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_poiInfo_026a4da0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)();
        if (lVar6 == 0) {
          local_21 = 0;
        }
        else {
          local_21 = 1;
        }
      }
      else {
        local_21 = 1;
      }
    }
  }
LAB_0053e7c0:
  return local_21 & 1;
}

