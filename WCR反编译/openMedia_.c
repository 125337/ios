// openMedia: @ 01bce744

/* Function Stack Size: 0x18 bytes */

void WCRMomentsCacheDetailViewController::openMedia_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *local_98;
  ulong local_90;
  ID local_88;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  ID local_50;
  ID local_48;
  undefined4 local_3c;
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  uVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_tag_026cab98);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_mediaActions_026c0698);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if (uVar1 < IVar3) {
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_mediaActions_026c0698);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_tag_026cab98);
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_objectAtIndexedSubscript__0269cc78,uVar1);
    _objc_retainAutoreleasedReturnValue();
    local_48 = IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_objectForKeyedSubscript__0269d098,&cf_video);
    _objc_retainAutoreleasedReturnValue();
    local_50 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_length_0269cca0);
    if (IVar2 == 0) {
      IVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_objectForKeyedSubscript__0269d098,&cf_imagePath);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_88 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_isKindOfClass__0269cd68,puVar6);
      if (((IVar2 & 1) == 0) ||
         (IVar2 = local_88, (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0),
         IVar2 == 0)) {
        local_3c = 1;
      }
      else {
        uVar1 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_imageForState__0269edf0,0);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR_WCRMomentsCacheImageViewController_026cf430;
        local_90 = uVar1;
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)();
        IVar2 = local_28;
        local_98 = puVar6;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationController_0269d458);
        _objc_retainAutoreleasedReturnValue();
        FUN_01bcec58();
        (*(code *)PTR__objc_release_02578630)(IVar2);
        _objc_storeStrong(&local_98);
        _objc_storeStrong(&local_90,0);
        local_3c = 0;
      }
      _objc_storeStrong(&local_88,0);
    }
    else {
      puVar4 = PTR__OBJC_CLASS___AVPlayerViewController_026cf1b8;
      _objc_alloc_init();
      puVar6 = PTR__OBJC_CLASS___AVPlayer_026ce308;
      puVar5 = PTR__OBJC_CLASS___NSURL_026ce328;
      local_58 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_50);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_playerWithURL__026a1b60);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setPlayer__0269f270);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      IVar2 = local_28;
      puVar6 = local_58;
      local_80 = PTR___NSConcreteStackBlock_02578660;
      local_78 = 0xc2000000;
      local_74 = 0;
      local_70 = FUN_01bcebe8;
      local_68 = &DAT_0257a800;
      (*(code *)PTR__objc_retain_02578638)();
      local_60 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_presentViewController_animated_c_0269d2b0,puVar6,1,&local_80);
      local_3c = 1;
      _objc_storeStrong(&local_60);
      _objc_storeStrong(&local_58,0);
    }
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
  }
  else {
    local_3c = 1;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

