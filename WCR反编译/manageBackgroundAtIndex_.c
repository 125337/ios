// manageBackgroundAtIndex: @ 01f5f848

/* Function Stack Size: 0x18 bytes */

void WCRVoiceBackgroundListViewController::manageBackgroundAtIndex_
               (ID param_1,SEL param_2,unsigned_long_long param_3)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *local_148;
  undefined4 local_140;
  undefined4 local_13c;
  code *local_138;
  undefined *local_130;
  ID local_128;
  ID local_120;
  undefined *local_118;
  undefined4 local_110;
  undefined4 local_10c;
  code *local_108;
  undefined *local_100;
  ID local_f8;
  ID local_f0;
  undefined *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  code *local_d8;
  undefined *local_d0;
  ID local_c8;
  ID local_c0;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  code *local_a8;
  undefined *local_a0;
  ID local_98;
  ID local_90;
  byte local_81;
  ID local_80;
  ID local_78;
  unsigned_long_long local_70;
  SEL local_68;
  ID local_60;
  undefined **local_58;
  undefined **local_50;
  undefined **local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_70 = param_3;
  local_68 = param_2;
  local_60 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_audioPaths_026c95b0);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  if (param_3 < IVar3) {
    IVar3 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_audioPaths_026c95b0);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_78 = IVar4;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    IVar3 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_lastPathComponent_026ca780);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = local_60;
    local_80 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_pinnedNames_026c9588);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar4);
    IVar3 = local_60;
    local_81 = (byte)IVar5;
    IVar4 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_stringByDeletingPathExtension_0269fd18);
    _objc_retainAutoreleasedReturnValue();
    local_40 = &cf__NS_MRof;
    local_38 = &cf__TT;
    local_30 = &cf_Smn_v;
    if ((local_81 & 1) == 0) {
      local_30 = &cf_n_v;
    }
    puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_40);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = local_78;
    puVar1 = PTR___NSConcreteStackBlock_02578660;
    ppuVar7 = &local_b8;
    local_b8 = PTR___NSConcreteStackBlock_02578660;
    local_b0 = 0xc2000000;
    local_ac = 0;
    local_a8 = FUN_01f60344;
    local_a0 = &DAT_0257a7a0;
    (*(code *)PTR__objc_retain_02578638)();
    IVar2 = local_60;
    local_98 = IVar5;
    (*(code *)PTR__objc_retain_02578638)();
    local_90 = IVar2;
    _objc_retainBlock();
    IVar2 = local_60;
    ppuVar8 = &local_e8;
    local_e8 = puVar1;
    local_e0 = 0xc2000000;
    local_dc = 0;
    local_d8 = FUN_01f60440;
    local_d0 = &DAT_0257a7a0;
    local_58 = ppuVar7;
    (*(code *)PTR__objc_retain_02578638)();
    IVar5 = local_78;
    local_c8 = IVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_c0 = IVar5;
    _objc_retainBlock();
    IVar2 = local_60;
    ppuVar9 = &local_118;
    local_118 = puVar1;
    local_110 = 0xc2000000;
    local_10c = 0;
    local_108 = FUN_01f60488;
    local_100 = &DAT_0257a7a0;
    local_50 = ppuVar8;
    (*(code *)PTR__objc_retain_02578638)();
    IVar5 = local_80;
    local_f8 = IVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_f0 = IVar5;
    _objc_retainBlock();
    puVar10 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_48 = ppuVar9;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_58,3
              );
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_60;
    local_148 = puVar1;
    local_140 = 0xc2000000;
    local_13c = 0;
    local_138 = FUN_01f604d0;
    local_130 = &DAT_0257a7a0;
    (*(code *)PTR__objc_retain_02578638)();
    IVar5 = local_78;
    local_128 = IVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_120 = IVar5;
    FUN_01f5fe14(IVar3,IVar4,puVar6,puVar10,&cf_Rdof,&local_148);
    (*(code *)PTR__objc_release_02578630)(puVar10);
    (*(code *)PTR__objc_release_02578630)(ppuVar9);
    (*(code *)PTR__objc_release_02578630)(ppuVar8);
    (*(code *)PTR__objc_release_02578630)(ppuVar7);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    _objc_storeStrong(&local_120);
    _objc_storeStrong(&local_128,0);
    _objc_storeStrong(&local_f0,0);
    _objc_storeStrong(&local_f8,0);
    _objc_storeStrong(&local_c0,0);
    _objc_storeStrong(&local_c8,0);
    _objc_storeStrong(&local_90,0);
    _objc_storeStrong(&local_98,0);
    _objc_storeStrong(&local_80,0);
    _objc_storeStrong(&local_78,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

