// dismiss @ 01ed47dc

/* Function Stack Size: 0x10 bytes */

void WCRToDoAdjustmentFloatingPanel::dismiss(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 in_d0;
  undefined8 in_d1;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  code *local_b0;
  undefined *local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  undefined *local_78 [7];
  uint local_3c;
  undefined *local_38;
  SEL local_30;
  ID local_28;
  
  puVar3 = &DAT_028e4860;
  local_30 = param_2;
  local_28 = param_1;
  _objc_loadWeakRetained();
  local_38 = puVar3;
  if (puVar3 != (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_frame_026ca640);
    _NSStringFromCGPoint(in_d0,in_d1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_setObject_forKey__026ca9e8,puVar5,&cf_WCRToDoAdjustmentPanelOrigin);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar1 = local_38;
    puVar5 = PTR__OBJC_CLASS___UIView_026cdfd8;
    puVar4 = PTR___NSConcreteStackBlock_02578660;
    local_98 = PTR___NSConcreteStackBlock_02578660;
    local_90 = 0xc2000000;
    local_8c = 0;
    local_88 = FUN_01ed4a00;
    local_80 = &DAT_0257a800;
    (*(code *)PTR__objc_retain_02578638)();
    puVar2 = local_38;
    local_78[0] = puVar1;
    local_c0 = puVar4;
    local_b8 = 0xc2000000;
    local_b4 = 0;
    local_b0 = FUN_01ed4aa4;
    local_a8 = &DAT_02579d00;
    (*(code *)PTR__objc_retain_02578638)();
    local_a0 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323c70,puVar5,PTR_s_animateWithDuration_animations_c_026ca4e8,&local_98,
               &local_c0);
    _objc_storeStrong(&local_a0);
    _objc_storeStrong(local_78,0);
  }
  local_3c = (uint)(puVar3 == (undefined *)0x0);
  _objc_storeStrong(&local_38,0);
  return;
}

