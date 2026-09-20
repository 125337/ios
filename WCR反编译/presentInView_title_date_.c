// presentInView:title:date: @ 005785e8

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x28 bytes */

void WCRMomentsScheduledDatePickerPanel::presentInView_title_date_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  bool bVar1;
  undefined *puVar2;
  ID IVar3;
  undefined8 uVar4;
  undefined8 in_d0;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined8 uVar7;
  undefined *local_160;
  undefined4 local_158;
  undefined4 local_154;
  code *local_150;
  undefined *local_148;
  ID local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_108;
  undefined8 local_e8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  uint local_4c;
  undefined8 local_48;
  long local_40;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  bVar1 = local_38 != 0;
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_titleLabel_026caba0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_setDate__026a5368,local_48);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
    (*(code *)PTR__objc_msgSend_02578628)(in_d0,local_28,PTR_s_setFrame__026ca960);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_addSubview__026ca4c0,local_28);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layoutIfNeeded_026ca790);
    uVar4 = 0x4073600000000000;
    local_a8 = 0x4073600000000000;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
    local_e8 = uVar4;
    _CGRectGetHeight();
    uVar5 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
    local_108 = uVar5;
    _CGRectGetWidth(uVar5,in_d1,in_d2,in_d3);
    uVar6 = 0;
    uVar7 = local_a8;
    FUN_005768f8();
    IVar3 = local_28;
    local_c8 = uVar6;
    uStack_c0 = uVar4;
    local_b8 = uVar5;
    uStack_b0 = uVar7;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cardView_026a5340);
    _objc_retainAutoreleasedReturnValue();
    uStack_128 = uStack_c0;
    local_130 = local_c8;
    uStack_118 = uStack_b0;
    local_120 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,uStack_c0,local_b8,uStack_b0);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    IVar3 = local_28;
    puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
    local_160 = PTR___NSConcreteStackBlock_02578660;
    local_158 = 0xc2000000;
    local_154 = 0;
    local_150 = FUN_00578b20;
    local_148 = &DAT_025791c0;
    (*(code *)PTR__objc_retain_02578638)();
    local_140 = IVar3;
    local_138 = local_a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3fd0000000000000,puVar2,PTR_s_animateWithDuration_animations__026ca4e0,&local_160);
    _objc_storeStrong(&local_140,0);
  }
  local_4c = (uint)!bVar1;
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

