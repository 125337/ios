// sendParseResult:toUsr:askQuality:sendChoice:completion: @ 0100ba2c

/* Function Stack Size: 0x34 bytes */

void WCRefineLinkMediaSender::sendParseResult_toUsr_askQuality_sendChoice_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,bool param_5,long_long param_6,
               ID param_7,undefined4 param_8)

{
  bool bVar1;
  byte bVar2;
  undefined *puVar3;
  long lVar4;
  ID IVar5;
  ID IVar6;
  undefined *puVar7;
  ID IVar8;
  ID IVar9;
  byte local_1ac;
  ID local_170;
  ID local_148;
  ID local_140;
  undefined *local_138;
  undefined4 local_130;
  undefined4 local_12c;
  code *local_128;
  undefined *local_120;
  undefined *local_118;
  ID local_110;
  ID local_108;
  long local_100;
  ID local_f8;
  byte local_f0;
  ID local_e8;
  byte local_d9;
  ID local_d8;
  byte local_cc;
  byte local_cb;
  byte local_ca;
  byte local_c9;
  ID local_c8;
  byte local_b9;
  ID local_b8;
  byte local_a9;
  ID local_a8;
  byte local_9a;
  byte local_99;
  ID local_98;
  byte local_8a;
  byte local_89;
  ID local_88;
  byte local_79;
  undefined *local_78;
  undefined4 local_70;
  byte local_69;
  ID local_68;
  ID local_60;
  long local_58;
  long_long local_50;
  byte local_41;
  ID local_40;
  ID local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_41 = (byte)param_5;
  local_58 = 0;
  local_50 = param_6;
  _objc_storeStrong(&local_58,param_7);
  IVar6 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  local_69 = 0;
  if (IVar6 == 0) {
    local_170 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentChatUsername_0269dba0);
    _objc_retainAutoreleasedReturnValue();
    local_68 = local_170;
  }
  else {
    local_170 = local_40;
  }
  local_69 = IVar6 == 0;
  (*(code *)PTR__objc_retain_02578638)();
  local_60 = local_170;
  if ((local_69 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  IVar6 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
  if ((IVar6 == 0) ||
     (IVar6 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_hasMedia_026ada58),
     (IVar6 & 1) == 0)) {
    if (local_58 != 0) {
      (**(code **)(local_58 + 0x10))(local_58,0,&cf_eZSOSS);
    }
    local_70 = 1;
    goto LAB_0100c758;
  }
  if (local_50 == 1) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_performSendParseResult_toUsr_pre_026adac0,local_38,local_60,0,1,
               local_58);
    local_70 = 1;
    goto LAB_0100c758;
  }
  if (local_50 == 2) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_performSendParseResult_toUsr_pre_026adac0,local_38,local_60,0,2,
               local_58);
    local_70 = 1;
    goto LAB_0100c758;
  }
  if (local_50 == 3) {
    IVar6 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_imageURLs_026adac8);
    _objc_retainAutoreleasedReturnValue();
    IVar8 = IVar6;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar6);
    if (IVar8 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_finishProgressToastSuccess_text__026ad9e0,0,&cf_lgg0RVGr);
      if (local_58 != 0) {
        (**(code **)(local_58 + 0x10))(local_58,0,&cf_lgg0RVGr);
      }
      local_70 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setIsImageNote__026adad0,1);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_performSendParseResult_toUsr_pre_026adac0,local_38,local_60,0,0,
                 local_58);
      local_70 = 1;
    }
    goto LAB_0100c758;
  }
  puVar7 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  IVar6 = local_38;
  local_78 = puVar7;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isImageNote_026ad960);
  local_89 = 0;
  bVar1 = false;
  if ((IVar6 & 1) != 0) {
    IVar6 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_imageURLs_026adac8);
    _objc_retainAutoreleasedReturnValue();
    local_89 = 1;
    local_88 = IVar6;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = IVar6 != 0;
  }
  if ((local_89 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_88);
  }
  IVar6 = local_38;
  local_79 = bVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_videoURL_026ad970);
  _objc_retainAutoreleasedReturnValue();
  IVar8 = IVar6;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_99 = 0;
  if (IVar8 == 0) {
    IVar8 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_videoVariants_026ada88);
    _objc_retainAutoreleasedReturnValue();
    local_99 = 1;
    local_98 = IVar8;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar2 = 0;
    if (IVar8 != 0) goto LAB_0100bf34;
  }
  else {
LAB_0100bf34:
    bVar2 = local_79 ^ 1;
  }
  if ((local_99 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_98);
  }
  (*(code *)PTR__objc_release_02578630)(IVar6);
  local_8a = bVar2 & 1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineLinkParser_026ce168,PTR_s_ensureDouyinBrowserPlaybackURLFo_026ad9e8,
             local_38);
  local_a9 = 0;
  local_b9 = 0;
  local_c9 = 0;
  local_1ac = 0;
  if ((local_79 & 1) == 0) {
    IVar6 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_videoURL_026ad970);
    _objc_retainAutoreleasedReturnValue();
    local_a9 = 1;
    local_a8 = IVar6;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (IVar6 == 0) {
      IVar6 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_resolvedURL_026ad978);
      _objc_retainAutoreleasedReturnValue();
      local_b9 = 1;
      local_b8 = IVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (IVar6 == 0) {
        IVar6 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_sourceURL_026ad980);
        _objc_retainAutoreleasedReturnValue();
        local_c9 = 1;
        local_c8 = IVar6;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_1ac = 0;
        if (IVar6 == 0) goto LAB_0100c128;
      }
    }
    IVar6 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_shouldOfferLinkCardForResult__026ad9f0,local_38);
    local_1ac = (byte)IVar6;
  }
