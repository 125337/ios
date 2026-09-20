// FUN_001a31e8 @ 001a31e8

void FUN_001a31e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_190;
  undefined *local_188;
  undefined4 local_180;
  undefined4 local_17c;
  code *local_178;
  undefined *local_170;
  undefined *local_168;
  undefined1 auStack_160 [8];
  undefined *local_158;
  undefined *local_150;
  undefined4 local_148;
  undefined4 local_144;
  code *local_140;
  undefined *local_138;
  undefined *local_130;
  undefined1 auStack_128 [8];
  undefined *local_120;
  undefined *local_118;
  undefined4 local_110;
  undefined4 local_10c;
  code *local_108;
  undefined *local_100;
  undefined *local_f8;
  undefined1 auStack_f0 [8];
  undefined *local_e8;
  undefined *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  code *local_d0;
  undefined *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined1 auStack_b0 [8];
  undefined *local_a8;
  undefined *local_a0;
  undefined1 auStack_98 [8];
  undefined *local_90;
  undefined *local_88;
  undefined4 local_80;
  undefined *local_70;
  undefined *local_68;
  undefined8 local_60;
  long local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_58 = 0;
  _objc_storeStrong(&local_58,param_1);
  local_60 = 0;
  _objc_storeStrong(&local_60,param_2);
  local_68 = (undefined *)0x0;
  _objc_storeStrong(&local_68,param_3);
  puVar2 = local_68;
  FUN_00184b18();
  _objc_retainAutoreleasedReturnValue();
  local_70 = puVar2;
  if ((local_58 == 0) ||
     ((*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_length_0269cca0),
     puVar2 == (undefined *)0x0)) {
    local_80 = 1;
  }
  else {
    puVar2 = local_70;
    FUN_001881a0();
    _objc_retainAutoreleasedReturnValue();
    local_88 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_objectForKeyedSubscript__0269d098,&cf_text);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    FUN_00184b18();
    _objc_retainAutoreleasedReturnValue();
    local_90 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_initWeak(auStack_98,local_58);
    puVar2 = local_90;
    (*(code *)PTR__objc_retain_02578638)();
    local_a0 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_length_0269cca0);
    if (puVar2 == (undefined *)0x0) {
      puVar3 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      FUN_00184b18();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_a0;
      local_a0 = puVar5;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    puVar2 = local_a0;
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_length_0269cca0);
    if (puVar2 == (undefined *)0x0) {
      FUN_001998fc();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_a0;
      local_a0 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    puVar3 = local_a0;
    puVar2 = PTR_WCRefineContactsPackSheetAction_026ce3a8;
    local_e0 = PTR___NSConcreteStackBlock_02578660;
    local_d8 = 0xc2000000;
    local_d4 = 0;
    local_d0 = FUN_001a3dec;
    local_c8 = &DAT_0257a630;
    (*(code *)PTR__objc_retain_02578638)();
    puVar4 = local_70;
    local_c0 = puVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_b8 = puVar4;
    _objc_copyWeak(auStack_b0,auStack_98);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_actionWithTitle_imageName_handle_0269fd70,&cf_O9eTy,&cf_pencil,&local_e0
              );
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_WCRefineContactsPackSheetAction_026ce3a8;
    local_118 = PTR___NSConcreteStackBlock_02578660;
    local_110 = 0xc2000000;
    local_10c = 0;
    local_108 = FUN_001a4864;
    local_100 = &DAT_025797f0;
    local_a8 = puVar2;
    _objc_copyWeak(auStack_f0,auStack_98);
    puVar2 = local_70;
    (*(code *)PTR__objc_retain_02578638)();
    local_f8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_actionWithTitle_imageName_handle_0269fd70,&cf_e4YP,&cf_sun_max,
               &local_118);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_WCRefineContactsPackSheetAction_026ce3a8;
    local_150 = PTR___NSConcreteStackBlock_02578660;
    local_148 = 0xc2000000;
    local_144 = 0;
    local_140 = FUN_001a4c9c;
    local_138 = &DAT_025797f0;
    local_e8 = puVar3;
    _objc_copyWeak(auStack_128,auStack_98);
    puVar3 = local_70;
    (*(code *)PTR__objc_retain_02578638)();
    local_130 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_actionWithTitle_imageName_handle_0269fd70,&cf_Y4YP,&cf_moon,&local_150);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = local_70;
    puVar3 = PTR_WCRefineContactsPackSheetAction_026ce3a8;
    local_188 = PTR___NSConcreteStackBlock_02578660;
    local_180 = 0xc2000000;
    local_17c = 0;
    local_178 = FUN_001a4dfc;
    local_170 = &DAT_025797f0;
    local_120 = puVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_168 = puVar4;
    _objc_copyWeak(auStack_160,auStack_98);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_actionWithTitle_imageName_handle_0269fd70,&cf_b_Y_,
               &cf_arrow_uturn_backward,&local_188);
    _objc_retainAutoreleasedReturnValue();
    local_158 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setDestructive__0269fd78,1);
    puVar2 = PTR_WCRefineContactsPackSheetAction_026ce3a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineContactsPackSheetAction_026ce3a8,
               PTR_s_actionWithTitle_imageName_handle_0269fd70,&cf_O9e4YP,&cf_person_crop_circle,0);
    _objc_retainAutoreleasedReturnValue();
    local_40 = local_e8;
    local_38 = local_120;
    local_30 = local_158;
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_190 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_40,3
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_setChildren__0269fd80);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    lVar1 = local_58;
    puVar2 = local_70;
    local_50 = local_a8;
    local_48 = local_190;
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_50,2
              );
    _objc_retainAutoreleasedReturnValue();
    FUN_001a5168(lVar1,puVar2,puVar3,local_60);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(&local_190);
    _objc_storeStrong(&local_158,0);
    _objc_destroyWeak(auStack_160);
    _objc_storeStrong(&local_168,0);
    _objc_storeStrong(&local_120,0);
    _objc_storeStrong(&local_130,0);
    _objc_destroyWeak(auStack_128);
    _objc_storeStrong(&local_e8,0);
    _objc_storeStrong(&local_f8,0);
    _objc_destroyWeak(auStack_f0);
    _objc_storeStrong(&local_a8,0);
    _objc_destroyWeak(auStack_b0);
    _objc_storeStrong(&local_b8,0);
    _objc_storeStrong(&local_c0,0);
    _objc_storeStrong(&local_a0,0);
    _objc_destroyWeak(auStack_98);
    _objc_storeStrong(&local_90,0);
    _objc_storeStrong(&local_88,0);
    local_80 = 0;
  }
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

