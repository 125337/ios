// dismissAnimated:completion: @ 00578d14

/* Function Stack Size: 0x1c bytes */

void WCRMomentsScheduledDatePickerPanel::dismissAnimated_completion_
               (ID param_1,SEL param_2,bool param_3,ID param_4,undefined4 param_5)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ID IVar5;
  undefined **ppuVar6;
  undefined *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  code *local_c8;
  undefined *local_c0;
  undefined **local_b8;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined *local_98;
  ID local_90;
  uint local_88;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  ID local_58;
  undefined8 local_50;
  undefined **local_48;
  undefined8 local_40;
  byte local_31;
  SEL local_30;
  ID local_28;
  
  local_31 = (byte)param_3;
  local_40 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_40,param_4,param_3,param_4,param_5);
  IVar5 = local_28;
  ppuVar6 = &local_78;
  local_78 = PTR___NSConcreteStackBlock_02578660;
  local_70 = 0xc2000000;
  local_6c = 0;
  local_68 = FUN_00578fe0;
  local_60 = &DAT_02579e20;
  (*(code *)PTR__objc_retain_02578638)();
  uVar4 = local_40;
  local_58 = IVar5;
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = uVar4;
  _objc_retainBlock();
  IVar5 = local_28;
  puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
  puVar2 = PTR___NSConcreteStackBlock_02578660;
  bVar1 = (local_31 & 1) != 0;
  local_48 = ppuVar6;
  if (bVar1) {
    local_b0 = PTR___NSConcreteStackBlock_02578660;
    local_a8 = 0xc2000000;
    local_a4 = 0;
    local_a0 = FUN_00579048;
    local_98 = &DAT_02578c20;
    (*(code *)PTR__objc_retain_02578638)();
    ppuVar6 = local_48;
    local_90 = IVar5;
    local_d8 = puVar2;
    local_d0 = 0xc2000000;
    local_cc = 0;
    local_c8 = FUN_0057927c;
    local_c0 = &DAT_02579e50;
    (*(code *)PTR__objc_retain_02578638)();
    local_b8 = ppuVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323da8,puVar3,PTR_s_animateWithDuration_animations_c_026ca4e8,&local_b0,
               &local_d8);
    _objc_storeStrong(&local_b8);
    _objc_storeStrong(&local_90,0);
  }
  else {
    (*(code *)ppuVar6[2])();
  }
  local_88 = (uint)!bVar1;
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_40,0);
  return;
}

