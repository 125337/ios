// applyNameplateBesideNicknameLabel:hostView:username:contact:scene:playGif: @ 010e46b0

/* Function Stack Size: 0x3c bytes */

void WCRefineNameplateHelper::
     applyNameplateBesideNicknameLabel_hostView_username_contact_scene_playGif_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,long_long param_7
               ,bool param_8)

{
  ID IVar1;
  bool bVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  double *pdVar6;
  undefined *puVar7;
  double in_d1;
  double in_d2;
  double dVar8;
  double in_d3;
  double dVar9;
  double dVar10;
  undefined1 *local_700;
  undefined1 *local_6f8;
  undefined1 *local_6f0;
  cfstringStruct *local_6e8;
  cfstringStruct *local_6e0;
  double local_6d8;
  double local_6d0;
  double local_6c8;
  double *local_6c0;
  undefined8 local_6b8;
  undefined8 local_6b0;
  undefined8 local_6a8;
  cfstringStruct *local_6a0;
  double local_698;
  double local_690;
  double local_688;
  undefined1 *local_680;
  double *local_678;
  undefined *local_670;
  undefined8 local_668;
  double local_660;
  undefined *local_658;
  undefined *local_650;
  undefined8 local_648;
  undefined *local_640;
  undefined **local_638;
  undefined **local_630;
  undefined8 local_628;
  undefined8 local_620;
  double local_618;
  undefined *local_610;
  cfstringStruct *local_608;
  cfstringStruct *local_600;
  cfstringStruct *local_5f8;
  cfstringStruct *local_5f0;
  undefined *local_5e8;
  undefined1 *local_5e0;
  undefined1 *local_5d8;
  undefined1 *local_5d0;
  cfstringStruct *local_5c8;
  undefined8 local_5c0;
  undefined *local_5b8;
  double local_5b0;
  undefined *local_5a8;
  double *local_5a0;
  double local_598;
  double local_590;
  undefined8 local_588;
  double local_580;
  undefined *local_578;
  cfstringStruct *local_570;
  double local_568;
  double local_560;
  double local_558;
  undefined1 *local_550;
  double *local_548;
  cfstringStruct *local_540;
  cfstringStruct *local_538;
  cfstringStruct *local_530;
  cfstringStruct *local_528;
  undefined *local_520;
  undefined1 *local_518;
  undefined1 *local_510;
  undefined1 *local_508;
  cfstringStruct *local_500;
  double *local_4f8;
  uint local_4f0;
  uint local_4ec;
  double local_4e8;
  double local_4e0;
  double local_4d8;
  double local_4d0;
  double local_4c8;
  double local_4c0;
  double local_4b8;
  double local_4b0;
  double local_4a8;
  undefined **local_4a0;
  double local_498;
  double local_490;
  double local_488;
  double local_480;
  uint local_478;
  uint local_474;
  cfstringStruct *local_470;
  undefined1 *local_468;
  undefined1 *local_460;
  uint local_454;
  double local_450;
  ID local_448;
  ID local_440;
  ID local_438;
  double local_430;
  bool local_424;
  double *local_420;
  byte local_411;
  undefined *local_410;
  double local_408;
  double local_400;
  double local_3f8;
  double local_3f0;
  double dStack_3e8;
  double local_3e0;
  double dStack_3d8;
  double local_3d0;
  double dStack_3c8;
  double local_3c0;
  double dStack_3b8;
  double local_3b0;
  double dStack_3a8;
  double local_3a0;
  double dStack_398;
  double local_390 [17];
  undefined1 local_308 [144];
  undefined1 local_278 [112];
  undefined1 local_208 [8];
  undefined1 local_200 [14];
  byte local_1f2;
  byte local_1f1;
  undefined1 local_1f0 [240];
  undefined1 local_100 [39];
  byte local_d9;
  undefined1 local_b0 [8];
  undefined1 local_a8 [8];
  undefined1 local_a0 [8];
  undefined1 local_98 [8];
  undefined1 local_90 [8];
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  undefined1 local_68 [15];
  byte local_59;
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_420 = local_390;
  local_450 = DAT_02323e70;
  local_38 = 0;
  local_448 = param_4;
  local_440 = param_5;
  local_438 = param_6;
  local_430 = (double)param_7;
  local_424 = param_8;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  IVar1 = local_448;
  local_420[0x6a] = 0.0;
  _objc_storeStrong(local_40,IVar1);
  IVar1 = local_440;
  local_420[0x69] = 0.0;
  _objc_storeStrong(local_48,IVar1);
  IVar1 = local_438;
  local_420[0x68] = 0.0;
  _objc_storeStrong(local_50,IVar1);
  pdVar6 = local_420;
  bVar2 = local_424;
  local_420[0x67] = local_430;
  local_59 = (byte)bVar2;
  if (pdVar6[0x6a] == 0.0) {
    dVar4 = local_420[0x6b];
    (*(code *)PTR__objc_msgSend_02578628)(dVar4,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    dVar5 = local_420[0x6a];
    local_420[0x6a] = dVar4;
    (*(code *)PTR__objc_release_02578630)(dVar5);
  }
  if (local_420[0x6a] == 0.0) {
    *(undefined4 *)(local_420 + 0x66) = 1;
    goto LAB_010e6244;
  }
  dVar4 = local_420[0x69];
  (*(code *)PTR__objc_msgSend_02578628)(dVar4,PTR_s_length_0269cca0);
  if (dVar4 == 0.0) {
    dVar4 = local_420[0x68];
    FUN_010e6288();
    _objc_retainAutoreleasedReturnValue();
    dVar5 = local_420[0x69];
    local_420[0x69] = dVar4;
    (*(code *)PTR__objc_release_02578630)(dVar5);
  }
  dVar4 = local_420[0x6d];
  (*(code *)PTR__objc_msgSend_02578628)
            (dVar4,PTR_s_nicknameLabelIsVisible__026ae8b8,local_420[0x6b]);
  if (((ulong)dVar4 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_420[0x6d],PTR_s_restoreNicknamePushIfNeeded__026a5e90,local_420[0x6b]);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_420[0x6d],PTR_s_removeNameplateFromHostView__026a5d88,local_420[0x6a]);
    *(undefined4 *)(local_420 + 0x66) = 1;
    goto LAB_010e6244;
  }
  if (local_420[0x67] == 9.88131291682493e-324) {
    dVar4 = local_420[0x6b];
    _WCRNameplateContactsLabelIsTopEntry();
    if (((ulong)dVar4 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_420[0x6d],PTR_s_restoreNicknamePushIfNeeded__026a5e90,local_420[0x6b]);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_420[0x6d],PTR_s_removeNameplateFromHostView__026a5d88,local_420[0x6a]);
      *(undefined4 *)(local_420 + 0x66) = 1;
      goto LAB_010e6244;
    }
  }
  dVar4 = local_420[0x6a];
  _WCRNameplateHostIsSessionPicker();
  if (((ulong)dVar4 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_420[0x6d],PTR_s_restoreNicknamePushIfNeeded__026a5e90,local_420[0x6b]);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_420[0x6d],PTR_s_removeNameplateFromHostView__026a5d88,local_420[0x6a]);
    *(undefined4 *)(local_420 + 0x66) = 1;
    goto LAB_010e6244;
  }
  local_420[0x65] = 0.0;
  local_468 = local_70;
  local_420[100] = 0.0;
  local_460 = local_78;
  local_420[99] = 0.0;
  local_420[0x62] = 4.94065645841247e-324;
  local_700 = local_88;
  local_420[0x61] = 0.0;
  local_6f8 = local_90;
  local_420[0x60] = 0.0;
  local_6f0 = local_98;
  dVar5 = 1.0;
  local_420[0x5f] = 1.0;
  dVar4 = local_420[0x6d];
  local_420[0x5e] = local_420[100];
  local_420[0x5d] = local_420[99];
  (*(code *)PTR__objc_msgSend_02578628)
            (dVar4,PTR_s_resolveConfigForUsername_scene_t_026ae970,local_420[0x69],local_420[0x67],
             local_68,local_a0,local_a8,local_80);
  local_454 = SUB84(dVar4,0);
  _objc_storeStrong(local_468,local_420[0x5e]);
  _objc_storeStrong(local_460,local_420[0x5d]);
  if ((local_454 & 1) == 0) {
    dVar4 = local_420[0x6d];
    (*(code *)PTR__objc_msgSend_02578628)(dVar4,PTR_s_isSceneEnabled__026a5d60,local_420[0x67]);
    local_470 = &cf_no_path_or_special_off;
    if (((ulong)dVar4 & 1) == 0) {
      local_470 = &cf_scene_off;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_420[0x5c] = (double)local_470;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_420[0x6d],PTR_s_restoreNicknamePushIfNeeded__026a5e90,local_420[0x6b]);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_420[0x6d],PTR_s_removeNameplateFromHostView__026a5d88,local_420[0x6a]);
    *(undefined4 *)(local_420 + 0x66) = 1;
    _objc_storeStrong(local_b0,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_420[0x6d],PTR_s_visualNicknameFrameInHost_nickna_026ae910,local_420[0x6a],
               local_420[0x6b],local_420[0x67]);
    local_420[0x58] = dVar5;
    local_420[0x59] = in_d1;
    local_420[0x5a] = in_d2;
    local_420[0x5b] = in_d3;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_420[0x6d],PTR_s_nicknameLineHeightOfView__026ae8e8,local_420[0x6b]);
    local_420[0x57] = dVar5;
    local_474 = 0;
    if (local_420[0x67] == 0.0) {
      dVar4 = local_420[0x69];
      _WCRNameplateUsernameIsGrouping();
      local_478 = 1;
      if (((ulong)dVar4 & 1) == 0) {
        uVar3 = SUB84(local_420[0x6a],0);
        _WCRNameplateHostIsGroupingEntry();
        local_478 = uVar3;
      }
      local_474 = local_478;
    }
    local_d9 = (byte)local_474 & 1;
    if (local_420[0x67] == 0.0) {
      if ((local_474 & 1) == 0) {
        if (8.0 < local_420[0x5b]) {
          local_420[0x55] = local_420[0x57];
          local_420[0x54] = local_420[0x5b];
          if (local_420[0x54] <= local_420[0x55]) {
            local_480 = local_420[0x55];
          }
          else {
            local_480 = local_420[0x54];
          }
          local_420[0x53] = local_480;
          local_420[0x57] = local_420[0x53];
        }
        if (8.0 <= local_420[0x57]) {
          DAT_028e33d8 = local_420[0x57];
        }
      }
      else if (8.0 <= DAT_028e33d8) {
        local_420[0x57] = DAT_028e33d8;
      }
    }
    else if (local_420[0x67] == 9.88131291682493e-324) {
      dVar4 = local_420[0x6d];
      (*(code *)PTR__objc_msgSend_02578628)
                (dVar4,PTR_s_nicknameTextLabelFromView__026ae8c0,local_420[0x6b]);
      _objc_retainAutoreleasedReturnValue();
      local_420[0x52] = dVar4;
      dVar4 = local_420[0x52];
      (*(code *)PTR__objc_msgSend_02578628)(dVar4,PTR_s_font_0269ea00);
      _objc_retainAutoreleasedReturnValue();
      local_488 = dVar4;
      (*(code *)PTR__objc_release_02578630)();
      if (local_488 != 0.0) {
        dVar4 = local_420[0x52];
        local_4a0 = &PTR_s_avatarCornerChatPageBorderEnable_0269e000;
        (*(code *)PTR__objc_msgSend_02578628)(dVar4,PTR_s_font_0269ea00);
        _objc_retainAutoreleasedReturnValue();
        local_4b0 = dVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_4a8 = dVar5;
        (*(code *)PTR__objc_release_02578630)(local_4b0);
        local_420[0x51] = local_4a8;
        dVar5 = local_420[0x52];
        dVar4 = local_4a8;
        (*(code *)PTR__objc_msgSend_02578628)(dVar5,local_4a0[0x140]);
        _objc_retainAutoreleasedReturnValue();
        local_498 = dVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_490 = dVar4;
        (*(code *)PTR__objc_release_02578630)(local_498);
        local_420[0x50] = local_490;
        if (local_420[0x50] <= local_420[0x51]) {
          local_4b8 = local_420[0x51];
        }
        else {
          local_4b8 = local_420[0x50];
        }
        local_420[0x4f] = local_4b8;
        local_420[0x57] = local_420[0x4f];
      }
      _objc_storeStrong(local_100,0);
    }
    else if (8.0 < local_420[0x5b]) {
      local_420[0x4e] = local_420[0x57];
      local_420[0x4d] = local_420[0x5b];
      if (local_420[0x4d] <= local_420[0x4e]) {
        local_4c0 = local_420[0x4e];
      }
      else {
        local_4c0 = local_420[0x4d];
      }
      local_420[0x4c] = local_4c0;
      local_420[0x57] = local_420[0x4c];
    }
    local_420[0x4a] = 12.0;
    local_420[0x49] = local_420[0x57] * local_450;
    if (local_420[0x49] <= local_420[0x4a]) {
      local_4c8 = local_420[0x4a];
    }
    else {
      local_4c8 = local_420[0x49];
    }
    local_420[0x48] = local_4c8;
    local_420[0x4b] = local_420[0x48];
    if ((local_420[0x67] == 1.97626258336499e-323) || (local_420[0x67] == 2.47032822920623e-323)) {
      local_420[0x47] = 18.0;
      local_420[0x46] = local_420[0x57] * local_450;
      if (local_420[0x46] <= local_420[0x47]) {
        local_4d0 = local_420[0x47];
      }
      else {
        local_4d0 = local_420[0x46];
      }
      local_420[0x45] = local_4d0;
      local_420[0x4b] = local_420[0x45];
    }
    local_420[0x44] = DAT_02324270;
    if (local_420[0x65] == 0.0) {
      dVar4 = DAT_02324270;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_420[0x6d],PTR_s_nameplateImageAspectForDayPath_n_026ae978,local_420[100],
                 local_420[99]);
      local_420[0x44] = dVar4;
    }
    dVar4 = local_420[0x4b] * local_420[0x44] * local_420[0x5f];
    dVar5 = local_420[0x4b] * local_420[0x5f];
    FUN_010e08bc();
    local_420[0x42] = dVar4;
    local_420[0x43] = dVar5;
    if (local_420[0x65] == 4.94065645841247e-324) {
      local_420[0x3f] = local_420[0x4b] * 1.15 * local_420[0x5f];
      local_420[0x3e] = 16.0;
      if (local_420[0x3e] <= local_420[0x3f]) {
        local_4d8 = local_420[0x3f];
      }
      else {
        local_4d8 = local_420[0x3e];
      }
      local_420[0x3d] = local_4d8;
      dVar4 = local_420[0x3d];
      local_420[0x3c] = local_420[0x4b] * local_420[0x5f];
      local_420[0x3b] = 14.0;
      if (local_420[0x3b] <= local_420[0x3c]) {
        local_4e8 = local_420[0x3c];
      }
      else {
        local_4e8 = local_420[0x3b];
      }
      local_420[0x3a] = local_4e8;
      dVar5 = local_420[0x3a];
      local_4e0 = dVar4;
      FUN_010e08bc();
      local_420[0x40] = dVar4;
      local_420[0x41] = dVar5;
      local_420[0x43] = local_420[0x41];
      local_420[0x42] = local_420[0x40];
    }
    local_420[0x37] = local_420[0x59];
    local_420[0x36] = local_420[0x58];
    local_420[0x39] = local_420[0x5b];
    local_420[0x38] = local_420[0x5a];
    local_420[0x35] = local_420[0x42] + 2.0;
    if (local_420[0x62] == 0.0) {
      dVar4 = local_420[0x6b];
      FUN_010e6390(local_420[0x35]);
      if (((ulong)dVar4 & 1) != 0) {
        local_420[0x36] = local_420[0x36] - local_420[0x35];
      }
    }
    dVar4 = local_420[0x6a];
    (*(code *)PTR__objc_msgSend_02578628)(dVar4,PTR_s_class_0269cd60);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    local_420[0x34] = dVar4;
    dVar4 = local_420[0x34];
    (*(code *)PTR__objc_msgSend_02578628)
              (dVar4,PTR_s_isEqualToString__0269ccc8,&cf_MMMsgContentNavBar);
    local_4ec = 1;
    if (((ulong)dVar4 & 1) == 0) {
      dVar4 = local_420[0x34];
      (*(code *)PTR__objc_msgSend_02578628)
                (dVar4,PTR_s_isEqualToString__0269ccc8,&cf_MMNewMsgContentNavBar);
      local_4ec = SUB84(dVar4,0);
    }
    local_1f1 = (byte)local_4ec & 1;
    if (((local_420[0x67] == 1.97626258336499e-323) || (local_420[0x67] == 2.47032822920623e-323))
       && ((local_420[0x67] != 1.97626258336499e-323 || ((local_4ec & 1) == 0)))) {
      (*(code *)PTR__objc_msgSend_02578628)(local_420[0x6a],PTR_s_setClipsToBounds__026ca8c8,0);
    }
    if (local_420[0x67] == 2.47032822920623e-323) {
      (*(code *)PTR__objc_msgSend_02578628)(local_420[0x6a],PTR_s_setClipsToBounds__026ca8c8,0);
    }
    local_4f0 = 1;
    if (local_420[0x67] != 4.94065645841247e-324) {
      local_4f0 = (uint)(local_420[0x65] == 4.94065645841247e-324);
    }
    local_1f2 = (byte)local_4f0;
    dVar4 = local_420[0x6d];
    (*(code *)PTR__objc_msgSend_02578628)(dVar4,PTR_s_ensureOverlayOnHost__026ae980,local_420[0x6a])
    ;
    _objc_retainAutoreleasedReturnValue();
    local_420[0x32] = dVar4;
    dVar4 = local_420[0x6a];
    _objc_getAssociatedObject(dVar4,DAT_0280e1c8);
    _objc_retainAutoreleasedReturnValue();
    local_420[0x31] = dVar4;
    local_4f8 = (double *)local_420[0x31];
    puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    pdVar6 = local_4f8;
    (*(code *)PTR__objc_msgSend_02578628)(local_4f8,PTR_s_isKindOfClass__0269cd68,puVar7);
    if (((ulong)pdVar6 & 1) == 0) {
      dVar4 = local_420[0x32];
      _objc_getAssociatedObject(dVar4,DAT_0280e1c8);
      _objc_retainAutoreleasedReturnValue();
      pdVar6 = (double *)local_420[0x31];
      local_420[0x31] = dVar4;
      (*(code *)PTR__objc_release_02578630)();
    }
    if (local_420[0x62] == 0.0) {
      dVar4 = local_420[0x36] + local_420[0x61];
      dVar5 = local_420[0x37] + (local_420[0x39] - local_420[0x43]) * 0.5 + local_420[0x60];
      dVar8 = local_420[0x42];
      dVar9 = local_420[0x43];
      FUN_010e1d58();
      local_420[0x28] = dVar4;
      local_420[0x29] = dVar5;
      local_420[0x2a] = dVar8;
      local_420[0x2b] = dVar9;
      local_420[0x2d] = local_420[0x29];
      local_420[0x2c] = local_420[0x28];
      local_420[0x2f] = local_420[0x2b];
      local_420[0x2e] = local_420[0x2a];
    }
    else {
      pdVar6 = (double *)local_420[0x6d];
      dVar4 = local_420[0x36];
      dVar5 = local_420[0x37];
      dVar8 = local_420[0x38];
      dVar9 = local_420[0x39];
      (*(code *)PTR__objc_msgSend_02578628)
                (pdVar6,PTR_s_frameForPlacement_nickFrame_size_026ae988,local_420[0x62]);
      local_420[0x24] = dVar4;
      local_420[0x25] = dVar5;
      local_420[0x26] = dVar8;
      local_420[0x27] = dVar9;
      local_420[0x2d] = local_420[0x25];
      local_420[0x2c] = local_420[0x24];
      local_420[0x2f] = local_420[0x27];
      local_420[0x2e] = local_420[0x26];
    }
    local_520 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_518 = (undefined1 *)local_420[0x67];
    local_510 = (undefined1 *)local_420[0x65];
    local_508 = (undefined1 *)local_420[0x62];
    local_500 = (cfstringStruct *)local_420[100];
    local_528 = local_500;
    if (local_500 == (cfstringStruct *)0x0) {
      local_528 = &::cf___;
    }
    local_538 = local_528;
    local_530 = (cfstringStruct *)local_420[99];
    local_540 = local_530;
    if (local_530 == (cfstringStruct *)0x0) {
      local_540 = &::cf___;
    }
    local_570 = local_540;
    local_568 = local_420[0x61];
    local_560 = local_420[0x60];
    local_558 = local_420[0x5f];
    dVar10 = local_420[0x2f];
    FUN_010e655c(local_420[0x2c],local_420[0x2d],local_420[0x2e]);
    _objc_retainAutoreleasedReturnValue();
    local_700 = local_518;
    local_6f8 = local_510;
    local_6f0 = local_508;
    local_6e8 = local_538;
    local_6e0 = local_570;
    local_6d8 = local_568;
    local_6d0 = local_560;
    local_6c8 = local_558;
    puVar7 = local_520;
    dVar4 = local_558;
    dVar5 = local_560;
    dVar8 = local_568;
    local_6c0 = pdVar6;
    local_550 = (undefined1 *)&local_700;
    local_548 = pdVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_520,PTR_s_stringWithFormat__0269cca8,&cf__ld__ld__ld_________2f___2f___2f___);
    _objc_retainAutoreleasedReturnValue();
    local_420[0x23] = (double)puVar7;
    (*(code *)PTR__objc_release_02578630)(local_548);
    dVar9 = local_420[0x31];
    (*(code *)PTR__objc_msgSend_02578628)(dVar9,PTR_s_isEqualToString__0269ccc8,local_420[0x23]);
    if (((ulong)dVar9 & 1) == 0) {
      dVar4 = local_420[0x42];
      dVar5 = local_420[0x43];
      (*(code *)PTR__objc_msgSend_02578628)
                (local_420[0x6d],PTR_s_pushNicknameIfNeeded_hostView_pl_026ae990,local_420[0x6b],
                 local_420[0x6a],local_420[0x62],local_420[0x67]);
      local_420[4] = dVar4;
      local_420[5] = dVar5;
      local_420[6] = dVar8;
      local_420[7] = dVar10;
      local_420[0x37] = local_420[5];
      local_420[0x36] = local_420[4];
      local_420[0x39] = local_420[7];
      local_420[0x38] = local_420[6];
      if (local_420[0x62] == 0.0) {
        dVar4 = local_420[0x36] + local_420[0x61];
        dVar5 = local_420[0x37] + (local_420[0x39] - local_420[0x43]) * 0.5 + local_420[0x60];
        dVar8 = local_420[0x42];
        dVar9 = local_420[0x43];
        FUN_010e1d58();
        *local_420 = dVar4;
        local_420[1] = dVar5;
        local_420[2] = dVar8;
        local_420[3] = dVar9;
        local_420[0x2d] = local_420[1];
        local_420[0x2c] = *local_420;
        local_420[0x2f] = local_420[3];
        local_420[0x2e] = local_420[2];
      }
      else {
        dVar4 = local_420[0x36];
        dVar5 = local_420[0x37];
        dVar8 = local_420[0x38];
        dVar9 = local_420[0x39];
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_420[0x6d],PTR_s_frameForPlacement_nickFrame_size_026ae988,local_420[0x62]);
        local_420[0x2d] = dVar5;
        local_420[0x2c] = dVar4;
        local_420[0x2f] = dVar9;
        local_420[0x2e] = dVar8;
        local_3b0 = dVar4;
        dStack_3a8 = dVar5;
        local_3a0 = dVar8;
        dStack_398 = dVar9;
      }
      dStack_3e8 = local_420[0x2d];
      local_3f0 = local_420[0x2c];
      dStack_3d8 = local_420[0x2f];
      local_3e0 = local_420[0x2e];
      local_3d0 = local_3f0;
      dStack_3c8 = dStack_3e8;
      local_3c0 = local_3e0;
      dStack_3b8 = dStack_3d8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_3f0,dStack_3e8,local_3e0,dStack_3d8,local_420[0x32],PTR_s_setFrame__026ca960)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(local_420[0x32],PTR_s_setHidden__026ca970,0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_420[0x32],PTR_s_setClipsToBounds__026ca8c8,local_1f2 & 1);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_420[0x6a],PTR_s_bringSubviewToFront__026ca550,local_420[0x32]);
      if (local_420[0x65] == 4.94065645841247e-324) {
        puVar7 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
        _objc_retainAutoreleasedReturnValue();
        local_5a8 = puVar7;
        (*(code *)PTR__objc_msgSend_02578628)(local_420[0x32],PTR_s_setBackgroundColor__026ca888);
        (*(code *)PTR__objc_release_02578630)(local_5a8);
        dVar4 = local_420[0x6d];
        (*(code *)PTR__objc_msgSend_02578628)
                  (dVar4,PTR_s_badgeTextForUsername_contact__026ae998,local_420[0x69],
                   local_420[0x68]);
        _objc_retainAutoreleasedReturnValue();
        local_5a0 = &local_3f8;
        local_3f8 = dVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_420[0x42],local_420[0x43],local_420[0x6d],
                   PTR_s_configureBadgeContentOnOverlay_t_026ae9a0,local_420[0x32],dVar4);
        pdVar6 = local_5a0;
        _objc_storeStrong(local_5a0,0);
