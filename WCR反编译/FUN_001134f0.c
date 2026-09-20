// FUN_001134f0 @ 001134f0

void FUN_001134f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  bool bVar1;
  u_int32_t uVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  dispatch_time_t dVar9;
  cfstringStruct *local_3e8;
  undefined1 *local_3d0;
  cfstringStruct *local_3b8;
  cfstringStruct *local_3a0;
  cfstringStruct *local_388;
  cfstringStruct *local_370;
  cfstringStruct *local_358;
  cfstringStruct *local_340;
  double local_330;
  undefined1 *local_2b0;
  cfstringStruct *local_298;
  cfstringStruct *local_250;
  cfstringStruct *local_228;
  cfstringStruct *local_218;
  undefined *local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  code *local_1a0;
  undefined *local_198;
  cfstringStruct *local_190;
  cfstringStruct *local_188;
  cfstringStruct *local_180;
  cfstringStruct *local_178;
  cfstringStruct *local_170;
  cfstringStruct *local_168;
  undefined1 *local_160;
  cfstringStruct *local_158;
  undefined8 local_150;
  cfstringStruct *local_148;
  undefined1 *local_140;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  cfstringStruct *local_128;
  cfstringStruct *local_120;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  double local_108;
  double local_100;
  undefined4 local_f4;
  double local_f0;
  byte local_e1;
  long local_e0;
  undefined1 local_d2;
  bool local_d1;
  undefined1 *local_d0;
  undefined1 *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  byte local_99;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  undefined *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  undefined4 local_70;
  undefined8 local_60;
  undefined8 local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  undefined1 *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_38 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_38,param_2);
  local_40 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_40,param_3);
  local_48 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_48,param_4);
  local_50 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_50,param_5);
  pcVar3 = local_38;
  local_60 = param_6;
  local_58 = param_1;
  FUN_001236b8();
  if (((ulong)pcVar3 & 1) == 0) {
    local_70 = 1;
  }
  else {
    FUN_0010ef9c();
    _objc_retainAutoreleasedReturnValue();
    local_78 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_length_0269cca0);
    if (((pcVar3 == (cfstringStruct *)0x0) ||
        (pcVar3 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
        pcVar3 == (cfstringStruct *)0x0)) ||
       (pcVar3 = local_40,
       (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,local_78),
       ((ulong)pcVar3 & 1) == 0)) {
      pcVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
      if (pcVar3 == (cfstringStruct *)0x0) {
        if (local_48 == (cfstringStruct *)0x0) {
          local_228 = &cf___;
        }
        else {
          local_228 = local_48;
        }
        local_218 = local_228;
      }
      else {
        local_218 = local_40;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_80 = local_218;
      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_join______
                );
      _objc_retainAutoreleasedReturnValue();
      local_88 = puVar4;
      FUN_00119f10(0x4020000000000000);
      if (((ulong)puVar4 & 1) == 0) {
        local_70 = 1;
      }
      else {
        FUN_0011a5e8(local_38,&cf_join);
        local_99 = 0;
        pcVar3 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
        if (pcVar3 == (cfstringStruct *)0x0) {
          local_250 = local_40;
          FUN_00116ae8(0,local_40,local_38);
          _objc_retainAutoreleasedReturnValue();
          local_99 = 1;
          local_98 = local_250;
        }
        else {
          local_250 = local_48;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_90 = local_250;
        if ((local_99 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_98);
        }
        pcVar3 = local_38;
        FUN_0011a92c();
        _objc_retainAutoreleasedReturnValue();
        pcVar5 = local_50;
        local_a8 = pcVar3;
        FUN_0010ee50();
        _objc_retainAutoreleasedReturnValue();
        local_b0 = pcVar5;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_length_0269cca0);
        if (pcVar5 == (cfstringStruct *)0x0) {
          pcVar3 = local_38;
          FUN_001237d8(local_38,local_40);
          _objc_retainAutoreleasedReturnValue();
          pcVar5 = local_b0;
          local_b0 = pcVar3;
          (*(code *)PTR__objc_release_02578630)();
        }
        FUN_0011ab98(local_58);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = DAT_028c84c8;
        local_b8 = pcVar5;
        (*(code *)PTR__objc_msgSend_02578628)(DAT_028c84c8,PTR_s_copy_0269d150);
        local_298 = pcVar3;
        if (pcVar3 == (cfstringStruct *)0x0) {
          local_298 = &cf___;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_c0 = local_298;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        local_d1 = false;
        bVar1 = DAT_028c85b0 != 1;
        if (bVar1) {
          local_2b0 = *(undefined1 **)PTR____NSArray0___02578280;
        }
        else {
          local_2b0 = PTR_WCRefineHelper_026ce000;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_autoReplyNormalizedMultiItems__0269efa0,
                     DAT_028c84d0);
          _objc_retainAutoreleasedReturnValue();
          local_d0 = local_2b0;
        }
        local_d1 = !bVar1;
        (*(code *)PTR__objc_retain_02578638)();
        local_c8 = local_2b0;
        if ((local_d1 & 1U) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_d0);
        }
        if (((DAT_028c85b0 == 1) && ((DAT_028c85b8 & 1) != 0)) &&
           (puVar6 = local_c8, (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_count_0269cfe0),
           puVar7 = local_c8, (undefined1 *)((long)&MACH_HEADER.magic + 1) < puVar6)) {
          puVar6 = local_c8;
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_count_0269cfe0);
          uVar2 = _arc4random_uniform((u_int32_t)puVar6);
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar7,PTR_s_objectAtIndexedSubscript__0269cc78,uVar2);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          local_30 = puVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                     &local_30,1);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = local_c8;
          local_c8 = puVar4;
          (*(code *)PTR__objc_release_02578630)(puVar6);
          (*(code *)PTR__objc_release_02578630)(puVar7);
        }
        local_e1 = 0;
        if (DAT_028c85b0 == 1) {
          puVar7 = local_c8;
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_count_0269cfe0);
          local_d2 = puVar7 != (undefined1 *)0x0;
        }
        else {
          lVar8 = DAT_028c84c0;
          FUN_0010ee50();
          _objc_retainAutoreleasedReturnValue();
          local_e1 = 1;
          local_e0 = lVar8;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_d2 = true;
          if (lVar8 == 0) {
            pcVar3 = local_c0;
            (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0);
            local_d2 = pcVar3 != (cfstringStruct *)0x0;
          }
        }
        if ((local_e1 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_e0);
        }
        if ((bool)local_d2) {
          local_f4 = 1;
          local_100 = (double)DAT_028c85c0;
          local_330 = local_100;
          if (local_100 <= 1.0) {
            local_330 = 1.0;
          }
          local_108 = local_330;
          local_f0 = local_330;
          pcVar3 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_copy_0269d150);
          local_340 = pcVar3;
          if (pcVar3 == (cfstringStruct *)0x0) {
            local_340 = &cf___;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_110 = local_340;
          (*(code *)PTR__objc_release_02578630)(pcVar3);
          pcVar3 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_copy_0269d150);
          local_358 = pcVar3;
          if (pcVar3 == (cfstringStruct *)0x0) {
            local_358 = &cf___;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_118 = local_358;
          (*(code *)PTR__objc_release_02578630)(pcVar3);
          pcVar3 = local_90;
          (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_copy_0269d150);
          local_370 = pcVar3;
          if (pcVar3 == (cfstringStruct *)0x0) {
            local_370 = &cf___;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_120 = local_370;
          (*(code *)PTR__objc_release_02578630)(pcVar3);
          pcVar3 = local_a8;
          (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_copy_0269d150);
          local_388 = pcVar3;
          if (pcVar3 == (cfstringStruct *)0x0) {
            local_388 = &cf___;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_128 = local_388;
          (*(code *)PTR__objc_release_02578630)(pcVar3);
          pcVar3 = local_b8;
          (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_copy_0269d150);
          local_3a0 = pcVar3;
          if (pcVar3 == (cfstringStruct *)0x0) {
            local_3a0 = &cf___;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_130 = local_3a0;
          (*(code *)PTR__objc_release_02578630)(pcVar3);
          pcVar3 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_copy_0269d150);
          local_3b8 = pcVar3;
          if (pcVar3 == (cfstringStruct *)0x0) {
            local_3b8 = &cf___;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_138 = local_3b8;
          (*(code *)PTR__objc_release_02578630)(pcVar3);
          puVar7 = local_c8;
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_copy_0269d150);
          local_3d0 = puVar7;
          if (puVar7 == (undefined1 *)0x0) {
            local_3d0 = *(undefined1 **)PTR____NSArray0___02578280;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_140 = local_3d0;
          (*(code *)PTR__objc_release_02578630)(puVar7);
          pcVar3 = local_c0;
          (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_copy_0269d150);
          local_3e8 = pcVar3;
          if (pcVar3 == (cfstringStruct *)0x0) {
            local_3e8 = &cf___;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_148 = local_3e8;
          (*(code *)PTR__objc_release_02578630)(pcVar3);
          dVar9 = _dispatch_time(0,(long)(local_f0 * 1000000000.0));
          puVar4 = PTR___dispatch_main_q_02578680;
          _objc_retainAutoreleaseReturnValue();
          _objc_retainAutoreleasedReturnValue();
          pcVar5 = local_110;
          local_1b0 = PTR___NSConcreteStackBlock_02578660;
          local_1a8 = 0xc2000000;
          local_1a4 = 0;
          local_1a0 = FUN_00123cd0;
          local_198 = &DAT_0257a398;
          (*(code *)PTR__objc_retain_02578638)();
          pcVar3 = local_118;
          local_190 = pcVar5;
          (*(code *)PTR__objc_retain_02578638)();
          pcVar5 = local_120;
          local_188 = pcVar3;
          (*(code *)PTR__objc_retain_02578638)();
          pcVar3 = local_128;
          local_180 = pcVar5;
          (*(code *)PTR__objc_retain_02578638)();
          pcVar5 = local_130;
          local_178 = pcVar3;
          (*(code *)PTR__objc_retain_02578638)();
          pcVar3 = local_138;
          local_170 = pcVar5;
          (*(code *)PTR__objc_retain_02578638)();
          puVar7 = local_140;
          local_168 = pcVar3;
          local_150 = local_60;
          (*(code *)PTR__objc_retain_02578638)();
          pcVar3 = local_148;
          local_160 = puVar7;
          (*(code *)PTR__objc_retain_02578638)();
          local_158 = pcVar3;
          _dispatch_after(dVar9,puVar4,&local_1b0);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          _objc_storeStrong(&local_158);
          _objc_storeStrong(&local_160,0);
          _objc_storeStrong(&local_168,0);
          _objc_storeStrong(&local_170,0);
          _objc_storeStrong(&local_178,0);
          _objc_storeStrong(&local_180,0);
          _objc_storeStrong(&local_188,0);
          _objc_storeStrong(&local_190,0);
          _objc_storeStrong(&local_148,0);
          _objc_storeStrong(&local_140,0);
          _objc_storeStrong(&local_138,0);
          _objc_storeStrong(&local_130,0);
          _objc_storeStrong(&local_128,0);
          _objc_storeStrong(&local_120,0);
          _objc_storeStrong(&local_118,0);
          _objc_storeStrong(&local_110,0);
          local_70 = 0;
        }
        else {
          local_70 = 1;
        }
        _objc_storeStrong(&local_c8);
        _objc_storeStrong(&local_c0,0);
        _objc_storeStrong(&local_b8,0);
        _objc_storeStrong(&local_b0,0);
        _objc_storeStrong(&local_a8,0);
        _objc_storeStrong(&local_90,0);
      }
      _objc_storeStrong(&local_88);
      _objc_storeStrong(&local_80,0);
    }
    else {
      local_70 = 1;
    }
    _objc_storeStrong(&local_78,0);
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

