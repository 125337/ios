// FUN_002edae8 @ 002edae8

void FUN_002edae8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  long lVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined *puVar10;
  int iVar11;
  undefined *local_138;
  undefined4 local_130;
  undefined4 local_12c;
  code *local_128;
  undefined *local_120;
  long local_118;
  undefined8 local_110;
  long local_108;
  undefined8 local_100;
  undefined **local_f8;
  undefined8 local_f0;
  long local_e8;
  long local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  int local_bc;
  undefined *local_b8;
  char *local_b0;
  cfstringStruct *local_a8 [3];
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  long *plVar3;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_88 = 0;
  local_80 = param_2;
  local_78 = param_1;
  _objc_storeStrong(&local_88,param_3);
  plVar3 = &local_90;
  local_90 = 0;
  _objc_storeStrong(plVar3,param_4);
  uVar2 = (uint)plVar3;
  FUN_002ee484();
  if (((((uVar2 & 1) == 0) || (local_90 == 0)) ||
      (lVar4 = local_90,
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_m_uiMessageType_0269d0a8),
      (int)lVar4 != 0x2f)) ||
     ((lVar4 = local_90, (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_m_uiGameType_026a1e68)
      , lVar4 != 2 &&
      (lVar4 = local_90, (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_m_uiGameType_026a1e68)
      , lVar4 != 1)))) {
    (*DAT_028c99c8)(local_78,local_80,local_88,local_90);
  }
  else {
    lVar4 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_m_uiGameType_026a1e68);
    local_a8[0] = &cf_bw4Y_;
    if (lVar4 != 1) {
      local_a8[0] = &cf_bppe;
    }
    (*(code *)PTR__objc_retain_02578638)();
    _objc_storeStrong(&DAT_028c99b8,local_90);
    _objc_storeStrong(&DAT_028c99c0,local_88);
    pcVar5 = "WCUIActionSheet";
    _objc_getClass();
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_initWithTitle__0269d2f8,&cf_WCRefine);
    local_70 = &cf_jR;
    local_68 = &cf_w4Y;
    local_60 = &cf__;
    local_58 = &cf_1;
    local_50 = &cf_2;
    local_48 = &cf_3;
    local_40 = &cf_4;
    local_38 = &cf_5;
    local_30 = &cf_6;
    puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_b0 = pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_70,9
              );
    _objc_retainAutoreleasedReturnValue();
    lVar4 = local_90;
    local_b8 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_m_uiGameType_026a1e68);
    local_bc = 0;
    if (lVar4 != 1) {
      local_bc = 3;
    }
    while( true ) {
      iVar1 = local_bc;
      lVar4 = local_90;
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_m_uiGameType_026a1e68);
      iVar11 = 3;
      if (lVar4 != 1) {
        iVar11 = 9;
      }
      if (iVar11 <= iVar1) break;
      puVar6 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b8,PTR_s_objectAtIndexedSubscript__0269cc78,(long)local_bc);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_c8 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                 &cf_selectGameOption_d_);
      _objc_retainAutoreleasedReturnValue();
      local_d0 = puVar10;
      _NSSelectorFromString();
      lVar4 = local_90;
      local_e0 = (long)(local_bc + 1);
      local_d8 = puVar10;
      (*(code *)PTR__objc_retain_02578638)();
      uVar9 = local_88;
      local_e8 = lVar4;
      (*(code *)PTR__objc_retain_02578638)();
      lVar4 = local_e8;
      local_f0 = uVar9;
      ppuVar7 = &local_138;
      local_138 = PTR___NSConcreteStackBlock_02578660;
      local_130 = 0xc2000000;
      local_12c = 0;
      local_128 = FUN_002ee5a4;
      local_120 = &DAT_0257bca8;
      (*(code *)PTR__objc_retain_02578638)();
      uVar9 = local_f0;
      local_118 = lVar4;
      (*(code *)PTR__objc_retain_02578638)();
      local_110 = uVar9;
      local_108 = local_e0;
      local_100 = local_80;
      _objc_retainBlock();
      ppuVar8 = ppuVar7;
      _imp_implementationWithBlock();
      (*(code *)PTR__objc_release_02578630)(ppuVar7);
      uVar9 = local_78;
      local_f8 = ppuVar8;
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_class_0269cd60);
      _class_replaceMethod(uVar9,local_d8,local_f8,"v@:@");
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b0,PTR_s_addBtnTitle_target_sel__0269d278,local_c8,local_78,local_d8);
      _objc_storeStrong(&local_110);
      _objc_storeStrong(&local_118,0);
      _objc_storeStrong(&local_f0,0);
      _objc_storeStrong(&local_e8,0);
      _objc_storeStrong(&local_d0,0);
      _objc_storeStrong(&local_c8,0);
      local_bc = local_bc + 1;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b0,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,0);
    pcVar5 = local_b0;
    puVar6 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_showInView__0269d310);
    (*(code *)PTR__objc_release_02578630)(puVar10);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    _objc_storeStrong(&local_b8);
    _objc_storeStrong(&local_b0,0);
    _objc_storeStrong(local_a8,0);
  }
  _objc_storeStrong(&local_90);
  _objc_storeStrong(&local_88,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

