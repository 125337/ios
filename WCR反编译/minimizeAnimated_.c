// minimizeAnimated: @ 00fd982c

/* Function Stack Size: 0x14 bytes */

void WCRIconNameCaptureFloatWindow::minimizeAnimated_(ID param_1,SEL param_2,bool param_3)

{
  ID IVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 in_d1;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined *local_90;
  ID local_88;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  ID local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  byte local_48;
  undefined **local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  byte local_22;
  byte local_21;
  SEL local_20;
  ID local_18;
  
  local_21 = (byte)param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setState__026a00b0,0);
  uVar4 = DAT_0232c680;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setWindowLevel__026caae8);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_searchField_026ad308);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  puVar2 = PTR_WCRefineIconNameCaptureSupport_026cec30;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineIconNameCaptureSupport_026cec30,PTR_s_isSuperFloatLinked_026ad310);
  local_22 = (byte)puVar2;
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_panel_026ad220);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_38 = uVar4;
  uStack_30 = in_d1;
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_18;
  ppuVar3 = &local_80;
  local_80 = PTR___NSConcreteStackBlock_02578660;
  local_78 = 0xc2000000;
  local_74 = 0;
  local_70 = FUN_00fd9aa0;
  local_68 = &DAT_02583e38;
  (*(code *)PTR__objc_retain_02578638)();
  local_60 = IVar1;
  local_48 = local_22 & 1;
  uStack_50 = uStack_30;
  local_58 = local_38;
  _objc_retainBlock();
  IVar1 = local_18;
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_40 = ppuVar3;
  if ((local_21 & 1) == 0) {
    (*(code *)ppuVar3[2])(ppuVar3,1);
  }
  else {
    local_a8 = PTR___NSConcreteStackBlock_02578660;
    local_a0 = 0xc2000000;
    local_9c = 0;
    local_98 = FUN_00fd9dec;
    local_90 = &DAT_0257a800;
    (*(code *)PTR__objc_retain_02578638)();
    local_88 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323da8,puVar2,PTR_s_animateWithDuration_animations_c_026ca4e8,&local_a8,
               local_40);
    _objc_storeStrong(&local_88,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_60,0);
  return;
}

