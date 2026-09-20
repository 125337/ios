// FUN_005c7c80 @ 005c7c80

void FUN_005c7c80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b4;
  code *local_1b0;
  undefined *local_1a8;
  long local_1a0;
  undefined *local_198;
  undefined4 local_190;
  undefined4 local_18c;
  code *local_188;
  undefined *local_180;
  undefined *local_178;
  undefined *local_170;
  undefined *local_168;
  undefined4 local_160;
  undefined4 local_15c;
  code *local_158;
  undefined *local_150;
  long local_148;
  undefined **local_140;
  undefined *local_138;
  undefined4 local_130;
  undefined4 local_12c;
  code *local_128;
  undefined *local_120;
  long local_118;
  undefined **local_110;
  undefined *local_108;
  long local_100;
  undefined *local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  code *local_e8;
  undefined *local_e0;
  long local_d8;
  undefined **local_d0;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  code *local_b8;
  undefined *local_b0;
  long local_a8;
  undefined **local_a0;
  undefined *local_98;
  long local_90;
  long local_88;
  byte local_79;
  long local_78;
  uint local_70;
  long local_60;
  long local_58;
  ulong local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_50 = 0;
  _objc_storeStrong(&local_50,param_1);
  local_58 = 0;
  _objc_storeStrong(&local_58,param_2);
  local_60 = 0;
  _objc_storeStrong(&local_60,param_3);
  if (((local_50 == 0) || (local_58 == 0)) || (local_60 == 0)) {
    if (local_60 != 0) {
      (**(code **)(local_60 + 0x10))(local_60,0);
    }
    local_70 = 1;
    goto LAB_005c8718;
  }
  lVar3 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_valueForKey__0269d128,&cf_type);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(lVar3);
  lVar3 = local_58;
  local_78 = lVar4;
  FUN_005a71f0();
  local_79 = (byte)lVar3;
  lVar3 = local_58;
  FUN_005a7354();
  _objc_retainAutoreleasedReturnValue();
  local_88 = lVar3;
  if ((local_79 & 1) == 0) {
LAB_005c8140:
    lVar3 = local_58;
    if ((local_78 == 2) || (local_78 == 5)) {
      local_48 = &cf_getFormatVideoPath;
      local_40 = &cf_pathForSightData;
      local_38 = &cf_pathForData;
      local_30 = &cf_pathForExistData;
      puVar8 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48
                 ,4);
      _objc_retainAutoreleasedReturnValue();
      FUN_00599978();
      _objc_retainAutoreleasedReturnValue();
      local_100 = lVar3;
      (*(code *)PTR__objc_release_02578630)(puVar8);
      local_108 = PTR_s_saveVideoToAlbumWithPath_isShowT_026a5ac8;
      lVar3 = local_100;
      (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_length_0269cca0);
      if ((lVar3 == 0) ||
         (uVar5 = local_50,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_50,PTR_s_respondsToSelector__026ca818,local_108), lVar3 = local_60,
         puVar8 = PTR___NSConcreteStackBlock_02578660, (uVar5 & 1) == 0)) {
        (**(code **)(local_60 + 0x10))(local_60,0);
        local_70 = 1;
      }
      else {
        ppuVar6 = &local_138;
        local_138 = PTR___NSConcreteStackBlock_02578660;
        local_130 = 0xc2000000;
        local_12c = 0;
        local_128 = FUN_005c8934;
        local_120 = &DAT_02579910;
        (*(code *)PTR__objc_retain_02578638)();
        local_118 = lVar3;
        _objc_retainBlock();
        lVar3 = local_60;
        ppuVar7 = &local_168;
        local_168 = puVar8;
        local_160 = 0xc2000000;
        local_15c = 0;
        local_158 = FUN_005c8970;
        local_150 = &DAT_0257e2b8;
        local_110 = ppuVar6;
        (*(code *)PTR__objc_retain_02578638)();
        local_148 = lVar3;
        _objc_retainBlock();
        uVar5 = local_50;
        lVar3 = local_100;
        puVar8 = local_108;
        ppuVar6 = local_110;
        local_140 = ppuVar7;
        _objc_retainBlock();
        ppuVar7 = local_140;
        _objc_retainBlock();
        (*(code *)PTR__objc_msgSend_02578628)(uVar5,puVar8,lVar3,0,ppuVar6);
        (*(code *)PTR__objc_release_02578630)(ppuVar7);
        (*(code *)PTR__objc_release_02578630)(ppuVar6);
        local_70 = 1;
        _objc_storeStrong(&local_140);
        _objc_storeStrong(&local_148,0);
        _objc_storeStrong(&local_110,0);
        _objc_storeStrong(&local_118,0);
      }
      _objc_storeStrong(&local_100,0);
    }
    else {
      lVar3 = local_88;
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0);
      if (lVar3 == 0) {
        (**(code **)(local_60 + 0x10))(local_60,0);
        local_70 = 1;
      }
      else {
        puVar8 = PTR__OBJC_CLASS___NSURL_026ce328;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_88);
        _objc_retainAutoreleasedReturnValue();
        local_170 = puVar8;
        if (puVar8 != (undefined *)0x0) {
          puVar9 = PTR__OBJC_CLASS___PHPhotoLibrary_026ce4a0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___PHPhotoLibrary_026ce4a0,PTR_s_sharedPhotoLibrary_026a1730);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = local_170;
          puVar1 = PTR___NSConcreteStackBlock_02578660;
          local_198 = PTR___NSConcreteStackBlock_02578660;
          local_190 = 0xc2000000;
          local_18c = 0;
          local_188 = FUN_005c89f0;
          local_180 = &DAT_02578c20;
          (*(code *)PTR__objc_retain_02578638)();
          lVar3 = local_60;
          local_178 = puVar2;
          local_1c0 = puVar1;
          local_1b8 = 0xc2000000;
          local_1b4 = 0;
          local_1b0 = FUN_005c8a40;
          local_1a8 = &DAT_0257b788;
          (*(code *)PTR__objc_retain_02578638)();
          local_1a0 = lVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar9,PTR_s_performChanges_completionHandler_026a1740,&local_198,&local_1c0);
          (*(code *)PTR__objc_release_02578630)(puVar9);
          _objc_storeStrong(&local_1a0);
          _objc_storeStrong(&local_178,0);
        }
        else {
          (**(code **)(local_60 + 0x10))(local_60,0);
        }
        local_70 = (uint)(puVar8 == (undefined *)0x0);
        _objc_storeStrong(&local_170,0);
      }
    }
  }
  else {
    lVar3 = local_58;
    FUN_005c75c4();
    _objc_retainAutoreleasedReturnValue();
    local_98 = PTR_s_saveLivePhotoToAlbumWithImagePat_026a5ac0;
    lVar4 = local_88;
    local_90 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0);
    if (((lVar4 == 0) ||
        (lVar3 = local_90, (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0),
        lVar3 == 0)) ||
       (uVar5 = local_50,
       (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_respondsToSelector__026ca818,local_98),
       lVar3 = local_60, puVar8 = PTR___NSConcreteStackBlock_02578660, (uVar5 & 1) == 0)) {
      local_70 = 0;
    }
    else {
      ppuVar6 = &local_c8;
      local_c8 = PTR___NSConcreteStackBlock_02578660;
      local_c0 = 0xc2000000;
      local_bc = 0;
      local_b8 = FUN_005c8878;
      local_b0 = &DAT_02579910;
      (*(code *)PTR__objc_retain_02578638)();
      local_a8 = lVar3;
      _objc_retainBlock();
      lVar3 = local_60;
      ppuVar7 = &local_f8;
      local_f8 = puVar8;
      local_f0 = 0xc2000000;
      local_ec = 0;
      local_e8 = FUN_005c88b4;
      local_e0 = &DAT_0257e2b8;
      local_a0 = ppuVar6;
      (*(code *)PTR__objc_retain_02578638)();
      local_d8 = lVar3;
      _objc_retainBlock();
      uVar5 = local_50;
      lVar4 = local_88;
      lVar3 = local_90;
      puVar8 = local_98;
      ppuVar6 = local_a0;
      local_d0 = ppuVar7;
      _objc_retainBlock();
      ppuVar7 = local_d0;
      _objc_retainBlock();
      (*(code *)PTR__objc_msgSend_02578628)(uVar5,puVar8,lVar4,lVar3,0,0,ppuVar6);
      (*(code *)PTR__objc_release_02578630)(ppuVar7);
      (*(code *)PTR__objc_release_02578630)(ppuVar6);
      local_70 = 1;
      _objc_storeStrong(&local_d0);
      _objc_storeStrong(&local_d8,0);
      _objc_storeStrong(&local_a0,0);
      _objc_storeStrong(&local_a8,0);
    }
    _objc_storeStrong(&local_90,0);
    if (local_70 == 0) goto LAB_005c8140;
  }
  _objc_storeStrong(&local_88,0);
LAB_005c8718:
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

