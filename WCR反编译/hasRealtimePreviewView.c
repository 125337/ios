// hasRealtimePreviewView @ 01ae4e60

/* Function Stack Size: 0x10 bytes */

ID WCRefineHomeAvatarStripSettingsViewController::hasRealtimePreviewView(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double in_d2;
  double dVar6;
  double dVar7;
  double local_130;
  double local_128;
  double local_120;
  undefined *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  double local_d0;
  double local_c8;
  undefined *local_c0;
  double local_b8;
  undefined8 local_b0;
  double local_a8;
  undefined8 local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  undefined8 local_70;
  double local_48;
  double local_40;
  undefined *local_38;
  SEL local_30;
  ID local_28;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0x406b800000000000;
  local_48 = 220.0;
  IVar2 = local_28;
  local_38 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_70 = uVar4;
  (*(code *)PTR__objc_release_02578630)(IVar2);
  local_120 = in_d2;
  if (in_d2 <= local_48) {
    local_120 = local_48;
  }
  local_78 = local_120;
  local_40 = local_120;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHomeAvatarStripView_026ce538,
             PTR_s_layoutRowHeightForConfig_tableWi_026a2210,local_38);
  local_98 = local_120 + 16.0;
  local_a0 = 0x4052000000000000;
  local_128 = local_98;
  if (local_98 < 72.0) {
    local_128 = 72.0;
  }
  local_a8 = local_128;
  local_90 = local_128;
  local_b0 = 0x406b800000000000;
  if (220.0 <= local_128) {
    local_130 = 220.0;
  }
  else {
    local_130 = local_128;
  }
  local_b8 = local_130;
  local_88 = local_130;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_80 = local_120;
  _objc_alloc();
  dVar7 = local_88 + 12.0;
  uVar5 = 0;
  uVar4 = 0;
  dVar6 = local_40;
  FUN_01ae107c();
  local_e0 = uVar4;
  local_d8 = uVar5;
  local_d0 = dVar6;
  local_c8 = dVar7;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar4,uVar5,dVar6,dVar7,puVar1,PTR_s_initWithFrame__026ca6e8);
  puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_c0 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar1 = PTR_WCRefineHomeAvatarStripView_026ce538;
  _objc_alloc();
  uVar4 = 0;
  uVar5 = 0x4018000000000000;
  dVar6 = local_40;
  dVar7 = local_88;
  FUN_01ae107c();
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar4,uVar5,dVar6,dVar7,puVar1,PTR_s_initWithFrame__026ca6e8);
  local_e8 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setUserInteractionEnabled__026caad8,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_addSubview__026ca4c0,local_e8);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setRealtimePreviewStrip__026be3a0,local_e8);
  (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_reloadContent_026be3a8);
  puVar1 = local_c0;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_e8);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar1;
}

