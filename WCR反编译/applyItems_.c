// applyItems: @ 01afc95c

/* Function Stack Size: 0x18 bytes */

void __thiscall
WCRefineHomeAvatarStripView::applyItems_
          (WCRefineHomeAvatarStripView *this,ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ID IVar7;
  long lVar8;
  long lVar9;
  undefined8 in_d0;
  undefined8 uVar10;
  undefined *local_4d8;
  undefined *local_4d0;
  ulong local_3c8;
  ulong local_3c0;
  ulong local_380;
  ulong local_378;
  long local_358;
  undefined *local_348;
  undefined4 local_340;
  undefined4 local_33c;
  code *local_338;
  undefined *local_330;
  undefined1 auStack_328 [8];
  undefined *local_320;
  undefined4 local_318;
  undefined4 local_314;
  code *local_310;
  undefined *local_308;
  undefined1 auStack_300 [8];
  ID local_2f8;
  undefined1 auStack_2f0 [8];
  long local_2e8;
  long *local_2e0;
  undefined8 local_2b0;
  ulong local_2a8;
  undefined *local_2a0;
  byte local_291;
  ulong local_290;
  undefined *local_288 [3];
  undefined1 auStack_270 [8];
  long local_268;
  long *local_260;
  ulong local_230;
  undefined1 auStack_228 [8];
  undefined8 local_220;
  byte local_212;
  byte local_211;
  undefined *local_210;
  undefined1 auStack_208 [8];
  long local_200;
  long *local_1f8;
  undefined8 local_1c8;
  long local_1c0;
  SEL local_1b8;
  ID local_1b0;
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1c0 = 0;
  local_1b8 = param_2;
  local_1b0 = param_1;
  _objc_storeStrong(&local_1c0,param_3);
  if (local_1c0 == 0) {
    local_358 = *(long *)PTR____NSArray0___02578280;
  }
  else {
    local_358 = local_1c0;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_setItems__026a17a8,local_358);
  _memset(auStack_208,0,0x40);
  IVar2 = local_1b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_cellViews_026be660);
  _objc_retainAutoreleasedReturnValue();
  local_378 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_378 != 0) {
    lVar8 = *local_1f8;
    local_380 = 0;
    do {
      do {
        if (*local_1f8 - lVar8 != 0) {
          _objc_enumerationMutation(*local_1f8 - lVar8,IVar2);
        }
        local_1c8 = *(undefined8 *)(local_200 + local_380 * 8);
        (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_removeFromSuperview_026ca800);
        local_380 = local_380 + 1;
      } while (local_380 < local_378);
      local_378 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_208,auStack_a8,0x10);
      local_380 = 0;
    } while (local_378 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_1b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_cellViews_026be660);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_210 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_homeAvatarStripShowRemark_026a2438);
  local_211 = (byte)puVar3;
  puVar3 = local_210;
  (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_homeAvatarStripShowUnread_026a2430);
  local_212 = (byte)puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_homeAvatarStripAvatarSize_026a23f0);
  local_220 = in_d0;
  _objc_initWeak(auStack_228,local_1b0);
  _memset(auStack_270,0,0x40);
  IVar2 = local_1b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_items_0269e4b0);
  _objc_retainAutoreleasedReturnValue();
  local_3c0 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_3c0 != 0) {
    lVar8 = *local_260;
    local_3c8 = 0;
    do {
      do {
        if (*local_260 - lVar8 != 0) {
          _objc_enumerationMutation(*local_260 - lVar8,IVar2);
        }
        local_230 = *(ulong *)(local_268 + local_3c8 * 8);
        puVar3 = PTR_WCRefineHomeAvatarStripCellView_026cf360;
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)
                  (*(undefined8 *)PTR__CGRectZero_025782f0,
                   *(undefined8 *)(PTR__CGRectZero_025782f0 + 8),
                   *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10),
                   *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18),puVar3,
                   PTR_s_initWithFrame__026ca6e8);
        uVar4 = local_230;
        local_288[0] = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)(local_230,PTR_s_username_026a2238);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_288[0],PTR_s_setUsername__026a2510);
        (*(code *)PTR__objc_release_02578630)(uVar4);
        uVar10 = local_220;
        (*(code *)PTR__objc_msgSend_02578628)(local_288[0],PTR_s_setAvatarSize__026b1540);
        (*(code *)PTR__objc_msgSend_02578628)(local_230,PTR_s_verticalOffset_026be628);
        (*(code *)PTR__objc_msgSend_02578628)(local_288[0],PTR_s_setVerticalOffset__026be6d8);
        (*(code *)PTR__objc_msgSend_02578628)(local_230,PTR_s_horizontalOffset_026be6e0);
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar10,local_288[0],PTR_s_setHorizontalOffset__026be6e8);
        local_291 = 0;
        bVar1 = (local_211 & 1) != 0;
        if (bVar1) {
          uVar4 = local_230;
          (*(code *)PTR__objc_msgSend_02578628)(local_230,PTR_s_displayName_026ac378);
          _objc_retainAutoreleasedReturnValue();
          local_290 = uVar4;
        }
        puVar3 = local_288[0];
        local_291 = bVar1;
        (*(code *)PTR__objc_msgSend_02578628)(local_288[0],PTR_s_nameLabel_026ad1e8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar3);
        if ((local_291 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_290);
        }
        puVar3 = local_288[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_288[0],PTR_s_nameLabel_026ad1e8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar3);
        puVar3 = local_288[0];
        uVar4 = local_230;
        (*(code *)PTR__objc_msgSend_02578628)(local_230,PTR_s_unreadCount_026a3080);
        uVar5 = local_230;
        (*(code *)PTR__objc_msgSend_02578628)(local_230,PTR_s_unreadAsRedDot_026be6f0);
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_applyBadgeUnread_asRedDot_show__026be6f8,uVar4,uVar5 & 0xffffffff,
                   local_212 & 1);
        local_2a0 = (undefined *)0x0;
        uVar4 = local_230;
        (*(code *)PTR__objc_msgSend_02578628)(local_230,PTR_s_customAvatarPath_026be738);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        FUN_01afd808();
        _objc_retainAutoreleasedReturnValue();
        local_2a8 = uVar5;
        (*(code *)PTR__objc_release_02578630)(uVar4);
        uVar4 = local_2a8;
        (*(code *)PTR__objc_msgSend_02578628)(local_2a8,PTR_s_length_0269cca0);
        if (uVar4 != 0) {
          puVar6 = PTR__OBJC_CLASS___UIImage_026cdfd0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithContentsOfFile__0269e0e0,
                     local_2a8);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = local_2a0;
          local_2a0 = puVar6;
          (*(code *)PTR__objc_release_02578630)(puVar3);
        }
        _memset(auStack_2f0,0,0x40);
        puVar3 = local_288[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_288[0],PTR_s_avatarHost_026b1098);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)(puVar3);
        local_4d0 = puVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2f0,auStack_1a8,
                   0x10);
        if (local_4d0 != (undefined *)0x0) {
          lVar9 = *local_2e0;
          local_4d8 = (undefined *)0x0;
          do {
            do {
              if (*local_2e0 - lVar9 != 0) {
                _objc_enumerationMutation(*local_2e0 - lVar9,puVar6);
              }
              local_2b0 = *(undefined8 *)(local_2e8 + (long)local_4d8 * 8);
              (*(code *)PTR__objc_msgSend_02578628)(local_2b0,PTR_s_removeFromSuperview_026ca800);
              local_4d8 = local_4d8 + 1;
            } while (local_4d8 < local_4d0);
            local_4d0 = puVar6;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2f0,
                       auStack_1a8,0x10);
            local_4d8 = (undefined *)0x0;
          } while (local_4d0 != (undefined *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar6);
        IVar7 = local_1b0;
        uVar4 = local_230;
        (*(code *)PTR__objc_msgSend_02578628)(local_230,PTR_s_username_026a2238);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_220,IVar7,PTR_s_nativeHeadViewForUsername_size_a_026be740,uVar4,
                   local_2a0 == (undefined *)0x0);
        _objc_retainAutoreleasedReturnValue();
        local_2f8 = IVar7;
        (*(code *)PTR__objc_release_02578630)(uVar4);
        (*(code *)PTR__objc_msgSend_02578628)(local_2f8,PTR_s_setAutoresizingMask__026ca878,0);
        if (local_2a0 == (undefined *)0x0) {
          _objc_setAssociatedObject(local_2f8,&DAT_028e4570,0,1);
        }
        else {
          _objc_setAssociatedObject(local_2f8,&DAT_028e4570,local_2a0,1);
          FUN_01af1d5c(local_2f8,local_2a0);
        }
        puVar3 = local_288[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_288[0],PTR_s_avatarHost_026b1098);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar3);
        local_320 = PTR___NSConcreteStackBlock_02578660;
        local_318 = 0xc2000000;
        local_314 = 0;
        local_310 = FUN_01afdf90;
        local_308 = &DAT_0257c558;
        _objc_copyWeak(auStack_300,auStack_228);
        (*(code *)PTR__objc_msgSend_02578628)(local_288[0],PTR_s_setOnTap__026be750,&local_320);
        local_348 = PTR___NSConcreteStackBlock_02578660;
        local_340 = 0xc2000000;
        local_33c = 0;
        local_338 = FUN_01afe084;
        local_330 = &DAT_0257c588;
        _objc_copyWeak(auStack_328,auStack_228);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_288[0],PTR_s_setOnLongPress__026aaa20,&local_348);
        IVar7 = local_1b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_cardContainer_026be658);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar7);
        IVar7 = local_1b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_cellViews_026be660);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar7);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_288[0],PTR_s_forceAvatarGeometryReapplyFrame__026be610,1);
        _objc_destroyWeak(auStack_328);
        _objc_destroyWeak(auStack_300);
        _objc_storeStrong(&local_2f8);
        _objc_storeStrong(&local_2a8,0);
        _objc_storeStrong(&local_2a0,0);
        _objc_storeStrong(local_288,0);
        local_3c8 = local_3c8 + 1;
      } while (local_3c8 < local_3c0);
      local_3c0 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_270,auStack_128,0x10)
      ;
      local_3c8 = 0;
    } while (local_3c0 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_updateChrome_026be690);
  (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_updateBackgroundMediaIfNeeded_026be698);
  (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_wcr_scheduleColdStartCatchUp_026be708);
  (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_setNeedsLayout_0269deb8);
  _objc_destroyWeak(auStack_228);
  _objc_storeStrong(&local_210);
  _objc_storeStrong(&local_1c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

