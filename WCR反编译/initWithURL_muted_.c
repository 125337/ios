// initWithURL:muted: @ 0013bc84

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x1c bytes */

ID WCRAttachmentVideoBackgroundView::initWithURL_muted_
             (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  undefined4 uVar1;
  ID *pIVar2;
  undefined8 **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  code *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined *local_98;
  undefined4 local_90;
  undefined8 *local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  byte local_41;
  undefined8 local_40;
  SEL local_38;
  ID *local_30;
  ID *local_28;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = (ID *)param_1;
  _objc_storeStrong(&local_40,param_3);
  local_41 = (byte)param_4;
  local_80 = local_30;
  uStack_68 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 8);
  local_70 = *(undefined8 *)PTR__CGRectZero_025782f0;
  uStack_58 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18);
  local_60 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10);
  local_30 = (ID *)0x0;
  ppuVar3 = &local_80;
  local_78 = PTR_WCRAttachmentVideoBackgroundView_026cf858;
  _objc_msgSendSuper2(local_70,uStack_68,local_60,uStack_58,ppuVar3,PTR_s_initWithFrame__026ca6e8);
  local_30 = (ID *)ppuVar3;
  _objc_storeStrong(&local_30);
  if ((undefined8 **)local_30 == (undefined8 **)0x0) {
    local_28 = (ID *)0x0;
    local_90 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setUrl__0269f250,local_40);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setMuted__0269f258,local_41 & 1);
    puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setClipsToBounds__026ca8c8,1);
    puVar4 = PTR__OBJC_CLASS___AVPlayerItem_026ce300;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___AVPlayerItem_026ce300,PTR_s_playerItemWithURL__0269f260,local_40);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___AVPlayer_026ce308;
    local_98 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___AVPlayer_026ce308,PTR_s_playerWithPlayerItem__0269f268,puVar4);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setPlayer__0269f270);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    ppuVar3 = (undefined8 **)local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_player_0269f278);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(ppuVar3);
    uVar1 = 0;
    if ((local_41 & 1) == 0) {
      uVar1 = 0x3f800000;
    }
    ppuVar3 = (undefined8 **)local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_player_0269f278);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar1);
    (*(code *)PTR__objc_release_02578630)(ppuVar3);
    ppuVar3 = (undefined8 **)local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setPlayerLayer__0269f288);
    (*(code *)PTR__objc_release_02578630)(ppuVar3);
    ppuVar3 = (undefined8 **)local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_player_0269f278);
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = (undefined8 **)local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_playerLayer_0269f290);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(ppuVar6);
    (*(code *)PTR__objc_release_02578630)(ppuVar3);
    ppuVar3 = (undefined8 **)local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_playerLayer_0269f290);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(ppuVar3);
    _objc_initWeak(auStack_a0,local_30);
    puVar5 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = local_98;
    uVar9 = *(undefined8 *)PTR__AVPlayerItemDidPlayToEndTimeNotification_025785a0;
    puVar7 = PTR__OBJC_CLASS___NSOperationQueue_026ce110;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSOperationQueue_026ce110,PTR_s_mainQueue_026ca7a0);
    _objc_retainAutoreleasedReturnValue();
    local_c8 = PTR___NSConcreteStackBlock_02578660;
    local_c0 = 0xc2000000;
    local_bc = 0;
    local_b8 = FUN_0013c570;
    local_b0 = &DAT_0257a488;
    _objc_copyWeak(auStack_a8,auStack_a0);
    puVar8 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_addObserverForName_object_queue__026ca4b0,uVar9,puVar4,puVar7,&local_c8)
    ;
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setEndObserver__0269f2b8);
    (*(code *)PTR__objc_release_02578630)(puVar8);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    pIVar2 = local_30;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = pIVar2;
    local_90 = 1;
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_a0);
    _objc_storeStrong(&local_98,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,0);
  return (ID)(undefined8 **)local_28;
}

