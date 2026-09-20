// cacheDataItem:forUsername: @ 010b5914

/* Function Stack Size: 0x20 bytes */

void WCRefineMomentsMonitor::cacheDataItem_forUsername_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined *puVar7;
  undefined *local_228;
  undefined4 local_220;
  undefined4 local_21c;
  code *local_218;
  undefined *local_210;
  undefined *local_208;
  long local_200;
  undefined *local_1f8;
  undefined8 local_1f0;
  undefined *local_1e8;
  undefined8 *local_1e0;
  undefined8 *local_1d8;
  undefined8 *local_1d0;
  undefined *local_1c8;
  undefined *local_1c0;
  undefined *local_1b8;
  undefined8 local_1b0 [3];
  undefined *local_198;
  undefined4 local_190;
  undefined4 local_18c;
  code *local_188;
  undefined *local_180;
  long local_178;
  long local_170;
  undefined8 *local_168;
  undefined8 *local_160;
  undefined8 *local_158;
  undefined8 *local_150;
  undefined8 *local_148;
  undefined **local_140;
  undefined8 local_138;
  undefined8 *local_130;
  undefined4 local_128;
  undefined4 local_124;
  code *local_120;
  code *local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 *local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined1 local_f0;
  undefined8 local_e8;
  undefined8 *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  code *local_d0;
  code *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  code *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  code *local_68;
  undefined8 local_60;
  long local_58;
  undefined *local_50;
  undefined4 local_44;
  long local_40;
  long local_38;
  SEL local_30;
  undefined *local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = (undefined *)param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  if ((local_38 == 0) ||
     (lVar6 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
     lVar6 == 0)) {
    local_44 = 1;
  }
  else {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_50 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_50;
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((((ulong)puVar2 & 1) == 0) ||
       (puVar2 = local_50,
       (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_containsObject__0269cbb8,local_40),
       ((ulong)puVar2 & 1) == 0)) {
      lVar6 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_copy_0269d150);
      local_88 = 0;
      local_78 = 0x32000000;
      local_74 = 0x30;
      local_70 = FUN_010b6320;
      local_68 = FUN_010b6374;
      local_60 = 0;
      local_b8 = 0;
      local_a8 = 0x32000000;
      local_a4 = 0x30;
      local_a0 = FUN_010b6320;
      local_98 = FUN_010b6374;
      local_90 = 0;
      local_e8 = 0;
      local_d8 = 0x32000000;
      local_d4 = 0x30;
      local_d0 = FUN_010b6320;
      local_c8 = FUN_010b6374;
      uVar4 = *(undefined8 *)PTR____NSArray0___02578280;
      local_e0 = &local_e8;
      local_b0 = &local_b8;
      local_80 = &local_88;
      local_58 = lVar6;
      (*(code *)PTR__objc_retain_02578638)();
      lVar1 = local_38;
      local_108 = 0;
      local_f8 = 0x20000000;
      local_f4 = 0x20;
      local_f0 = 0;
      local_138 = 0;
      local_128 = 0x32000000;
      local_124 = 0x30;
      local_120 = FUN_010b6320;
      local_118 = FUN_010b6374;
      local_110 = 0;
      ppuVar5 = &local_198;
      local_198 = PTR___NSConcreteStackBlock_02578660;
      local_190 = 0xc2000000;
      local_18c = 0;
      local_188 = FUN_010b63a0;
      local_180 = &DAT_025851c8;
      local_168 = &local_88;
      local_130 = &local_138;
      local_100 = &local_108;
      local_c0 = uVar4;
      (*(code *)PTR__objc_retain_02578638)();
      lVar6 = local_58;
      local_178 = lVar1;
      local_160 = &local_108;
      local_158 = &local_e8;
      local_150 = &local_138;
      (*(code *)PTR__objc_retain_02578638)();
      local_170 = lVar6;
      local_148 = &local_b8;
      _objc_retainBlock();
      puVar3 = PTR__OBJC_CLASS___NSThread_026ce0a8;
      local_140 = ppuVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
      puVar2 = PTR___dispatch_main_q_02578680;
      if (((ulong)puVar3 & 1) == 0) {
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        _dispatch_sync();
        (*(code *)PTR__objc_release_02578630)(puVar2);
      }
      else {
        (*(code *)local_140[2])();
      }
      lVar6 = local_80[5];
      (*(code *)PTR__objc_msgSend_02578628)(lVar6,PTR_s_length_0269cca0);
      if ((lVar6 == 0) || (local_b0[5] == 0)) {
        local_44 = 1;
      }
      else {
        uVar4 = local_80[5];
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_copy_0269d150);
        puVar2 = local_28;
        local_1b0[0] = uVar4;
        (*(code *)PTR__objc_retain_02578638)();
        _objc_sync_enter(puVar2);
        puVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_memoryCache_026ae658);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_1b8 = puVar7;
        (*(code *)PTR__objc_release_02578630)(puVar3);
        if (local_1b8 == (undefined *)0x0) {
          puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = local_1b8;
          local_1b8 = puVar7;
          (*(code *)PTR__objc_release_02578630)(puVar3);
          puVar3 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_memoryCache_026ae658);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar3);
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1b8,PTR_s_setObject_forKeyedSubscript__0269d248,local_38,local_1b0[0]);
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setBrowseListSnapshot__026ae660,0);
        _objc_storeStrong(&local_1b8,0);
        _objc_sync_exit(puVar2);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cacheRootPath_026ae668);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_1c0 = puVar3;
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_mediaCopyQueue_026ae670);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = local_28;
        local_1c8 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ioQueue_026ae678);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = local_1c0;
        local_228 = PTR___NSConcreteStackBlock_02578660;
        local_220 = 0xc2000000;
        local_21c = 0;
        local_218 = FUN_010b858c;
        local_210 = &DAT_02585228;
        (*(code *)PTR__objc_retain_02578638)();
        lVar6 = local_58;
        local_208 = puVar2;
        (*(code *)PTR__objc_retain_02578638)();
        puVar2 = local_28;
        local_200 = lVar6;
        (*(code *)PTR__objc_retain_02578638)();
        uVar4 = local_1b0[0];
        local_1f8 = puVar2;
        (*(code *)PTR__objc_retain_02578638)();
        puVar2 = local_1c8;
        local_1f0 = uVar4;
        local_1e0 = &local_138;
        local_1d8 = &local_b8;
        local_1d0 = &local_e8;
        (*(code *)PTR__objc_retain_02578638)();
        local_1e8 = puVar2;
        _dispatch_async(puVar3,&local_228);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        if ((*(byte *)(local_100 + 3) & 1) != 0) {
          FUN_010b95bc(local_38,local_1c0,local_58,local_1b0[0],local_1c8,0);
        }
        _objc_storeStrong(&local_1e8);
        _objc_storeStrong(&local_1f0,0);
        _objc_storeStrong(&local_1f8,0);
        _objc_storeStrong(&local_200,0);
        _objc_storeStrong(&local_208,0);
        _objc_storeStrong(&local_1c8,0);
        _objc_storeStrong(&local_1c0,0);
        _objc_storeStrong(local_1b0,0);
        local_44 = 0;
      }
      _objc_storeStrong(&local_140);
      _objc_storeStrong(&local_170,0);
      _objc_storeStrong(&local_178,0);
      __Block_object_dispose(&local_138,8);
      _objc_storeStrong(&local_110,0);
      __Block_object_dispose(&local_108,8);
      __Block_object_dispose(&local_e8,8);
      _objc_storeStrong(&local_c0,0);
      __Block_object_dispose(&local_b8,8);
      _objc_storeStrong(&local_90,0);
      __Block_object_dispose(&local_88,8);
      _objc_storeStrong(&local_60,0);
      _objc_storeStrong(&local_58,0);
    }
    else {
      local_44 = 1;
    }
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