LAB_0100c128:
  if ((local_c9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_c8);
  }
  if ((local_b9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_b8);
  }
  if ((local_a9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_a8);
  }
  local_9a = local_1ac & 1;
  puVar7 = local_78;
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_autoParseLinkSendLinkCardEnabled_0269dbf0);
  local_ca = 0;
  if (((ulong)puVar7 & 1) != 0) {
    local_ca = local_9a;
  }
  local_ca = local_ca & 1;
  puVar7 = local_78;
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_autoParseLinkSendVideoEnabled_026adad8);
  local_cb = 0;
  if (((ulong)puVar7 & 1) != 0) {
    local_cb = local_8a;
  }
  local_cb = local_cb & 1;
  local_d9 = 0;
  bVar2 = 0;
  if ((local_41 & 1) != 0) {
    puVar7 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_autoParseLinkDefaultBestQualityE_026ada98);
    bVar2 = 0;
    if ((((ulong)puVar7 & 1) == 0) && (((local_cb & 1) != 0 || (bVar2 = 0, (local_ca & 1) != 0)))) {
      IVar6 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_videoVariants_026ada88);
      _objc_retainAutoreleasedReturnValue();
      local_d9 = 1;
      local_d8 = IVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar2 = 1;
      if (IVar6 == 0) {
        bVar2 = local_ca;
      }
    }
  }
  if ((local_d9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_d8);
  }
  local_cc = bVar2 & 1;
  if ((((local_41 & 1) == 0) &&
      (puVar7 = local_78,
      (*(code *)PTR__objc_msgSend_02578628)
                (local_78,PTR_s_autoParseLinkDefaultSendCardEnab_0269dbb8), IVar5 = local_28,
      IVar8 = local_38, IVar6 = local_60, ((ulong)puVar7 & 1) != 0)) && ((local_9a & 1) != 0)) {
    IVar9 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_videoURL_026ad970);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar5,PTR_s_performSendParseResult_toUsr_pre_026adac0,IVar8,IVar6,IVar9,3,local_58);
    (*(code *)PTR__objc_release_02578630)(IVar9);
    local_70 = 1;
  }
  else if ((local_cc & 1) == 0) {
    IVar6 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_videoURL_026ad970);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = local_78;
    local_140 = IVar6;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_autoParseLinkDefaultBestQualityE_026ada98);
    if (((ulong)puVar7 & 1) != 0) {
      IVar6 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_bestVideoVariantFromResult__026adaa0,local_38);
      _objc_retainAutoreleasedReturnValue();
      local_148 = IVar6;
      (*(code *)PTR__objc_msgSend_02578628)(IVar6,PTR_s_url_026a5a28);
      _objc_retainAutoreleasedReturnValue();
      IVar8 = IVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar6);
      if (IVar8 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_selectVideoVariant__026adaf0,local_148)
        ;
        IVar8 = local_148;
        (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_url_026a5a28);
        _objc_retainAutoreleasedReturnValue();
        IVar6 = local_140;
        local_140 = IVar8;
        (*(code *)PTR__objc_release_02578630)(IVar6);
      }
      _objc_storeStrong(&local_148,0);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_performSendParseResult_toUsr_pre_026adac0,local_38,local_60,local_140,
               0,local_58);
    _objc_storeStrong(&local_140,0);
    local_70 = 0;
  }
  else {
    IVar6 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_videoVariants_026ada88);
    _objc_retainAutoreleasedReturnValue();
    local_e8 = IVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3fc3333333333333,local_28,PTR_s_updateProgressToast__026ad910);
    puVar3 = local_78;
    IVar6 = local_e8;
    puVar7 = PTR_WCRefineLinkParser_026ce168;
    local_138 = PTR___NSConcreteStackBlock_02578660;
    local_130 = 0xc2000000;
    local_12c = 0;
    local_128 = FUN_0100c79c;
    local_120 = &DAT_02584310;
    local_f8 = local_28;
    (*(code *)PTR__objc_retain_02578638)();
    IVar5 = local_38;
    local_118 = puVar3;
    (*(code *)PTR__objc_retain_02578638)();
    IVar8 = local_60;
    local_110 = IVar5;
    (*(code *)PTR__objc_retain_02578638)();
    lVar4 = local_58;
    local_108 = IVar8;
    (*(code *)PTR__objc_retain_02578638)();
    local_100 = lVar4;
    local_f0 = local_ca & 1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar7,PTR_s_probeVideoVariantSizes_completio_026adab0,IVar6,&local_138);
    local_70 = 1;
    _objc_storeStrong(&local_100);
    _objc_storeStrong(&local_108,0);
    _objc_storeStrong(&local_110,0);
    _objc_storeStrong(&local_118,0);
    _objc_storeStrong(&local_e8,0);
  }
  _objc_storeStrong(&local_78,0);
LAB_0100c758:
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

