// openManageModelAtIndex: @ 01f5b440

/* Function Stack Size: 0x18 bytes */

void WCRefineVoiceCloneListViewController::openManageModelAtIndex_
               (ID param_1,SEL param_2,unsigned_long_long param_3)

{
  ID IVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  cfstringStruct *local_218;
  undefined *local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  code *local_1e8;
  undefined *local_1e0;
  ID local_1d8;
  cfstringStruct *local_1d0;
  undefined *local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  code *local_1b8;
  undefined *local_1b0;
  ID local_1a8;
  cfstringStruct *local_1a0;
  undefined *local_198;
  undefined4 local_190;
  undefined4 local_18c;
  code *local_188;
  undefined *local_180;
  ID local_178;
  cfstringStruct *local_170;
  undefined *local_168;
  undefined *local_160;
  undefined4 local_158;
  undefined4 local_154;
  code *local_150;
  undefined *local_148;
  cfstringStruct *local_140;
  ID local_138;
  byte local_130;
  undefined *local_128;
  undefined4 local_120;
  undefined4 local_11c;
  code *local_118;
  undefined *local_110;
  ID local_108;
  cfstringStruct *local_100;
  undefined *local_f8;
  undefined *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  code *local_e0;
  undefined *local_d8;
  cfstringStruct *local_d0;
  ID local_c8;
  undefined *local_c0;
  undefined *local_b8;
  byte local_a9;
  undefined *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  undefined4 local_8c;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  SEL local_78;
  ID local_70;
  undefined **local_68;
  undefined **local_60;
  undefined **local_58;
  undefined **local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_80 = (cfstringStruct *)param_3;
  local_78 = param_2;
  local_70 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_visibleModels_026b51b0);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_80;
  local_88 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_count_0269cfe0);
  if (pcVar2 < param_1) {
    pcVar2 = local_88;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_88,PTR_s_objectAtIndexedSubscript__0269cc78,local_80);
    _objc_retainAutoreleasedReturnValue();
    local_98 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
    _objc_retainAutoreleasedReturnValue();
    local_218 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_218 = &::cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_a0 = local_218;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    puVar3 = PTR_WCRefineVoiceCloneHelper_026cea40;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineVoiceCloneHelper_026cea40,PTR_s_displayNameForModel__026c9498,local_98);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_WCRefineConfig_026cdf58;
    local_a8 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    local_a9 = (byte)puVar5;
    local_48 = &cf__NS_MRr;
    local_40 = &cf__T;
    local_38 = &cf_Sm6e;
    if (((ulong)puVar5 & 1) == 0) {
      local_38 = &cf_ReQ6e;
    }
    local_30 = &cf__TT;
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_b8 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    pcVar2 = local_a0;
    puVar3 = PTR___NSConcreteStackBlock_02578660;
    ppuVar6 = &local_f0;
    local_f0 = PTR___NSConcreteStackBlock_02578660;
    local_e8 = 0xc2000000;
    local_e4 = 0;
    local_e0 = FUN_01f5bd68;
    local_d8 = &DAT_0257a7a0;
    (*(code *)PTR__objc_retain_02578638)();
    IVar1 = local_70;
    local_d0 = pcVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_c8 = IVar1;
    _objc_retainBlock();
    IVar1 = local_70;
    ppuVar7 = &local_128;
    local_128 = puVar3;
    local_120 = 0xc2000000;
    local_11c = 0;
    local_118 = FUN_01f5bdf8;
    local_110 = &DAT_025839b0;
    local_68 = ppuVar6;
    (*(code *)PTR__objc_retain_02578638)();
    pcVar2 = local_a0;
    local_108 = IVar1;
    (*(code *)PTR__objc_retain_02578638)();
    puVar4 = local_a8;
    local_100 = pcVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_f8 = puVar4;
    _objc_retainBlock();
    pcVar2 = local_a0;
    ppuVar8 = &local_160;
    local_160 = puVar3;
    local_158 = 0xc2000000;
    local_154 = 0;
    local_150 = FUN_01f5be44;
    local_148 = &DAT_02585ba0;
    local_130 = local_a9 & 1;
    local_60 = ppuVar7;
    (*(code *)PTR__objc_retain_02578638)();
    IVar1 = local_70;
    local_140 = pcVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_138 = IVar1;
    _objc_retainBlock();
    IVar1 = local_70;
    ppuVar9 = &local_198;
    local_198 = puVar3;
    local_190 = 0xc2000000;
    local_18c = 0;
    local_188 = FUN_01f5c058;
    local_180 = &DAT_025839b0;
    local_58 = ppuVar8;
    (*(code *)PTR__objc_retain_02578638)();
    pcVar2 = local_a0;
    local_178 = IVar1;
    (*(code *)PTR__objc_retain_02578638)();
    puVar3 = local_a8;
    local_170 = pcVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_168 = puVar3;
    _objc_retainBlock();
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_50 = ppuVar9;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_68,4
              );
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_c0 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(ppuVar9);
    (*(code *)PTR__objc_release_02578630)(ppuVar8);
    (*(code *)PTR__objc_release_02578630)(ppuVar7);
    (*(code *)PTR__objc_release_02578630)(ppuVar6);
    puVar3 = PTR_WCRefineVoiceCloneHelper_026cea40;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineVoiceCloneHelper_026cea40,PTR_s_canUploadModelToCatalog__026b0ac0,
               local_98);
    if (((ulong)puVar3 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_addObject__0269d180,&cf_NO0RNz);
      IVar1 = local_70;
      puVar3 = local_c0;
      ppuVar7 = &local_1c8;
      local_1c8 = PTR___NSConcreteStackBlock_02578660;
      local_1c0 = 0xc2000000;
      local_1bc = 0;
      local_1b8 = FUN_01f5c0a4;
      local_1b0 = &DAT_0257a7a0;
      (*(code *)PTR__objc_retain_02578638)();
      pcVar2 = local_98;
      local_1a8 = IVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_1a0 = pcVar2;
      _objc_retainBlock();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
      (*(code *)PTR__objc_release_02578630)(ppuVar7);
      _objc_storeStrong(&local_1a0);
      _objc_storeStrong(&local_1a8,0);
    }
    IVar1 = local_70;
    puVar5 = local_a8;
    puVar4 = local_b8;
    puVar3 = local_c0;
    local_1f8 = PTR___NSConcreteStackBlock_02578660;
    local_1f0 = 0xc2000000;
    local_1ec = 0;
    local_1e8 = FUN_01f5c0ec;
    local_1e0 = &DAT_0257a7a0;
    (*(code *)PTR__objc_retain_02578638)();
    pcVar2 = local_a0;
    local_1d8 = IVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_1d0 = pcVar2;
    FUN_01f5a308(IVar1,puVar5,puVar4,puVar3,&cf_Rdr,&local_1f8);
    _objc_storeStrong(&local_1d0);
    _objc_storeStrong(&local_1d8,0);
    _objc_storeStrong(&local_c0,0);
    _objc_storeStrong(&local_168,0);
    _objc_storeStrong(&local_170,0);
    _objc_storeStrong(&local_178,0);
    _objc_storeStrong(&local_138,0);
    _objc_storeStrong(&local_140,0);
    _objc_storeStrong(&local_f8,0);
    _objc_storeStrong(&local_100,0);
    _objc_storeStrong(&local_108,0);
    _objc_storeStrong(&local_c8,0);
    _objc_storeStrong(&local_d0,0);
    _objc_storeStrong(&local_b8,0);
    _objc_storeStrong(&local_a8,0);
    _objc_storeStrong(&local_a0,0);
    _objc_storeStrong(&local_98,0);
    local_8c = 0;
  }
  else {
    local_8c = 1;
  }
  _objc_storeStrong(&local_88,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

