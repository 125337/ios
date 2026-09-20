// wcr_scrollCaretIfNeeded @ 009d7234

/* Function Stack Size: 0x10 bytes */

void WCRAnonAtSheetKeyboardBinder::wcr_scrollCaretIfNeeded(ID param_1,SEL param_2)

{
  undefined1 uVar1;
  bool bVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  double dVar6;
  double dVar7;
  double in_d2;
  double in_d3;
  ID local_f8;
  ID local_f0;
  undefined *puStack_e8;
  ID local_e0;
  undefined *puStack_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_50;
  undefined4 local_48;
  undefined1 local_41;
  ID local_40;
  ID local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_textView_0269d0f8);
  _objc_retainAutoreleasedReturnValue();
  local_41 = 0;
  bVar2 = true;
  uVar1 = param_1 != 0;
  local_38 = param_1;
  if ((bool)uVar1) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_window_026cabf0);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = param_1 == 0;
    local_41 = uVar1;
    local_40 = param_1;
    (*(code *)PTR__objc_release_02578630)(param_1);
    uVar1 = local_41;
  }
  local_41 = uVar1;
  if (bVar2) {
    local_48 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
    dVar6 = in_d3;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_contentInset_0269dcc8);
    dVar7 = in_d3 - dVar6;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_contentInset_0269dcc8);
    in_d2 = (in_d3 - dVar6) - in_d2;
    dVar6 = 1.0;
    local_b0 = dVar7;
    local_50 = in_d2;
    if (1.0 <= in_d2) {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_contentSize_026ca5a0);
      dVar7 = local_50 + 8.0;
      local_c0 = in_d2;
      local_b8 = dVar6;
      if (dVar7 < dVar6) {
        IVar3 = local_38;
        puVar5 = PTR_s_selectedRange_026a43a0;
        (*(code *)PTR__objc_msgSend_02578628)();
        puVar4 = PTR___dispatch_main_q_02578680;
        local_e0 = IVar3;
        puStack_d8 = puVar5;
        if (IVar3 + 0x8000000000000001 == 0) {
          local_48 = 1;
        }
        else {
          _objc_retainAutoreleaseReturnValue(IVar3 + 0x8000000000000001);
          _objc_retainAutoreleasedReturnValue();
          IVar3 = local_38;
          (*(code *)PTR__objc_retain_02578638)();
          local_f8 = IVar3;
          puStack_e8 = puStack_d8;
          local_f0 = local_e0;
          _dispatch_async(puVar4);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          _objc_storeStrong(&local_f8,0);
          local_48 = 0;
        }
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_contentOffset_0269dd18);
        local_d0 = dVar6;
        local_c8 = dVar7;
        if (0.5 < ABS(dVar7)) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (*(undefined8 *)PTR__CGPointZero_025782e0,
                     *(undefined8 *)(PTR__CGPointZero_025782e0 + 8),local_38,
                     PTR_s_setContentOffset_animated__0269ddd8,0);
        }
        local_48 = 1;
      }
    }
    else {
      local_48 = 1;
    }
  }
  _objc_storeStrong(&local_38,0);
  return;
}

