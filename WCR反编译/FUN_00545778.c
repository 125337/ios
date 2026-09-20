// FUN_00545778 @ 00545778

void FUN_00545778(undefined8 param_1,undefined *param_2,undefined *param_3,byte param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_378;
  undefined *local_358;
  undefined *local_340;
  undefined *local_320;
  undefined *local_308;
  undefined *local_2f0;
  undefined *local_298;
  undefined *local_1b0;
  undefined *local_1a8;
  undefined *local_1a0;
  undefined *local_198;
  undefined *local_188;
  undefined *local_178;
  undefined *local_148;
  undefined *local_140;
  undefined *local_138;
  undefined *local_130;
  byte local_121;
  undefined *local_120;
  undefined *local_118;
  undefined *local_110;
  undefined *local_108;
  undefined *local_100;
  undefined *local_f8;
  undefined *local_f0;
  undefined *local_e8;
  undefined *local_e0;
  byte local_d1;
  undefined *local_d0;
  undefined *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined4 local_ac;
  undefined *local_a8;
  undefined4 local_9c;
  undefined *local_98;
  undefined *local_90;
  undefined *local_88;
  undefined4 local_7c;
  undefined *local_78;
  undefined4 local_6c;
  undefined *local_68;
  undefined *local_60;
  undefined *local_48;
  undefined4 local_40;
  byte local_39;
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  
  local_28 = (undefined *)0x0;
  _objc_storeStrong(&local_28,param_1);
  local_39 = param_4;
  local_38 = param_3;
  local_30 = param_2;
  if ((local_28 == (undefined *)0x0) || ((DAT_028cb368 & 1) != 0)) {
    local_40 = 1;
  }
  else {
    local_178 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_48 = local_178;
    if ((long)local_30 < 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_momentsFakeLikeCount_026a4e70);
    }
    else {
      local_178 = local_30;
    }
    local_60 = local_178;
    if ((long)local_38 < 0) {
      local_188 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_momentsFakeCommentCount_026a4e78);
    }
    else {
      local_188 = local_38;
    }
    local_6c = 0;
    local_7c = 10000;
    local_88 = local_60;
    if ((long)local_60 < 0x2711) {
      local_198 = local_60;
    }
    else {
      local_198 = &DAT_00002710;
    }
    local_90 = local_198;
    local_78 = local_198;
    if ((long)local_198 < 1) {
      local_1a0 = (undefined *)0x0;
    }
    else {
      local_1a0 = local_198;
    }
    local_98 = local_1a0;
    local_60 = local_1a0;
    local_9c = 0;
    local_ac = 300;
    local_b8 = local_188;
    if ((long)local_188 < 0x12d) {
      local_1a8 = local_188;
    }
    else {
      local_1a8 = (undefined *)((long)&section_00000108.addr + 4);
    }
    local_c0 = local_1a8;
    local_a8 = local_1a8;
    if ((long)local_1a8 < 1) {
      local_1b0 = (undefined *)0x0;
    }
    else {
      local_1b0 = local_1a8;
    }
    local_c8 = local_1b0;
    local_68 = local_1b0;
    FUN_00546a48(local_28,0);
    puVar2 = local_28;
    FUN_00546750();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_48;
    local_d0 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_momentsFakeKeepOriginal_026a4e80);
    local_d1 = (byte)puVar1;
    FUN_0054a7c0(local_28,local_60,local_68);
    puVar2 = PTR____NSArray0___02578280;
    puVar1 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    puVar2 = *(undefined **)puVar2;
    local_e0 = puVar1;
    (*(code *)PTR__objc_retain_02578638)();
    puVar1 = local_28;
    local_e8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_likeUsers_026a4e88);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_f0 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((ulong)puVar1 & 1) == 0) {
      _objc_storeStrong(&local_f0,*(undefined8 *)PTR____NSArray0___02578280);
    }
    puVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_commentUsers_026a4730);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_f8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if (((ulong)puVar2 & 1) == 0) {
      _objc_storeStrong(&local_f8,*(undefined8 *)PTR____NSArray0___02578280);
    }
    if ((local_d1 & 1) != 0) {
      puVar2 = local_28;
      FUN_0054ac0c();
      if (((ulong)puVar2 & 1) == 0) {
        puVar1 = local_f0;
        (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_copy_0269d150);
        puVar2 = local_e0;
        local_e0 = puVar1;
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar1 = local_f8;
        (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_copy_0269d150);
        puVar2 = local_e8;
        local_e8 = puVar1;
        (*(code *)PTR__objc_release_02578630)(puVar2);
        _objc_setAssociatedObject(local_28,&DAT_028cb3e8,local_e0,1);
        puVar2 = local_28;
        _objc_setAssociatedObject(local_28,&DAT_028cb3e9,local_e8,1);
      }
      else {
        puVar1 = local_28;
        FUN_0054ace0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = local_e0;
        local_e0 = puVar1;
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar1 = local_28;
        FUN_0054af3c();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = local_e8;
        local_e8 = puVar1;
        (*(code *)PTR__objc_release_02578630)();
      }
      FUN_0054b198();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = local_28;
      local_100 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_likeFlag_026a4708);
      if (((((ulong)puVar1 & 1) != 0) &&
          (puVar2 = local_100,
          (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_length_0269cca0),
          puVar2 != (undefined *)0x0)) &&
         (puVar1 = local_e0, FUN_0054b750(puVar2,local_e0,local_100), ((ulong)puVar1 & 1) == 0)) {
        puVar1 = local_f0;
        FUN_0054bc04(local_f0,local_100);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = local_100;
        local_108 = puVar1;
        if (puVar1 == (undefined *)0x0) {
          FUN_0054c4ec();
          _objc_retainAutoreleasedReturnValue();
          FUN_0054c0ac();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = local_108;
          local_108 = puVar2;
          (*(code *)PTR__objc_release_02578630)(puVar3);
          (*(code *)PTR__objc_release_02578630)(puVar1);
        }
        if (local_108 != (undefined *)0x0) {
          if (local_e0 == (undefined *)0x0) {
            local_298 = *(undefined **)PTR____NSArray0___02578280;
          }
          else {
            local_298 = local_e0;
          }
          puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithArray__0269eab8,
                     local_298);
          _objc_retainAutoreleasedReturnValue();
          local_110 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180,local_108);
          puVar1 = local_110;
          (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_copy_0269d150);
          puVar2 = local_e0;
          local_e0 = puVar1;
          (*(code *)PTR__objc_release_02578630)(puVar2);
          _objc_setAssociatedObject(local_28,&DAT_028cb3e8,local_e0,1);
          _objc_storeStrong(&local_110,0);
        }
        _objc_storeStrong(&local_108,0);
      }
      _objc_storeStrong(&local_100,0);
    }
    local_118 = (undefined *)0x0;
    local_120 = (undefined *)0x0;
    local_121 = 0;
    if (((local_39 & 1) != 0) &&
       (puVar2 = local_48,
       (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_momentsFakeRefreshEachOpen_026a4e90),
       ((ulong)puVar2 & 1) == 0)) {
      local_130 = local_118;
      local_138 = local_120;
      puVar2 = local_28;
      FUN_0054c774(local_28,&local_130,&local_138);
      _objc_storeStrong(&local_118,local_130);
      _objc_storeStrong(&local_120,local_138);
      local_121 = (byte)puVar2;
    }
    if ((local_121 & 1) == 0) {
      puVar1 = local_60;
      FUN_0054cb60();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_118;
      local_118 = puVar1;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar1 = local_28;
      puVar3 = local_68;
      FUN_0054d83c();
      _objc_retainAutoreleasedReturnValue();
      FUN_0054d068();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_120;
      local_120 = puVar1;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      if (local_118 == (undefined *)0x0) {
        local_2f0 = *(undefined **)PTR____NSArray0___02578280;
      }
      else {
        local_2f0 = local_118;
      }
      if (local_120 == (undefined *)0x0) {
        local_308 = *(undefined **)PTR____NSArray0___02578280;
      }
      else {
        local_308 = local_120;
      }
      FUN_0054e064(local_28,local_2f0,local_308);
    }
    if (local_e0 == (undefined *)0x0) {
      local_320 = *(undefined **)PTR____NSArray0___02578280;
    }
    else {
      local_320 = local_e0;
    }
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithArray__0269eab8,local_320);
    _objc_retainAutoreleasedReturnValue();
    if (local_118 == (undefined *)0x0) {
      local_340 = *(undefined **)PTR____NSArray0___02578280;
    }
    else {
      local_340 = local_118;
    }
    local_140 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObjectsFromArray__0269d540,local_340);
    if (local_e8 == (undefined *)0x0) {
      local_358 = *(undefined **)PTR____NSArray0___02578280;
    }
    else {
      local_358 = local_e8;
    }
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithArray__0269eab8,local_358);
    _objc_retainAutoreleasedReturnValue();
    if (local_120 == (undefined *)0x0) {
      local_378 = *(undefined **)PTR____NSArray0___02578280;
    }
    else {
      local_378 = local_120;
    }
    local_148 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObjectsFromArray__0269d540,local_378);
    FUN_00546e94(local_28);
    DAT_028cb368 = 1;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setLikeUsers__026a4e98,local_140);
    puVar2 = local_140;
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setLikeCount__026a4ea0,puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setCommentUsers__026a4ea8,local_148);
    puVar2 = local_148;
    (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setCommentCount__026a4eb0,puVar2);
    FUN_0054e514(local_28,1);
    DAT_028cb368 = 0;
    _objc_storeStrong(&local_148);
    _objc_storeStrong(&local_140,0);
    _objc_storeStrong(&local_120,0);
    _objc_storeStrong(&local_118,0);
    _objc_storeStrong(&local_f8,0);
    _objc_storeStrong(&local_f0,0);
    _objc_storeStrong(&local_e8,0);
    _objc_storeStrong(&local_e0,0);
    _objc_storeStrong(&local_d0,0);
    _objc_storeStrong(&local_48,0);
    local_40 = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

