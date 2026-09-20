// calibrateButtonTapped @ 01d56cc8

/* Function Stack Size: 0x10 bytes */

void WCRefineScreenshotFrameEditorViewController::calibrateButtonTapped(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  cfstringStruct *local_c0;
  undefined *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  byte local_71;
  ID local_70;
  byte local_61;
  ID local_60;
  undefined1 local_51;
  SEL local_50;
  ID local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_50 = param_2;
  local_48 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_points_026c4688);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_61 = 0;
  bVar1 = true;
  if (IVar2 == 4) {
    IVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isDoubleMode_026c4670);
    bVar1 = false;
    if ((IVar2 & 1) != 0) {
      IVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_points2_026c4690);
      _objc_retainAutoreleasedReturnValue();
      local_61 = 1;
      local_60 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = IVar2 != 4;
    }
  }
  if ((local_61 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  (*(code *)PTR__objc_release_02578630)(param_1);
  local_51 = bVar1;
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_autoDetectHollowAreasAndApplyMis_026c4698,1);
  }
  else {
    IVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_points_026c4688);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    if (IVar3 == 4) {
      IVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isDoubleMode_026c4670);
      local_71 = 0;
      bVar1 = false;
      if ((IVar2 & 1) != 0) {
        IVar2 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_points2_026c4690);
        _objc_retainAutoreleasedReturnValue();
        local_71 = 1;
        local_70 = IVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        bVar1 = IVar2 != 4;
      }
      if ((local_71 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_70);
      }
      if (bVar1) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_showAlert_message__026c4820,&cf_c_y,&cf_HQb__NVv4);
      }
      else {
        pcVar4 = &cf_WCActionSheet;
        _NSClassFromString();
        pcVar5 = &cf_WCActionSheetItem;
        local_80 = pcVar4;
        _NSClassFromString();
        local_88 = pcVar5;
        if ((local_80 != (cfstringStruct *)0x0) && (pcVar5 != (cfstringStruct *)0x0)) {
          IVar2 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isDoubleMode_026c4670);
          local_90 = &cf_b_hQ_j____NVuHe;
          if ((IVar2 & 1) == 0) {
            local_90 = &cf_b_hQ_j_;
          }
          (*(code *)PTR__objc_retain_02578638)();
          pcVar4 = local_80;
          _objc_alloc();
          (*(code *)PTR__objc_msgSend_02578628)();
          pcVar5 = local_88;
          local_98 = pcVar4;
          _objc_alloc();
          (*(code *)PTR__objc_msgSend_02578628)();
          pcVar4 = local_88;
          local_a0 = pcVar5;
          _objc_alloc();
          (*(code *)PTR__objc_msgSend_02578628)();
          pcVar5 = local_88;
          local_a8 = pcVar4;
          _objc_alloc();
          (*(code *)PTR__objc_msgSend_02578628)();
          local_40 = local_a0;
          local_38 = local_a8;
          puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          local_b0 = pcVar5;
          local_30 = pcVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                     &local_40,3);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar6;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_b8 = puVar7;
          (*(code *)PTR__objc_release_02578630)(puVar6);
          IVar2 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isDoubleMode_026c4670);
          if ((IVar2 & 1) != 0) {
            pcVar4 = local_88;
            _objc_alloc();
            (*(code *)PTR__objc_msgSend_02578628)();
            local_c0 = pcVar4;
            (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_addObject__0269d180,pcVar4);
            _objc_storeStrong(&local_c0,0);
          }
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_98,PTR_s_setValue_forKey__0269d300,local_b8,&cf_buttonTitleList);
          pcVar4 = local_98;
          puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0x4a39);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar4,PTR_s_setValue_forKey__0269d300,puVar6,&cf_tag);
          (*(code *)PTR__objc_release_02578630)(puVar6);
          pcVar4 = local_98;
          puVar6 = PTR_s_showInView__0269d310;
          IVar2 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_view_026cabd8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar4,PTR_s_performSelector_withObject__026ca7c0,puVar6);
          (*(code *)PTR__objc_release_02578630)(IVar2);
          _objc_storeStrong(&local_b8);
          _objc_storeStrong(&local_b0,0);
          _objc_storeStrong(&local_a8,0);
          _objc_storeStrong(&local_a0,0);
          _objc_storeStrong(&local_98,0);
          _objc_storeStrong(&local_90,0);
        }
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_showAlert_message__026c4820,&cf_c_y,&cf_HQb__);
    }
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

