// FUN_002b420c @ 002b420c

void FUN_002b420c(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined *local_160;
  undefined *local_158;
  undefined *local_150;
  undefined4 local_148;
  undefined4 local_144;
  code *local_140;
  undefined *local_138;
  long local_130;
  undefined1 auStack_128 [48];
  undefined1 auStack_f8 [48];
  ulong local_c8;
  ulong local_c0;
  long local_b8;
  ulong local_b0;
  int local_a8;
  undefined1 *local_98;
  ulong local_90;
  ulong local_88;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  uVar1 = DAT_02323f18;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_88 = 0;
  _objc_storeStrong(&local_88,param_1);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_90 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_98 = puVar3;
  if (3 < (long)puVar3) {
    local_98 = (undefined1 *)((long)&MACH_HEADER.magic + 3);
  }
  if (local_98 == (undefined1 *)0x0) {
    local_a8 = 1;
  }
  else {
    uVar4 = local_90;
    FUN_002ae800();
    if ((uVar4 & 1) == 0) {
      uVar4 = local_88;
      FUN_002ae960(local_88,&cf_MMTabBarItemView);
      _objc_retainAutoreleasedReturnValue();
      local_b8 = 0;
      local_b0 = uVar4;
      for (local_c0 = 0; uVar4 = local_c0, uVar5 = local_b0,
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_count_0269cfe0), uVar4 < uVar5;
          local_c0 = local_c0 + 1) {
        uVar4 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b0,PTR_s_objectAtIndexedSubscript__0269cc78,local_c0);
        _objc_retainAutoreleasedReturnValue();
        local_c8 = uVar4;
        FUN_002b2754(uVar4,local_c0);
        lVar12 = uVar4 - local_90;
        if (lVar12 == 0) {
          _objc_storeStrong(0,&local_b8,local_c8);
          lVar12 = 2;
          local_a8 = 2;
        }
        else {
          local_a8 = 0;
        }
        _objc_storeStrong(lVar12,&local_c8,0);
        if (local_a8 != 0) break;
      }
      if (local_b8 == 0) {
        local_a8 = 1;
      }
      else {
        lVar12 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(lVar12);
        lVar12 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(lVar12);
        if (local_98 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
          _CGAffineTransformMakeTranslation(0,0x4010000000000000);
          lVar12 = local_b8;
          _memcpy(auStack_128,auStack_f8,0x30);
          (*(code *)PTR__objc_msgSend_02578628)(lVar12,PTR_s_setTransform__026caad0,auStack_128);
          lVar12 = local_b8;
          puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
          local_150 = PTR___NSConcreteStackBlock_02578660;
          local_148 = 0xc2000000;
          local_144 = 0;
          local_140 = FUN_002b59b4;
          local_138 = &DAT_02578c20;
          (*(code *)PTR__objc_retain_02578638)();
          local_130 = lVar12;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,0,DAT_02323f38,DAT_02323d00,puVar2,
                     PTR_s_animateWithDuration_delay_usingS_026ca4f8,6,&local_150,0);
          _objc_storeStrong(&local_130,0);
        }
        else if (local_98 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
          puVar2 = PTR__OBJC_CLASS___CAKeyframeAnimation_026ce4d8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___CAKeyframeAnimation_026ce4d8,
                     PTR_s_animationWithKeyPath__026ca510,&cf_transform_rotation_z);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
          local_158 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
          local_50 = puVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (DAT_02323f48,PTR__OBJC_CLASS___NSNumber_026ce038,
                     PTR_s_numberWithDouble__0269d6d0);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
          local_48 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (DAT_02323c90,PTR__OBJC_CLASS___NSNumber_026ce038,
                     PTR_s_numberWithDouble__0269d6d0);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = PTR__OBJC_CLASS___NSNumber_026ce038;
          local_40 = puVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (DAT_02323f40,PTR__OBJC_CLASS___NSNumber_026ce038,
                     PTR_s_numberWithDouble__0269d6d0);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = PTR__OBJC_CLASS___NSNumber_026ce038;
          local_38 = puVar8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
          _objc_retainAutoreleasedReturnValue();
          puVar10 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          local_30 = puVar9;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                     &local_50,5);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_setValues__026caae0);
          (*(code *)PTR__objc_release_02578630)(puVar10);
          (*(code *)PTR__objc_release_02578630)(puVar9);
          (*(code *)PTR__objc_release_02578630)(puVar8);
          (*(code *)PTR__objc_release_02578630)(puVar7);
          (*(code *)PTR__objc_release_02578630)(puVar2);
          (*(code *)PTR__objc_release_02578630)(puVar6);
          (*(code *)PTR__objc_msgSend_02578628)(uVar1,local_158,PTR_s_setDuration__026ca920);
          lVar12 = local_b8;
          (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(lVar12);
          _objc_storeStrong(&local_158,0);
        }
        else if (local_98 == (undefined1 *)((long)&MACH_HEADER.magic + 3)) {
          puVar2 = PTR__OBJC_CLASS___CAKeyframeAnimation_026ce4d8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___CAKeyframeAnimation_026ce4d8,
                     PTR_s_animationWithKeyPath__026ca510,&cf_transform_translation_x);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
          local_160 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
          local_80 = puVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (0xc00c000000000000,PTR__OBJC_CLASS___NSNumber_026ce038,
                     PTR_s_numberWithDouble__0269d6d0);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
          local_78 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (0x400c000000000000,PTR__OBJC_CLASS___NSNumber_026ce038,
                     PTR_s_numberWithDouble__0269d6d0);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = PTR__OBJC_CLASS___NSNumber_026ce038;
          local_70 = puVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (DAT_02323f58,PTR__OBJC_CLASS___NSNumber_026ce038,
                     PTR_s_numberWithDouble__0269d6d0);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = PTR__OBJC_CLASS___NSNumber_026ce038;
          local_68 = puVar8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (DAT_02323f50,PTR__OBJC_CLASS___NSNumber_026ce038,
                     PTR_s_numberWithDouble__0269d6d0);
          _objc_retainAutoreleasedReturnValue();
          puVar10 = PTR__OBJC_CLASS___NSNumber_026ce038;
          local_60 = puVar9;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
          _objc_retainAutoreleasedReturnValue();
          puVar11 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          local_58 = puVar10;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                     &local_80,6);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_setValues__026caae0);
          (*(code *)PTR__objc_release_02578630)(puVar11);
          (*(code *)PTR__objc_release_02578630)(puVar10);
          (*(code *)PTR__objc_release_02578630)(puVar9);
          (*(code *)PTR__objc_release_02578630)(puVar8);
          (*(code *)PTR__objc_release_02578630)(puVar7);
          (*(code *)PTR__objc_release_02578630)(puVar2);
          (*(code *)PTR__objc_release_02578630)(puVar6);
          (*(code *)PTR__objc_msgSend_02578628)(uVar1,local_160,PTR_s_setDuration__026ca920);
          lVar12 = local_b8;
          (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(lVar12);
          _objc_storeStrong(&local_160,0);
        }
        local_a8 = 0;
      }
      _objc_storeStrong(&local_b8);
      _objc_storeStrong(&local_b0,0);
    }
    else {
      local_a8 = 1;
    }
  }
  _objc_storeStrong(&local_88,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

