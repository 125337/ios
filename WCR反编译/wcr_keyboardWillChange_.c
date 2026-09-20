// wcr_keyboardWillChange: @ 00f94ab4

/* Function Stack Size: 0x18 bytes */

void WCRPageSheetMultilineInsetBinder::wcr_keyboardWillChange_(ID param_1,SEL param_2,ID param_3)

{
  undefined1 uVar1;
  bool bVar2;
  ID IVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double in_d0;
  double dVar6;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 in_d3;
  undefined8 uVar9;
  undefined8 uVar10;
  double local_128;
  ID local_78;
  double local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_49;
  ID local_48;
  ID local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_textView_0269d0f8);
  _objc_retainAutoreleasedReturnValue();
  local_49 = 0;
  bVar2 = true;
  uVar1 = IVar3 != 0;
  local_40 = IVar3;
  if ((bool)uVar1) {
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_window_026cabf0);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = IVar3 == 0;
    local_49 = uVar1;
    local_48 = IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    uVar1 = local_49;
  }
  local_49 = uVar1;
  if (bVar2) {
    local_50 = 1;
  }
  else {
    uVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_userInfo_0269f138);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_70 = in_d0;
    local_68 = in_d1;
    local_60 = in_d2;
    local_58 = in_d3;
    (*(code *)PTR__objc_release_02578630)(uVar5);
    (*(code *)PTR__objc_release_02578630)(uVar4);
    IVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_window_026cabf0);
    _objc_retainAutoreleasedReturnValue();
    dVar6 = local_70;
    uVar4 = local_68;
    uVar7 = local_60;
    uVar9 = local_58;
    local_78 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_convertRect_fromWindow__026accf0,0);
    IVar3 = local_40;
    local_128 = dVar6;
    uVar5 = uVar4;
    uVar8 = uVar7;
    uVar10 = uVar9;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_bounds_026ca548);
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_convertRect_toView__0269ded8,local_78);
    _CGRectGetMaxY(local_128,uVar5,uVar8,uVar10);
    _CGRectGetMinY(dVar6,uVar4,uVar7,uVar9);
    local_128 = local_128 - dVar6;
    if (local_128 <= 0.0) {
      local_128 = 0.0;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_128,local_28,PTR_s_wcr_applyBottomInset__026accf8);
    _objc_storeStrong(&local_78,0);
    local_50 = 0;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