LAB_010e5ecc:
        local_5e8 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_5e0 = (undefined1 *)local_420[0x67];
        local_5d8 = (undefined1 *)local_420[0x65];
        local_5d0 = (undefined1 *)local_420[0x62];
        local_5c8 = (cfstringStruct *)local_420[100];
        local_5f0 = local_5c8;
        if (local_5c8 == (cfstringStruct *)0x0) {
          local_5f0 = &::cf___;
        }
        local_600 = local_5f0;
        local_5f8 = (cfstringStruct *)local_420[99];
        local_608 = local_5f8;
        if (local_5f8 == (cfstringStruct *)0x0) {
          local_608 = &::cf___;
        }
        local_6a0 = local_608;
        local_698 = local_420[0x61];
        local_690 = local_420[0x60];
        local_688 = local_420[0x5f];
        FUN_010e655c(local_420[0x2c],local_420[0x2d],local_420[0x2e],local_420[0x2f]);
        _objc_retainAutoreleasedReturnValue();
        local_700 = local_5e0;
        local_6f8 = local_5d8;
        local_6f0 = local_5d0;
        local_6e8 = local_600;
        local_6e0 = local_6a0;
        local_6d8 = local_698;
        local_6d0 = local_690;
        local_6c8 = local_688;
        puVar7 = local_5e8;
        local_6c0 = pdVar6;
        local_680 = (undefined1 *)&local_700;
        local_678 = pdVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_5e8,PTR_s_stringWithFormat__0269cca8,
                   &cf__ld__ld__ld_________2f___2f___2f___);
        _objc_retainAutoreleasedReturnValue();
        local_410 = puVar7;
        (*(code *)PTR__objc_release_02578630)(local_678);
        dVar4 = local_420[0x31];
        (*(code *)PTR__objc_msgSend_02578628)(dVar4,PTR_s_isEqualToString__0269ccc8,local_410);
        local_411 = (SUB81(dVar4,0) ^ 1) & 1;
        local_670 = &DAT_0280e000;
        local_648 = 3;
        _objc_setAssociatedObject(local_420[0x32],DAT_0280e1c8,local_410);
        _objc_setAssociatedObject
                  (local_420[0x6a],*(undefined8 *)(local_670 + 0x1c8),local_410,local_648);
        local_650 = &DAT_0280e000;
        _objc_setAssociatedObject(local_420[0x32],DAT_0280e1e0,local_420[0x69],local_648);
        local_660 = local_420[0x32];
        local_640 = &DAT_0280e000;
        local_668 = DAT_0280e1e8;
        local_638 = &PTR_WCRefineHelper_026ce000;
        local_630 = &PTR_s_avatarCornerChatPageBorderEnable_0269e000;
        puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,
                   local_420[0x67]);
        _objc_retainAutoreleasedReturnValue();
        local_620 = 1;
        local_658 = puVar7;
        _objc_setAssociatedObject(local_660,local_668);
        (*(code *)PTR__objc_release_02578630)(local_658);
        _objc_setAssociatedObject
                  (local_420[0x6a],*(undefined8 *)(local_650 + 0x1e0),local_420[0x69],local_648);
        local_618 = local_420[0x6a];
        local_628 = *(undefined8 *)(local_640 + 0x1e8);
        puVar7 = local_638[7];
        (*(code *)PTR__objc_msgSend_02578628)(puVar7,local_630[0x10],local_420[0x67]);
        _objc_retainAutoreleasedReturnValue();
        local_610 = puVar7;
        _objc_setAssociatedObject(local_618,local_628,puVar7,local_620);
        (*(code *)PTR__objc_release_02578630)(local_610);
        _objc_storeStrong(&local_410,0);
        *(undefined4 *)(local_420 + 0x66) = 0;
      }
      else {
        puVar7 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
        _objc_retainAutoreleasedReturnValue();
        local_5b8 = puVar7;
        (*(code *)PTR__objc_msgSend_02578628)(local_420[0x32],PTR_s_setBackgroundColor__026ca888);
        (*(code *)PTR__objc_release_02578630)(local_5b8);
        dVar4 = local_420[0x32];
        (*(code *)PTR__objc_msgSend_02578628)(dVar4,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        local_5b0 = dVar4;
        (*(code *)PTR__objc_msgSend_02578628)(0);
        (*(code *)PTR__objc_release_02578630)(local_5b0);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_420[0x32],PTR_s_setClipsToBounds__026ca8c8,local_1f2 & 1);
        dVar4 = local_420[0x6d];
        (*(code *)PTR__objc_msgSend_02578628)
                  (dVar4,PTR_s_resolvedImageRelativePath_nightP_026ae8d0,local_420[100],
                   local_420[99]);
        _objc_retainAutoreleasedReturnValue();
        dVar5 = local_420[0x6d];
        local_400 = dVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (dVar5,PTR_s_absolutePathForRelativePath__026ae8d8,dVar4);
        _objc_retainAutoreleasedReturnValue();
        local_408 = dVar5;
        (*(code *)PTR__objc_msgSend_02578628)(dVar5,PTR_s_length_0269cca0);
        if (dVar5 == 0.0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_420[0x6d],PTR_s_removeNameplateFromHostView__026a5d88,local_420[0x6a]);
          *(undefined4 *)(local_420 + 0x66) = 1;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_420[0x6d],PTR_s_configureImageContentOnOverlay_f_026ae9a8,local_420[0x32]
                     ,local_408,local_59 & 1);
          *(undefined4 *)(local_420 + 0x66) = 0;
        }
        local_5c0 = 0;
        _objc_storeStrong(&local_408);
        pdVar6 = &local_400;
        _objc_storeStrong(pdVar6,local_5c0);
        if (*(int *)(local_420 + 0x66) == 0) goto LAB_010e5ecc;
      }
    }
    else {
      if (local_420[0x62] == 0.0) {
        dVar4 = local_420[0x42];
        dVar5 = local_420[0x43];
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_420[0x6d],PTR_s_pushNicknameIfNeeded_hostView_pl_026ae990,local_420[0x6b],
                   local_420[0x6a],local_420[0x62],local_420[0x67]);
        local_420[0x1f] = dVar4;
        local_420[0x20] = dVar5;
        local_420[0x21] = dVar8;
        local_420[0x22] = dVar10;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_420[0x32],PTR_s_setClipsToBounds__026ca8c8,local_1f2 & 1);
      _objc_setAssociatedObject(local_420[0x6a],DAT_0280e1e0,local_420[0x69],3);
      local_580 = local_420[0x6a];
      local_588 = DAT_0280e1e8;
      puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,
                 local_420[0x67]);
      _objc_retainAutoreleasedReturnValue();
      local_578 = puVar7;
      _objc_setAssociatedObject(local_580,local_588,puVar7,1);
      (*(code *)PTR__objc_release_02578630)(local_578);
      dVar9 = local_420[0x32];
      (*(code *)PTR__objc_msgSend_02578628)(dVar9,PTR_s_isHidden_026ca768);
      if (((ulong)dVar9 & 1) == 0) {
        dVar9 = local_420[0x32];
        (*(code *)PTR__objc_msgSend_02578628)(dVar9,PTR_s_frame_026ca640);
        local_420[0x1b] = dVar4;
        local_420[0x1c] = dVar5;
        local_420[0x1d] = dVar8;
        local_420[0x1e] = dVar10;
        FUN_010e65dc(local_420[0x1b],local_420[0x1c],local_420[0x1d],local_420[0x1e],local_420[0x2c]
                     ,local_420[0x2d],local_420[0x2e],local_420[0x2f]);
        if (((ulong)dVar9 & 1) == 0) goto LAB_010e5804;
      }
      else {
LAB_010e5804:
        local_420[0x17] = local_420[0x2d];
        local_420[0x16] = local_420[0x2c];
        local_420[0x19] = local_420[0x2f];
        local_420[0x18] = local_420[0x2e];
        local_420[0x13] = local_420[0x17];
        local_420[0x12] = local_420[0x16];
        local_420[0x15] = local_420[0x19];
        local_420[0x14] = local_420[0x18];
        dVar5 = local_420[0x12];
        dVar8 = local_420[0x13];
        dVar9 = local_420[0x14];
        dVar10 = local_420[0x15];
        (*(code *)PTR__objc_msgSend_02578628)(local_420[0x32],PTR_s_setFrame__026ca960);
        (*(code *)PTR__objc_msgSend_02578628)(local_420[0x32],PTR_s_setHidden__026ca970,0);
        dVar4 = local_420[0x32];
        (*(code *)PTR__objc_msgSend_02578628)(dVar4,PTR_s_viewWithTag__026cabe0,0x24f6f9);
        _objc_retainAutoreleasedReturnValue();
        local_420[0x11] = dVar4;
        if ((local_420[0x11] == 0.0) || (local_420[0x65] != 0.0)) {
LAB_010e5940:
          local_598 = local_420[0x11];
          puVar7 = PTR__OBJC_CLASS___UIView_026cdfd8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
          dVar4 = local_598;
          (*(code *)PTR__objc_msgSend_02578628)(local_598,PTR_s_isKindOfClass__0269cd68,puVar7);
          if (((ulong)dVar4 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_420[0x32],PTR_s_bounds_026ca548);
            local_420[0xd] = dVar5;
            local_420[0xe] = dVar8;
            local_420[0xf] = dVar9;
            local_420[0x10] = dVar10;
            local_420[9] = local_420[0xe];
            local_420[8] = local_420[0xd];
            local_420[0xb] = local_420[0x10];
            local_420[10] = local_420[0xf];
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_420[8],local_420[9],local_420[10],local_420[0xb],local_420[0x11],
                       PTR_s_setFrame__026ca960);
          }
        }
        else {
          local_590 = local_420[0x11];
          puVar7 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
          dVar4 = local_590;
          (*(code *)PTR__objc_msgSend_02578628)(local_590,PTR_s_isKindOfClass__0269cd68,puVar7);
          if (((ulong)dVar4 & 1) != 0) goto LAB_010e5940;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_420[0x6d],PTR_s_fitEmoticonContent_onOverlay_res_026ae930,local_420[0x11]
                     ,local_420[0x32],0);
        }
        _objc_storeStrong(local_308,0);
      }
      *(undefined4 *)(local_420 + 0x66) = 1;
    }
    local_6a8 = 0;
    _objc_storeStrong(local_278);
    _objc_storeStrong(local_208,local_6a8);
    _objc_storeStrong(local_200,local_6a8);
    _objc_storeStrong(local_1f0,local_6a8);
  }
  local_6b0 = 0;
  _objc_storeStrong(local_78);
  _objc_storeStrong(local_70,local_6b0);
LAB_010e6244:
  local_6b8 = 0;
  _objc_storeStrong(local_50);
  _objc_storeStrong(local_48,local_6b8);
  _objc_storeStrong(local_40,local_6b8);
  _objc_storeStrong(&local_38,local_6b8);
  return;
}

