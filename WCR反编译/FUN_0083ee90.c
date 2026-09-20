// FUN_0083ee90 @ 0083ee90

undefined1  [16] FUN_0083ee90(double param_1,double param_2,undefined8 param_3)

{
  bool bVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  double dVar11;
  double dVar12;
  undefined *local_2c0;
  undefined *local_188;
  undefined1 auStack_170 [48];
  double local_140;
  double dStack_138;
  double local_130;
  double dStack_128;
  undefined1 auStack_120 [48];
  double local_f0;
  double dStack_e8;
  undefined *local_e0;
  undefined *local_d8;
  ulong local_d0;
  ulong local_c8;
  ulong local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined *local_a0;
  int local_98;
  long local_88;
  double local_80;
  double dStack_78;
  undefined8 local_68;
  long *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_88 = 0;
  _objc_storeStrong(&local_88,param_3);
  lVar4 = local_88;
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0);
  if (lVar4 == 0) {
    dStack_78 = *(double *)(PTR__CGSizeZero_025782f8 + 8);
    local_80 = *(double *)PTR__CGSizeZero_025782f8;
    local_98 = 1;
    goto LAB_0083fac8;
  }
  puVar5 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  local_a0 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_fileExistsAtPath__026ca630,local_88);
  if (((ulong)puVar5 & 1) == 0) {
    dStack_78 = *(double *)(PTR__CGSizeZero_025782f8 + 8);
    local_80 = *(double *)PTR__CGSizeZero_025782f8;
    local_98 = 1;
  }
  else {
    puVar5 = local_a0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_a0,PTR_s_attributesOfItemAtPath_error__0269db08,local_88,0);
    _objc_retainAutoreleasedReturnValue();
    local_a8 = puVar5;
    if (puVar5 == (undefined *)0x0) {
      dStack_78 = *(double *)(PTR__CGSizeZero_025782f8 + 8);
      local_80 = *(double *)PTR__CGSizeZero_025782f8;
      local_98 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar5,PTR_s_objectForKeyedSubscript__0269d098,
                 *(undefined8 *)PTR__NSFileModificationDate_02578020);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = local_a8;
      local_b0 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_a8,PTR_s_objectForKeyedSubscript__0269d098,
                 *(undefined8 *)PTR__NSFileSize_02578028);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar6);
      local_60 = &DAT_028cd2d0;
      local_68 = 0;
      local_b8 = puVar5;
      _objc_storeStrong(&local_68,&PTR___NSConcreteGlobalBlock_025808a0);
      if (*local_60 + 1 != 0) {
        _dispatch_once(*local_60 + 1,local_60,local_68);
      }
      _objc_storeStrong(&local_68,0);
      uVar3 = DAT_028cd0d8;
      (*(code *)PTR__objc_retain_02578638)();
      _objc_sync_enter(uVar3);
      uVar10 = DAT_028cd0d8;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_028cd0d8,PTR_s_objectForKeyedSubscript__0269d098,local_88);
      _objc_retainAutoreleasedReturnValue();
      dVar11 = param_1;
      local_c0 = uVar10;
      if (uVar10 == 0) {
LAB_0083f3e4:
        param_1 = param_2;
        local_98 = 0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar10,PTR_s_objectForKeyedSubscript__0269d098,&cf_mtime);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = local_c0;
        local_c8 = uVar10;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c0,PTR_s_objectForKeyedSubscript__0269d098,&cf_fsize);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar7);
        uVar10 = 0;
        dVar11 = param_1;
        local_d0 = uVar8;
        if ((local_c8 == 0) || (uVar10 = 0, local_b0 == (undefined *)0x0)) {
LAB_0083f3b0:
          param_1 = param_2;
          local_98 = 0;
        }
        else {
          uVar7 = local_c8;
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_isEqualToDate__026a8b48,local_b0);
          uVar10 = uVar7 & 0xffffffff;
          dVar11 = param_1;
          if (((uVar7 & 1) == 0) || (uVar10 = (long)local_b8 - local_d0, uVar10 != 0))
          goto LAB_0083f3b0;
          uVar10 = local_c0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_c0,PTR_s_objectForKeyedSubscript__0269d098,&cf_size);
          _objc_retainAutoreleasedReturnValue();
          dVar11 = param_2;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_80 = param_1;
          dStack_78 = dVar11;
          (*(code *)PTR__objc_release_02578630)(uVar10);
          uVar10 = 1;
          local_98 = 1;
        }
        _objc_storeStrong(uVar10,&local_c8,0);
        param_2 = param_1;
        if (local_98 == 0) goto LAB_0083f3e4;
      }
      _objc_storeStrong(&local_c0,0);
      if (local_98 == 0) {
        local_98 = 0;
      }
      _objc_sync_exit(uVar3);
      (*(code *)PTR__objc_release_02578630)(uVar3);
      puVar5 = PTR__OBJC_CLASS___AVURLAsset_026ce330;
      if (local_98 == 0) {
        puVar6 = PTR__OBJC_CLASS___NSURL_026ce328;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_88);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_assetWithURL__0269f560);
        _objc_retainAutoreleasedReturnValue();
        local_d8 = puVar5;
        (*(code *)PTR__objc_release_02578630)(puVar6);
        puVar5 = local_d8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_d8,PTR_s_tracksWithMediaType__0269f568,
                   *(undefined8 *)PTR__AVMediaTypeVideo_02578588);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_e0 = puVar6;
        (*(code *)PTR__objc_release_02578630)(puVar5);
        if (local_e0 == (undefined *)0x0) {
          dStack_78 = *(double *)(PTR__CGSizeZero_025782f8 + 8);
          local_80 = *(double *)PTR__CGSizeZero_025782f8;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_naturalSize_0269f570);
          local_f0 = dVar11;
          dStack_e8 = param_1;
          if (local_e0 == (undefined *)0x0) {
            _memset(auStack_120,0,0x30);
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)
                      (auStack_120,local_e0,PTR_s_preferredTransform_0269f578);
          }
          dStack_138 = dStack_e8;
          local_140 = local_f0;
          _memcpy(auStack_170,auStack_120,0x30);
          dVar11 = local_140;
          dVar12 = dStack_138;
          FUN_0083fb98(auStack_170);
          local_130 = ABS(dVar11);
          dStack_128 = ABS(dVar12);
          dStack_78 = *(double *)(PTR__CGSizeZero_025782f8 + 8);
          local_80 = *(double *)PTR__CGSizeZero_025782f8;
          if ((local_130 <= 0.0) || (dVar11 = local_130, dVar12 = dStack_128, dStack_128 <= 0.0)) {
            dVar11 = ABS(local_f0);
            dVar12 = ABS(dStack_e8);
            FUN_0083b734();
          }
          dStack_78 = dVar12;
          local_80 = dVar11;
          uVar3 = DAT_028cd0d8;
          (*(code *)PTR__objc_retain_02578638)();
          _objc_sync_enter(uVar3);
          local_58 = &cf_mtime;
          bVar1 = local_b0 == (undefined *)0x0;
          if (bVar1) {
            local_2c0 = PTR__OBJC_CLASS___NSDate_026cdf88;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_distantPast_026a8e18);
            _objc_retainAutoreleasedReturnValue();
            local_188 = local_2c0;
          }
          else {
            local_2c0 = local_b0;
          }
          local_40 = local_2c0;
          local_50 = &cf_fsize;
          puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedLongLong__0269d7f8,
                     local_b8);
          _objc_retainAutoreleasedReturnValue();
          local_48 = &cf_size;
          puVar6 = PTR__OBJC_CLASS___NSValue_026ce1f0;
          local_38 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_80,dStack_78,PTR__OBJC_CLASS___NSValue_026ce1f0,
                     PTR_s_valueWithCGSize__0269ec00);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_30 = puVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,
                     PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_40,&local_58,3);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (DAT_028cd0d8,PTR_s_setObject_forKeyedSubscript__0269d248,puVar9,local_88);
          (*(code *)PTR__objc_release_02578630)(puVar9);
          (*(code *)PTR__objc_release_02578630)(puVar6);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          if (bVar1) {
            (*(code *)PTR__objc_release_02578630)(local_188);
          }
          _objc_sync_exit(uVar3);
          (*(code *)PTR__objc_release_02578630)(uVar3);
        }
        local_98 = 1;
        _objc_storeStrong(&local_e0);
        _objc_storeStrong(&local_d8,0);
      }
      _objc_storeStrong(&local_b0,0);
    }
    _objc_storeStrong(&local_a8,0);
  }
  _objc_storeStrong(&local_a0,0);
LAB_0083fac8:
  _objc_storeStrong(&local_88,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  auVar2._8_8_ = dStack_78;
  auVar2._0_8_ = local_80;
  return auVar2;
}

