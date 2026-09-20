// FUN_016bb3c0 @ 016bb3c0

void FUN_016bb3c0(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  byte local_180;
  ulong local_d0;
  undefined8 local_98;
  byte local_8a;
  byte local_89;
  undefined1 local_88;
  byte local_87;
  byte local_86;
  byte local_85;
  byte local_84;
  undefined1 local_83;
  byte local_82;
  byte local_81;
  ulong local_80;
  ulong local_78;
  byte local_6a;
  byte local_69;
  ulong local_68;
  byte local_60;
  byte local_5f;
  byte local_5e;
  byte local_5d;
  undefined1 local_5c;
  byte local_5b;
  byte local_5a;
  byte local_59;
  ulong local_58;
  ulong local_50;
  byte local_45;
  byte local_31;
  undefined8 local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  uVar3 = local_28;
  FUN_016bd240();
  local_31 = (byte)uVar3;
  uVar3 = local_28;
  FUN_016bd3d8();
  local_45 = (byte)uVar3;
  uVar3 = local_28;
  FUN_016bd4f8();
  _objc_retainAutoreleasedReturnValue();
  local_50 = uVar3;
  if ((local_31 & 1) == 0) {
    local_d0 = 0;
  }
  else {
    local_d0 = local_28;
    FUN_016bda90();
  }
  local_58 = local_d0;
  FUN_016bdb50();
  uVar2 = (uint)local_d0;
  local_59 = (byte)local_d0;
  FUN_016bdb6c();
  local_5a = (byte)uVar2;
  FUN_016bdc08();
  local_5b = (byte)uVar2;
  FUN_016bdce8();
  local_5c = (undefined1)uVar2;
  local_5d = (local_31 & 1) != 0 && local_58 == 1;
  local_5e = 0;
  if ((((local_31 & 1) != 0) && (local_5e = 0, (local_5a & 1) != 0)) &&
     (local_5e = 1, local_58 != 2)) {
    local_5e = local_59 ^ 1;
  }
  local_5e = local_5e & 1;
  local_5f = 0;
  if ((((local_31 & 1) != 0) && (local_5f = 0, (uVar2 & 1) != 0)) && (local_5f = 1, local_58 != 3))
  {
    local_5f = local_59 ^ 1;
  }
  local_5f = local_5f & 1;
  local_60 = 0;
  if ((((local_31 & 1) != 0) && (local_60 = 0, (local_5b & 1) != 0)) &&
     (local_60 = 1, local_58 != 4)) {
    local_60 = local_59 ^ 1;
  }
  local_60 = local_60 & 1;
  uVar3 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_pathExtension_0269e090);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_68 = uVar4;
  (*(code *)PTR__objc_release_02578630)(uVar3);
  uVar3 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_isEqualToString__0269ccc8,&cf_plist);
  local_69 = (byte)uVar3;
  uVar5 = local_30;
  FUN_016bca74(local_30,local_5d & 1,&cf_lp_restore_config,&cf_b_YMn_,&cf_download_filled,
               PTR_s_handleRestoreConfigFromZip__0269f8c8);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = local_30;
  local_30 = uVar5;
  (*(code *)PTR__objc_release_02578630)(uVar8);
  uVar5 = local_30;
  FUN_016bca74(local_30,local_5e & 1,&cf_lp_import_frame,&cf_OSWYX,&cf_cardholder_filled,
               PTR_s_WCRefine_onImportFrame__026a7770);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = local_30;
  local_30 = uVar5;
  (*(code *)PTR__objc_release_02578630)(uVar8);
  uVar5 = local_30;
  FUN_016bca74(local_30,local_5f & 1,&cf_lp_import_avatar,&cf_OSni_,&cf_icons_filled_album,
               PTR_s_WCRefine_onImportAvatarFrame__0269e1e0);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = local_30;
  local_30 = uVar5;
  (*(code *)PTR__objc_release_02578630)(uVar8);
  uVar5 = local_30;
  FUN_016bca74(local_30,local_60 & 1,&cf_lp_import_watermark,&cf_OS4lpS,&cf_icons_filled_album,
               PTR_s_WCRefine_onImportWatermark__026a7a38);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = local_30;
  local_30 = uVar5;
  (*(code *)PTR__objc_release_02578630)(uVar8);
  puVar6 = PTR_WCRefineLocalEmoticonStore_026ce440;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_isEnabled_026a0ef0);
  local_6a = 0;
  if (((((ulong)puVar6 & 1) != 0) && (local_6a = 0, (local_31 & 1) != 0)) &&
     (local_6a = 1, local_58 != 6)) {
    local_6a = local_59 ^ 1;
  }
  local_6a = local_6a & 1;
  uVar5 = local_30;
  FUN_016bca74(local_30,local_6a,&cf_lp_import_local_emoticon,&cf_OSh_,&cf_icons_outlined_sticker,
               PTR_s_WCRefine_onImportLocalEmoticon__026b2b30);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = local_30;
  local_30 = uVar5;
  (*(code *)PTR__objc_release_02578630)(uVar8);
  uVar3 = local_28;
  FUN_016bd4f8();
  _objc_retainAutoreleasedReturnValue();
  local_78 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_pathExtension_0269e090);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_80 = uVar4;
  (*(code *)PTR__objc_release_02578630)(uVar3);
  uVar3 = local_80;
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_isEqualToString__0269ccc8,&cf_png);
  local_180 = 1;
  if ((uVar3 & 1) == 0) {
    uVar3 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_isEqualToString__0269ccc8,&cf_jpg);
    local_180 = 1;
    if ((uVar3 & 1) == 0) {
      uVar3 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_isEqualToString__0269ccc8,&cf_jpeg);
      local_180 = 1;
      if ((uVar3 & 1) == 0) {
        uVar3 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_isEqualToString__0269ccc8,&cf_gif);
        local_180 = 1;
        if ((uVar3 & 1) == 0) {
          uVar3 = local_80;
          (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_isEqualToString__0269ccc8,&cf_webp);
          local_180 = 1;
          if ((uVar3 & 1) == 0) {
            uVar3 = local_80;
            (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_isEqualToString__0269ccc8,&cf_heic)
            ;
            local_180 = 1;
            if ((uVar3 & 1) == 0) {
              uVar3 = local_80;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_80,PTR_s_isEqualToString__0269ccc8,&cf_bmp);
              local_180 = (byte)uVar3;
            }
          }
        }
      }
    }
  }
  local_81 = local_180 & 1;
  puVar6 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_82 = 0;
  if (((((ulong)puVar7 & 1) != 0) && (local_82 = 1, local_58 != 7)) &&
     ((local_82 = 0, (local_59 & 1) == 0 && (local_82 = 1, (local_31 & 1) == 0)))) {
    local_82 = local_81;
  }
  (*(code *)PTR__objc_release_02578630)(puVar6);
  local_82 = local_82 & 1;
  uVar5 = local_30;
  FUN_016bca74(local_30,local_82,&cf_lp_import_superfloat,&cf__eQ_nm,
               &cf_icons_outlined_float_window_on,PTR_s_WCRefine_onImportSuperFloat__026a7f60);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = local_30;
  local_30 = uVar5;
  (*(code *)PTR__objc_release_02578630)(uVar8);
  puVar6 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)();
  bVar1 = ((ulong)puVar7 & 1) != 0 && ((local_45 & 1) != 0 || local_58 == 5);
  (*(code *)PTR__objc_release_02578630)(puVar6);
  uVar5 = local_30;
  local_83 = bVar1;
  FUN_016bca74(local_30,bVar1,&cf_lp_import_font,&cf_OSW_SO,&cf_icons_outlined_font,
               PTR_s_WCRefine_onImportFontBeautify__026b2b20);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = local_30;
  local_30 = uVar5;
  (*(code *)PTR__objc_release_02578630)(uVar8);
  uVar3 = local_28;
  FUN_016bddfc();
  local_84 = (byte)uVar3;
  puVar6 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_85 = 0;
  if (((ulong)puVar7 & 1) != 0) {
    local_85 = local_84;
  }
  (*(code *)PTR__objc_release_02578630)(puVar6);
  local_85 = local_85 & 1;
  uVar5 = local_30;
  FUN_016bca74(local_30,local_85,&cf_lp_import_todo,&cf__eQ_R,&cf_icons_outlined_done,
               PTR_s_WCRefine_onImportToDoHTML__026b2b28);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = local_30;
  local_30 = uVar5;
  (*(code *)PTR__objc_release_02578630)(uVar8);
  uVar3 = local_28;
  FUN_016bc52c();
  local_86 = (byte)uVar3;
  uVar3 = local_28;
  FUN_016aa360();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (((local_86 & 1) != 0) || (local_88 = false, (local_69 & 1) != 0)) {
    local_88 = uVar3 != 0;
  }
  uVar5 = local_30;
  local_87 = uVar3 != 0;
  FUN_016bca74(local_30,local_88,&cf_lp_message_repo,&cf_OSVY,&cf_icons_outlined_chats,
               PTR_s_WCRefine_onLongPressSaveToMessag_026b2b10);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = local_30;
  local_30 = uVar5;
  (*(code *)PTR__objc_release_02578630)(uVar8);
  puVar6 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_89 = 0;
  if (((ulong)puVar7 & 1) != 0) {
    local_89 = local_87;
  }
  (*(code *)PTR__objc_release_02578630)(puVar6);
  local_89 = local_89 & 1;
  puVar6 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_8a = 0;
  if (((ulong)puVar7 & 1) != 0) {
    local_8a = local_87;
  }
  (*(code *)PTR__objc_release_02578630)(puVar6);
  local_8a = local_8a & 1;
  uVar5 = local_30;
  FUN_016bca74(local_30,local_8a,&cf_lp_file_manager,&cf_eN_t,&cf_icons_filled_folder,
               PTR_s_WCRefine_onLongPressOpenFileMana_026b2b38);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = local_30;
  local_30 = uVar5;
  (*(code *)PTR__objc_release_02578630)(uVar8);
  uVar5 = local_30;
  FUN_016bca74(local_30,local_89 & 1,&cf_lp_repeat,&cf_Y,&cf_icons_filled_nearby_hot,
               PTR_s_WCRefine_onLongPressRepeat__026b2af0);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = local_30;
  local_30 = uVar5;
  (*(code *)PTR__objc_release_02578630)(uVar8);
  uVar8 = local_30;
  FUN_016bdf1c();
  _objc_retainAutoreleasedReturnValue();
  local_98 = uVar8;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_98);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(uVar8);
  return;
}

