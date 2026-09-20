// toDoRealtimePreviewView @ 01ebbe04

/* Function Stack Size: 0x10 bytes */

ID WCRefineToDoListSettingsViewController::toDoRealtimePreviewView(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined *puVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  double in_d2;
  double local_1b0;
  double local_1a8;
  double local_180;
  undefined *local_168;
  undefined8 local_160;
  undefined8 local_158;
  double local_150;
  double local_148;
  undefined *local_140;
  undefined8 local_138;
  undefined8 local_130;
  double local_128;
  double local_120;
  undefined *local_118;
  double local_110;
  double local_108;
  undefined8 local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  undefined8 local_b8;
  double local_a0;
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
  dVar5 = in_d2;
  local_70 = uVar4;
  (*(code *)PTR__objc_release_02578630)(IVar2);
  local_180 = in_d2;
  if (in_d2 <= local_48) {
    local_180 = local_48;
  }
  local_78 = local_180;
  local_40 = local_180;
  puVar1 = PTR__OBJC_CLASS___UIScreen_026cdf70;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  dVar6 = dVar5;
  local_a0 = local_180;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  uVar4 = 0x3ff0000000000000;
  local_80 = dVar5;
  if (dVar5 <= 1.0) {
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_b8 = uVar4;
    local_80 = dVar6;
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  dVar5 = local_80;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineToDoCardView_026ce978,PTR_s_layoutCardHeightForConfig_tableW_026a8998,
             local_38);
  dVar6 = 0.0;
  local_d8 = 0.0;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_toDoCardOffsetY_026c6e28);
  local_e0 = ABS(dVar6);
  local_1a8 = local_e0;
  if (local_e0 <= local_d8) {
    local_1a8 = local_d8;
  }
  local_e8 = local_1a8;
  local_f8 = dVar5 + local_1a8 + 8.0;
  local_100 = 0x4071800000000000;
  local_1b0 = local_f8;
  if (280.0 <= local_f8) {
    local_1b0 = 280.0;
  }
  local_108 = local_1b0;
  local_f0 = local_1b0;
  local_110 = local_1b0 + 20.0;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_d0 = local_f8;
  _objc_alloc();
  uVar7 = 0;
  uVar4 = 0;
  dVar5 = local_40;
  dVar6 = local_110;
  FUN_01ebb220();
  local_138 = uVar4;
  local_130 = uVar7;
  local_128 = dVar5;
  local_120 = dVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar4,uVar7,dVar5,dVar6,puVar1,PTR_s_initWithFrame__026ca6e8);
  puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_118 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar1 = PTR__OBJC_CLASS___UIScrollView_026ce1a0;
  _objc_alloc();
  uVar4 = 0;
  uVar7 = 0x4024000000000000;
  dVar5 = local_40;
  dVar6 = local_f0;
  FUN_01ebb220();
  local_160 = uVar4;
  local_158 = uVar7;
  local_150 = dVar5;
  local_148 = dVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar4,uVar7,dVar5,dVar6,puVar1,PTR_s_initWithFrame__026ca6e8);
  local_140 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setShowsHorizontalScrollIndicato_0269f108,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_setShowsVerticalScrollIndicator__026caa68,0)
  ;
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_addSubview__026ca4c0,local_140);
  puVar1 = PTR_WCRefineToDoCardView_026ce978;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)PTR__CGRectZero_025782f0,*(undefined8 *)(PTR__CGRectZero_025782f0 + 8),
             *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10),
             *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18));
  local_168 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setUserInteractionEnabled__026caad8,1);
  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_addSubview__026ca4c0,local_168);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setRealtimePreviewCard__026c7850,local_168);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_applyPreviewLayoutToCard_scrollV_026c7858,local_168,local_140,local_38);
  (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_reloadContent_026be3a8);
  puVar1 = local_118;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_168);
  _objc_storeStrong(&local_140,0);
  _objc_storeStrong(&local_118,0);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar1;
}

