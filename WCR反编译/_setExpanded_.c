// _setExpanded: @ 017067e0

/* Function Stack Size: 0x14 bytes */

void Knob::_setExpanded_(ID param_1,SEL param_2,bool param_3)

{
  undefined *puVar1;
  ID IVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double in_d3;
  double local_110;
  undefined *local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  code *local_f0;
  undefined *local_e8;
  ID local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  byte local_a1;
  ID local_a0;
  double local_98;
  double local_90;
  double local_88;
  byte local_71;
  ID local_70;
  double local_68;
  double local_40;
  byte local_31;
  SEL local_30;
  ID local_28;
  
  local_31 = (byte)param_3;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_frame_026ca640);
  dVar7 = 1.0;
  dVar6 = 1.25;
  if ((local_31 & 1) == 0) {
    dVar6 = 1.0;
  }
  local_110 = in_d3 * dVar6;
  IVar2 = local_28;
  local_40 = local_110;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_on_026a80c0);
  local_71 = 0;
  local_a1 = 0;
  if ((IVar2 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_frame_026ca640);
    local_c8 = local_110;
    local_c0 = dVar6;
    local_b8 = dVar7;
  }
  else {
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    local_71 = 1;
    local_70 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    dVar3 = dVar7 - local_40;
    IVar2 = local_28;
    dVar4 = dVar3;
    local_98 = local_110;
    local_90 = dVar6;
    local_88 = dVar7;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    local_a1 = 1;
    local_a0 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_110 = dVar3 - dVar4;
  }
  if ((local_a1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_a0);
  }
  if ((local_71 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_70);
  }
  IVar2 = local_28;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_68 = local_110;
  uVar5 = DAT_02323d00;
  if ((*(byte *)(local_28 + (long)_shouldAnimate) & 1) == 0) {
    uVar5 = 0;
  }
  local_100 = PTR___NSConcreteStackBlock_02578660;
  local_f8 = 0xc2000000;
  local_f4 = 0;
  local_f0 = FUN_01706ae8;
  local_e8 = &DAT_02580e60;
  (*(code *)PTR__objc_retain_02578638)();
  local_e0 = IVar2;
  local_d8 = local_68;
  local_d0 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar5,0,0x3ff0000000000000,puVar1,PTR_s_animateWithDuration_delay_usingS_026ca4f8,2,
             &local_100);
  _objc_storeStrong(&local_e0,0);
  return;
}

