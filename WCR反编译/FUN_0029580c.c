// FUN_0029580c @ 0029580c

void FUN_0029580c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long local_1b8;
  uint local_184;
  undefined *local_158;
  undefined4 local_150;
  undefined4 local_14c;
  code *local_148;
  undefined *local_140;
  long local_138;
  long local_130;
  undefined1 local_124;
  undefined1 local_123;
  undefined1 local_122;
  undefined1 local_121;
  undefined *local_120;
  undefined4 local_118;
  undefined4 local_114;
  code *local_110;
  undefined *local_108;
  long local_100;
  long local_f8;
  undefined *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  code *local_e0;
  undefined *local_d8;
  long local_d0;
  long local_c8;
  undefined *local_c0;
  long local_b8;
  byte local_a9;
  undefined *local_a8;
  long local_90;
  long local_88;
  long local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  undefined **local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined **local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_80 = 0;
  _objc_storeStrong(&local_80,param_1);
  local_88 = 0;
  _objc_storeStrong(&local_88,param_2);
  lVar1 = local_88;
  (*(code *)PTR__objc_retain_02578638)();
  local_90 = lVar1;
  local_a9 = 0;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  local_184 = 1;
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_a9 = 1;
    local_a8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_184 = (uint)puVar2 ^ 1;
  }
  if ((local_a9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_a8);
  }
  if ((local_184 & 1) == 0) {
    lVar1 = local_90;
    FUN_0028174c(local_90,&cf_jpg);
    _objc_retainAutoreleasedReturnValue();
    local_1b8 = lVar1;
    if (lVar1 == 0) {
      local_1b8 = local_90;
    }
    _objc_storeStrong(&local_90,local_1b8);
    (*(code *)PTR__objc_release_02578630)(lVar1);
  }
  else {
    lVar3 = local_80;
    FUN_00296110();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_90;
    local_90 = lVar3;
    (*(code *)PTR__objc_release_02578630)(lVar1);
  }
  lVar1 = local_90;
  (*(code *)PTR__objc_retain_02578638)();
  lVar3 = local_80;
  local_b8 = lVar1;
  local_58 = &cf_title;
  local_48 = &cf_OX_0RvQ;
  local_50 = &cf_handler;
  ppuVar4 = &local_f0;
  local_f0 = PTR___NSConcreteStackBlock_02578660;
  local_e8 = 0xc2000000;
  local_e4 = 0;
  local_e0 = FUN_002964c0;
  local_d8 = &DAT_02578e60;
  (*(code *)PTR__objc_retain_02578638)();
  lVar1 = local_b8;
  local_d0 = lVar3;
  local_124 = 1;
  (*(code *)PTR__objc_retain_02578638)();
  local_c8 = lVar1;
  local_123 = 1;
  _objc_retainBlock();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_40 = ppuVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_48,&local_58,2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = local_b8;
  local_78 = &cf_title;
  local_68 = &cf_lS__YS;
  local_70 = &cf_handler;
  ppuVar5 = &local_120;
  local_120 = PTR___NSConcreteStackBlock_02578660;
  local_118 = 0xc2000000;
  local_114 = 0;
  local_110 = FUN_00296948;
  local_108 = &DAT_02578e60;
  local_38 = puVar2;
  (*(code *)PTR__objc_retain_02578638)();
  lVar3 = local_80;
  local_100 = lVar1;
  local_122 = 1;
  (*(code *)PTR__objc_retain_02578638)();
  local_f8 = lVar3;
  local_121 = 1;
  _objc_retainBlock();
  puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_60 = ppuVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_68,&local_78,2);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_30 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38,2);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_121 = 0;
  local_122 = 0;
  local_123 = 0;
  local_124 = 0;
  local_c0 = puVar8;
  (*(code *)PTR__objc_release_02578630)(puVar7);
  (*(code *)PTR__objc_release_02578630)(puVar6);
  (*(code *)PTR__objc_release_02578630)(ppuVar5);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(ppuVar4);
  lVar1 = local_b8;
  puVar2 = local_c0;
  local_158 = PTR___NSConcreteStackBlock_02578660;
  local_150 = 0xc2000000;
  local_14c = 0;
  local_148 = FUN_00296b6c;
  local_140 = &DAT_0257b758;
  (*(code *)PTR__objc_retain_02578638)();
  lVar3 = local_80;
  local_138 = lVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_130 = lVar3;
  FUN_0028fd68(puVar2,&local_158);
  FUN_002906f8(&cf__b_cS,local_c0);
  _objc_storeStrong(&local_130);
  _objc_storeStrong(&local_138,0);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_f8,0);
  _objc_storeStrong(&local_100,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_90,0);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_80,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

