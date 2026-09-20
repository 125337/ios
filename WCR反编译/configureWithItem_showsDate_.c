// configureWithItem:showsDate: @ 01bc63e4

/* Function Stack Size: 0x1c bytes */

void WCRMomentsAlbumCell::configureWithItem_showsDate_
               (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  ID IVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ID IVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *local_140;
  undefined4 local_138;
  undefined4 local_134;
  code *local_130;
  undefined *local_128;
  ulong local_120;
  ID local_118;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [8];
  undefined8 local_100;
  undefined1 auStack_f8 [24];
  undefined *local_e0;
  undefined1 auStack_d8 [8];
  undefined8 local_d0;
  ID local_c8;
  ulong local_c0;
  byte local_b1;
  ulong local_b0;
  uint local_a8;
  byte local_a1;
  undefined *local_a0;
  byte local_91;
  undefined *local_90;
  byte local_81;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  byte local_51;
  undefined *local_50;
  ulong local_48;
  byte local_3a;
  undefined1 local_39;
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_39 = (undefined1)param_4;
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_thumbnailOperation_026c0650);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setThumbnailOperation__026c0658,0);
  puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
  uVar4 = local_38;
  FUN_01bc758c();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = local_38;
  FUN_01bc7610();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_stringWithFormat__0269cca8,&cf______);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setBindTid__026c0660);
  (*(code *)PTR__objc_release_02578630)(puVar6);
  (*(code *)PTR__objc_release_02578630)(uVar5);
  (*(code *)PTR__objc_release_02578630)(uVar4);
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_thumbView_026aa820);
  _objc_retainAutoreleasedReturnValue();
  IVar7 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_traitCollection_026caba8);
  _objc_retainAutoreleasedReturnValue();
  FUN_01bc7694(IVar3);
  (*(code *)PTR__objc_release_02578630)(IVar7);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  puVar6 = PTR_WCRefineMomentsMonitor_026ce718;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineMomentsMonitor_026ce718,PTR_s_sharedInstance_0269cd30);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar6);
  local_3a = (byte)puVar8;
  uVar4 = local_38;
  FUN_01bc7c2c();
  _objc_retainAutoreleasedReturnValue();
  local_51 = 0;
  bVar1 = (local_3a & 1) != 0;
  local_48 = uVar4;
  if (bVar1) {
    puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__);
    _objc_retainAutoreleasedReturnValue();
    local_50 = puVar6;
  }
  IVar3 = local_28;
  local_51 = bVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_nameLabel_026ad1e8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  uVar4 = local_38;
  FUN_01bc7fd4();
  local_60 = uVar4;
  FUN_01bc8070();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = local_60;
  local_68 = uVar4;
  FUN_01bc81ec();
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_statusBadge_026c05d8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_release_02578630)(uVar5);
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_statusBadge_026c05d8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  uVar4 = local_68;
  uVar9 = DAT_02323f10;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_colorWithAlphaComponent__026ca578);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_statusBadge_026c05d8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_release_02578630)(uVar4);
  uVar4 = local_38;
  FUN_01bc82cc();
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_timeLabel_026aa818);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_release_02578630)(uVar4);
  uVar4 = local_38;
  FUN_01bc8424();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = local_38;
  local_70 = uVar4;
  FUN_01bc8564();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = local_38;
  local_78 = uVar5;
  FUN_01bc8670();
  uVar5 = local_78;
  local_80 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_count_0269cfe0);
  local_81 = uVar5 != 0 && (local_80 == 2 || local_80 == 3);
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_mediaContainer_026c0600);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_playIcon_026c0618);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_countBadge_026c0628);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  if ((local_81 & 1) == 0) {
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bodyLabel_026c05f0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bodyLabel_026c05f0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bodyLabel_026c05f0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    uVar4 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
    local_91 = 0;
    local_a1 = 0;
    if (uVar4 == 0) {
      puVar6 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_tertiaryLabelColor_026aa850);
      _objc_retainAutoreleasedReturnValue();
      local_a1 = 1;
      local_a0 = puVar6;
    }
    else {
      puVar6 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_labelColor_026ca778);
      _objc_retainAutoreleasedReturnValue();
      local_91 = 1;
      local_90 = puVar6;
    }
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bodyLabel_026c05f0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    if ((local_a1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_a0);
    }
    if ((local_91 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_90);
    }
    local_a8 = 1;
  }
  else {
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bodyLabel_026c05f0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bodyLabel_026c05f0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bodyLabel_026c05f0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    puVar6 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_labelColor_026ca778);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bodyLabel_026c05f0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    uVar4 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_firstObject_0269d1f8);
    _objc_retainAutoreleasedReturnValue();
    local_b0 = uVar4;
    FUN_01bc8988();
    local_b1 = (byte)uVar4;
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_playIcon_026c0618);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    uVar4 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_count_0269cfe0);
    if (1 < uVar4) {
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_countBadge_026c0628);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_count_0269cfe0);
      (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_stringWithFormat__0269cca8,&::cf__);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_countBadge_026c0628);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(puVar6);
    }
    pcVar2 = &cf_play_rectangle_fill;
    if ((local_b1 & 1) == 0) {
      pcVar2 = &cf_photo_fill;
    }
    puVar6 = PTR__OBJC_CLASS___UIImage_026cdfd0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_systemImageNamed__026cab78,pcVar2);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_thumbView_026aa820);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    puVar6 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_tertiaryLabelColor_026aa850);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_thumbView_026aa820);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_thumbView_026aa820);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    uVar4 = local_38;
    puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar6);
    uVar5 = local_38;
    bVar1 = (uVar4 & 1) != 0;
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_c0 = uVar5;
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bindTid_026c0670);
      _objc_retainAutoreleasedReturnValue();
      local_c8 = IVar3;
      FUN_01bc8a60();
      local_d0 = uVar9;
      _objc_initWeak(auStack_d8,local_28);
      puVar6 = PTR__OBJC_CLASS___NSBlockOperation_026cf428;
      _objc_alloc_init();
      local_e0 = puVar6;
      _objc_initWeak(auStack_f8,puVar6);
      puVar6 = local_e0;
      local_140 = PTR___NSConcreteStackBlock_02578660;
      local_138 = 0xc2000000;
      local_134 = 0;
      local_130 = FUN_01bc8b80;
      local_128 = &DAT_0258b6d0;
      _objc_copyWeak(auStack_110,auStack_f8);
      uVar4 = local_c0;
      (*(code *)PTR__objc_retain_02578638)();
      local_120 = uVar4;
      local_100 = local_d0;
      _objc_copyWeak(auStack_108,auStack_d8);
      IVar3 = local_c8;
      (*(code *)PTR__objc_retain_02578638)();
      local_118 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_addExecutionBlock__026c0680,&local_140);
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setThumbnailOperation__026c0658,local_e0)
      ;
      FUN_01bc9ba0();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      _objc_storeStrong(&local_118);
      _objc_destroyWeak(auStack_108);
      _objc_storeStrong(&local_120,0);
      _objc_destroyWeak(auStack_110);
      _objc_destroyWeak(auStack_f8);
      _objc_storeStrong(&local_e0,0);
      _objc_destroyWeak(auStack_d8);
      _objc_storeStrong(&local_c8,0);
      _objc_storeStrong(&local_c0,0);
    }
    local_a8 = (uint)!bVar1;
    _objc_storeStrong(&local_b0,0);
  }
  _objc_storeStrong(&local_78);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_38,0);
  return;
}

