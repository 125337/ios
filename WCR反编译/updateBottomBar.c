// updateBottomBar @ 01b0e3ac

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRefineKeywordAlertHistoryCardViewController::updateBottomBar(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double in_d2;
  double dVar6;
  undefined8 uVar7;
  undefined *local_1c0;
  undefined *local_1a8;
  cfstringStruct *local_168;
  undefined1 local_159;
  ulong local_158;
  byte local_149;
  undefined *local_148;
  byte local_139;
  undefined *local_138;
  undefined *local_130;
  byte local_121;
  undefined *local_120;
  byte local_111;
  undefined *local_110;
  undefined *local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  double local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  double local_d0;
  undefined8 uStack_c8;
  undefined8 local_98;
  undefined8 uStack_90;
  double local_88;
  undefined8 uStack_80;
  double local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_bottomBar_026a0ef8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  dVar6 = in_d2;
  (*(code *)PTR__objc_release_02578630)(param_1);
  local_38 = in_d2;
  if (in_d2 <= 0.0) {
    IVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_38 = dVar6;
    (*(code *)PTR__objc_release_02578630)(IVar1);
  }
  uVar5 = 0;
  uVar4 = 0;
  uVar7 = 0x4042000000000000;
  dVar6 = local_38;
  FUN_01b05ae4();
  IVar1 = local_28;
  local_98 = uVar4;
  uStack_90 = uVar5;
  local_88 = dVar6;
  uStack_80 = uVar7;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pageIndicatorButton_026be9b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_98,uStack_90,local_88,uStack_80);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  dVar6 = local_38 - 24.0;
  uVar4 = 0x4028000000000000;
  uVar5 = 0x4041000000000000;
  uVar7 = 0x4044000000000000;
  FUN_01b05ae4();
  IVar1 = local_28;
  local_e0 = uVar4;
  uStack_d8 = uVar5;
  local_d0 = dVar6;
  uStack_c8 = uVar7;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_gestureHintLabel_026be9d0);
  _objc_retainAutoreleasedReturnValue();
  uStack_f8 = uStack_d8;
  local_100 = local_e0;
  uStack_e8 = uStack_c8;
  local_f0 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,uStack_d8,local_d0,uStack_c8);
  (*(code *)PTR__objc_release_02578630)();
  FUN_01b08450();
  local_111 = 0;
  local_121 = 0;
  local_1a8 = PTR__OBJC_CLASS___UIColor_026cdf78;
  if ((IVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3fd0000000000000,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    local_121 = 1;
    local_120 = local_1a8;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3feb333333333333,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    local_111 = 1;
    local_110 = local_1a8;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_108 = local_1a8;
  if ((local_121 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_120);
  }
  if ((local_111 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_110);
  }
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pageIndicatorButton_026be9b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)();
  FUN_01b08450();
  local_139 = 0;
  local_149 = 0;
  local_1c0 = PTR__OBJC_CLASS___UIColor_026cdf78;
  if ((IVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323c78,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    local_149 = 1;
    local_148 = local_1c0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323c98,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    local_139 = 1;
    local_138 = local_1c0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_130 = local_1c0;
  if ((local_149 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_148);
  }
  if ((local_139 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_138);
  }
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_gestureHintLabel_026be9d0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pageCount_026bea90);
  local_158 = IVar1;
  if (IVar1 < 2) {
    IVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pageIndicatorButton_026be9b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    if (local_158 == 1) {
      IVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pageIndicatorButton_026be9b8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar1);
    }
  }
  else {
    IVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pageIndicatorButton_026be9b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pageIndicatorButton_026be9b8);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentPage_0269f4e8);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringWithFormat__0269cca8,&::cf___);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_setTitle_forState__026caab8,puVar2,0);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(IVar1);
  }
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_multiSelectMode_026be908);
  local_159 = (IVar1 & 1) != 0 || local_158 == 0;
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pageIndicatorButton_026be9b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_gestureHintLabel_026be9d0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_retain_02578638)();
  local_168 = &cf_Sc_cku>f_yaSGrpe;
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (((ulong)puVar3 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__c_g);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_gestureHintLabel_026be9d0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_pQl_cNnRd);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_gestureHintLabel_026be9d0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  _objc_storeStrong(&local_168);
  _objc_storeStrong(&local_130,0);
  _objc_storeStrong(&local_108,0);
  return;
}

