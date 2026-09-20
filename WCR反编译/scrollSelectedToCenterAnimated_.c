// scrollSelectedToCenterAnimated: @ 01e5b68c

/* Function Stack Size: 0x14 bytes */

void WCRefineTelegramTabStripView::scrollSelectedToCenterAnimated_
               (ID param_1,SEL param_2,bool param_3)

{
  ID IVar1;
  double in_d0;
  undefined8 in_d1;
  undefined8 uVar2;
  undefined8 in_d2;
  undefined8 in_d3;
  double local_140;
  double local_138;
  double local_130;
  ID local_40;
  byte local_31;
  SEL local_30;
  ID local_28;
  
  local_31 = (byte)param_3;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_scrollView_0269dcc0);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  if ((IVar1 & 1) == 0) {
    IVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedButton_026c6988);
    _objc_retainAutoreleasedReturnValue();
    local_40 = IVar1;
    if (IVar1 != 0) {
      IVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_scrollView_0269dcc0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      _CGRectGetWidth(in_d0,in_d1,in_d2,in_d3);
      (*(code *)PTR__objc_release_02578630)(IVar1);
      if (1.0 < in_d0) {
        local_138 = in_d0;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_center_026ca560);
        local_138 = local_138 - in_d0 / 2.0;
        IVar1 = local_28;
        local_130 = local_138;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_scrollView_0269dcc0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        local_130 = local_130 - in_d0;
        (*(code *)PTR__objc_release_02578630)(IVar1);
        if (local_130 <= 0.0) {
          local_130 = 0.0;
        }
        if (local_138 <= 0.0) {
          local_138 = 0.0;
        }
        if (local_130 <= local_138) {
          local_140 = local_130;
        }
        else {
          local_140 = local_138;
        }
        IVar1 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_scrollView_0269dcc0);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = 0;
        FUN_01e5ba0c();
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_140,uVar2,IVar1,PTR_s_setContentOffset_animated__0269ddd8,local_31 & 1);
        (*(code *)PTR__objc_release_02578630)(IVar1);
      }
    }
    _objc_storeStrong(&local_40,0);
  }
  return;
}

