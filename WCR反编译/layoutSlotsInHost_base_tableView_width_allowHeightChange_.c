// layoutSlotsInHost:base:tableView:width:allowHeightChange: @ 00fcf3b8

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x34 bytes */

double WCRefineHomeTableHeaderHost::layoutSlotsInHost_base_tableView_width_allowHeightChange_
                 (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,double param_6,
                 bool param_7)

{
  ID IVar1;
  undefined *puVar2;
  long lVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  uint local_298;
  uint local_294;
  ID local_278;
  ID local_268;
  double local_260;
  double local_258;
  undefined *local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  double local_210;
  double dStack_208;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  double dStack_1e0;
  long local_1d8;
  undefined8 local_1d0;
  double dStack_1c8;
  double local_1c0;
  double dStack_1b8;
  undefined8 local_1b0;
  double dStack_1a8;
  double local_1a0;
  double dStack_198;
  undefined8 local_170;
  double dStack_168;
  double local_160;
  double dStack_158;
  undefined8 local_130;
  double dStack_128;
  double local_120;
  double dStack_118;
  double local_110;
  byte local_102;
  byte local_101;
  ID local_100;
  byte local_f1;
  ID local_f0;
  ID local_e8;
  byte local_d9;
  ID local_d8;
  byte local_c9;
  ID local_c8;
  ID local_c0;
  double local_b8;
  double local_b0;
  undefined *local_a8 [5];
  double local_80;
  undefined8 uStack_78;
  double local_70;
  double dStack_68;
  double local_60;
  byte local_53;
  byte local_52;
  byte local_51;
  double local_50;
  long local_48;
  undefined8 local_40;
  ID local_38;
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
  local_51 = (byte)param_7;
  IVar1 = local_28;
  local_50 = param_6;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_todoWantsTableHeader_026ad150);
  local_52 = (byte)IVar1;
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_stripWantsTableHeader_026ad158);
  local_53 = (byte)IVar1;
  dVar4 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_stableBaseHeightForBase_width_ta_026ad178,local_40,local_48);
  uVar5 = 0;
  local_258 = 0.0;
  dVar7 = local_50;
  local_60 = dVar4;
  FUN_00fcfd30();
  local_80 = local_258;
  uStack_78 = uVar5;
  local_70 = dVar7;
  dStack_68 = dVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_258,uVar5,dVar7,dVar4,local_40,PTR_s_setFrame__026ca960);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_a8[0] = puVar2;
  if ((local_52 & 1) == 0) {
    local_258 = 0.0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineToDoCardView_026ce978,PTR_s_layoutRowHeightForConfig__026a89d0,puVar2);
  }
  local_b0 = local_258;
  if ((local_53 & 1) == 0) {
    local_260 = 0.0;
  }
  else {
    local_260 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHomeAvatarStripView_026ce538,
               PTR_s_layoutRowHeightForConfig_tableWi_026a2210,local_a8[0]);
  }
  local_b8 = local_260;
  local_c9 = 0;
  local_d9 = 0;
  if ((local_52 & 1) == 0) {
    local_268 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_viewWithTag__026cabe0,0x7f154);
    _objc_retainAutoreleasedReturnValue();
    local_d9 = 1;
    local_d8 = local_268;
  }
  else {
    local_268 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_ensureSlotTag_inHost__026ad180,0x7f154,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_c9 = 1;
    local_c8 = local_268;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_c0 = local_268;
  if ((local_d9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_d8);
  }
  if ((local_c9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_c8);
  }
  local_f1 = 0;
  local_101 = 0;
  if ((local_53 & 1) == 0) {
    local_278 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_viewWithTag__026cabe0,0x7f155);
    _objc_retainAutoreleasedReturnValue();
    local_101 = 1;
    local_100 = local_278;
  }
  else {
    local_278 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_ensureSlotTag_inHost__026ad180,0x7f155,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_f1 = 1;
    local_f0 = local_278;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_e8 = local_278;
  if ((local_101 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_100);
  }
  if ((local_f1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_f0);
  }
  if (((local_52 & 1) == 0) && (local_c0 != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_removeFromSuperview_026ca800);
    _objc_storeStrong(&local_c0,0);
  }
  if (((local_53 & 1) == 0) && (local_e8 != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_removeFromSuperview_026ca800);
    _objc_storeStrong(&local_e8,0);
  }
  local_294 = 0;
  if ((local_52 & 1) != 0) {
    local_298 = 1;
    if ((local_53 & 1) != 0) {
      IVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_todoAboveStrip_026ad188);
      local_298 = (uint)IVar1;
    }
    local_294 = local_298;
  }
  local_102 = (byte)local_294 & 1;
  local_110 = local_60;
  if (((local_52 & 1) != 0) && ((local_294 & 1) != 0)) {
    uVar5 = 0;
    dVar4 = local_60;
    dVar7 = local_50;
    dVar8 = local_b0;
    FUN_00fcfd30();
    local_130 = uVar5;
    dStack_128 = dVar4;
    local_120 = dVar7;
    dStack_118 = dVar8;
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,dVar4,dVar7,dVar8,local_c0,PTR_s_setFrame__026ca960)
    ;
    local_110 = local_110 + local_b0;
  }
  if ((local_53 & 1) != 0) {
    uVar5 = 0;
    dVar4 = local_110;
    dVar7 = local_50;
    dVar8 = local_b8;
    FUN_00fcfd30();
    local_170 = uVar5;
    dStack_168 = dVar4;
    local_160 = dVar7;
    dStack_158 = dVar8;
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,dVar4,dVar7,dVar8,local_e8,PTR_s_setFrame__026ca960)
    ;
    local_110 = local_110 + local_b8;
  }
  if (((local_52 & 1) != 0) && ((local_102 & 1) == 0)) {
    uVar5 = 0;
    dVar4 = local_110;
    dVar7 = local_50;
    dVar8 = local_b0;
    FUN_00fcfd30();
    local_1d0 = uVar5;
    dStack_1c8 = dVar4;
    local_1c0 = dVar7;
    dStack_1b8 = dVar8;
    local_1b0 = uVar5;
    dStack_1a8 = dVar4;
    local_1a0 = dVar7;
    dStack_198 = dVar8;
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,dVar4,dVar7,dVar8,local_c0,PTR_s_setFrame__026ca960)
    ;
    local_110 = local_110 + local_b0;
  }
  lVar3 = local_48;
  dVar4 = local_110;
  _objc_getAssociatedObject(local_48,&DAT_028e3042);
  _objc_retainAutoreleasedReturnValue();
  local_1d8 = lVar3;
  if (((local_51 & 1) == 0) && (lVar3 != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_doubleValue_026ca608);
    dVar4 = ABS(dVar4 - local_110);
    if (0.5 < dVar4) {
      (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_doubleValue_026ca608);
      local_110 = dVar4;
      goto LAB_00fcfb7c;
    }
  }
  lVar3 = local_48;
  if (1.0 <= local_110) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_110,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(lVar3,&DAT_028e3042,puVar2,1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
LAB_00fcfb7c:
  uVar6 = 0;
  uVar5 = 0;
  dVar4 = local_50;
  dVar7 = local_110;
  FUN_00fcfd30();
  local_220 = uVar5;
  uStack_218 = uVar6;
  local_210 = dVar4;
  dStack_208 = dVar7;
  local_1f8 = uVar5;
  uStack_1f0 = uVar6;
  local_1e8 = dVar4;
  dStack_1e0 = dVar7;
  (*(code *)PTR__objc_msgSend_02578628)(uVar5,uVar6,dVar4,dVar7,local_38,PTR_s_setFrame__026ca960);
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
             &cf_t_d_s_d_bh__0f_th__0f_sh__0f_todoFirst_d_w__0f);
  _objc_retainAutoreleasedReturnValue();
  local_228 = puVar2;
  _objc_setAssociatedObject(local_48,&DAT_028e3043,puVar2,3);
  dVar4 = local_110;
  _objc_storeStrong(&local_228);
  _objc_storeStrong(&local_1d8,0);
  _objc_storeStrong(&local_e8,0);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(local_a8,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return dVar4;
}

