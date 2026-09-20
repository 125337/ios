// updateHeaderLabelsColor @ 01d2fa90

/* Function Stack Size: 0x10 bytes */

void WCRefineRootViewController::updateHeaderLabelsColor(ID param_1,SEL param_2)

{
  undefined1 uVar1;
  bool bVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  undefined8 uVar6;
  ID local_78;
  ID local_70;
  ID local_68;
  undefined1 local_59;
  ID local_58;
  SEL local_50;
  ID local_48;
  ID local_40;
  undefined8 local_38;
  undefined8 local_30;
  ID local_28;
  
  local_50 = param_2;
  local_48 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_nicknameLabel_026b4ac0);
  _objc_retainAutoreleasedReturnValue();
  local_59 = 0;
  bVar2 = false;
  uVar1 = param_1 != 0;
  if ((bool)uVar1) {
    IVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_versionLabel_026b4ac8);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = IVar3 != 0;
    local_59 = uVar1;
    local_58 = IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    uVar1 = local_59;
  }
  local_59 = uVar1;
  (*(code *)PTR__objc_release_02578630)(param_1);
  if (bVar2) {
    IVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_randomColor_026c4470);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = local_48;
    local_68 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_nicknameLabel_026b4ac0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar4);
    IVar3 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3fe3333333333333,local_68,PTR_s_colorWithAlphaComponent__026ca578);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = local_48;
    local_70 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_versionLabel_026b4ac8);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    (*(code *)PTR__objc_release_02578630)(IVar4);
    if (IVar3 == 0) {
      IVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_versionLabel_026b4ac8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
    }
    else {
      IVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_versionLabel_026b4ac8);
      _objc_retainAutoreleasedReturnValue();
      IVar4 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      IVar5 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_78 = IVar5;
      (*(code *)PTR__objc_release_02578630)(IVar4);
      (*(code *)PTR__objc_release_02578630)(IVar3);
      IVar4 = local_70;
      IVar3 = local_78;
      uVar6 = *(undefined8 *)PTR__NSForegroundColorAttributeName_02578070;
      IVar5 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
      local_38 = 0;
      local_30 = 0;
      local_40 = IVar5;
      local_28 = IVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar3,PTR_s_addAttribute_value_range__026a1d88,uVar6,IVar4,0,IVar5);
      IVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_versionLabel_026b4ac8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      _objc_storeStrong(&local_78,0);
    }
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_68,0);
  }
  return;
}

