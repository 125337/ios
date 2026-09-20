// loadPreviewAvatarForSpecialKey:completion: @ 00eb2db0

/* Function Stack Size: 0x20 bytes */

void WCRefineAvatarFramePageOverlayHelper::loadPreviewAvatarForSpecialKey_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  long lVar1;
  ulong uVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *local_130;
  undefined4 local_128;
  undefined4 local_124;
  code *local_120;
  undefined *local_118;
  long local_110;
  undefined *local_108;
  undefined4 local_100;
  undefined4 local_fc;
  code *local_f8;
  undefined *local_f0;
  long local_e8;
  undefined *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  code *local_d0;
  undefined *local_c8;
  long local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined *local_98;
  long local_90;
  ID local_88;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  ID local_60;
  long local_58;
  ID local_50;
  undefined4 local_44;
  long local_40;
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3,param_3,param_4,param_5);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  if (local_40 == 0) {
    local_44 = 1;
  }
  else {
    uVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_isEqualToString__0269ccc8,&cf___wcr_af_plugin_hub__);
    if ((uVar2 & 1) == 0) {
      uVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_isEqualToString__0269ccc8,&cf___wcr_af_my_page__);
      if (((uVar2 & 1) == 0) &&
         (uVar2 = local_38,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_38,PTR_s_isEqualToString__0269ccc8,&cf___wcr_af_plugin_menu__),
         puVar6 = PTR___dispatch_main_q_02578680, (uVar2 & 1) == 0)) {
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        lVar1 = local_40;
        local_130 = PTR___NSConcreteStackBlock_02578660;
        local_128 = 0xc2000000;
        local_124 = 0;
        local_120 = FUN_00eb3724;
        local_118 = &DAT_025814c8;
        (*(code *)PTR__objc_retain_02578638)();
        local_110 = lVar1;
        _dispatch_async(puVar6,&local_130);
        (*(code *)PTR__objc_release_02578630)(puVar6);
        _objc_storeStrong(&local_110,0);
        local_44 = 0;
      }
      else {
        IVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selfContactAvatarURL_026ab1f8);
        _objc_retainAutoreleasedReturnValue();
        local_88 = IVar3;
        (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_length_0269cca0);
        puVar6 = PTR___dispatch_main_q_02578680;
        if (IVar3 == 0) {
          _objc_retainAutoreleaseReturnValue();
          _objc_retainAutoreleasedReturnValue();
          lVar1 = local_40;
          local_b0 = PTR___NSConcreteStackBlock_02578660;
          local_a8 = 0xc2000000;
          local_a4 = 0;
          local_a0 = FUN_00eb33c0;
          local_98 = &DAT_025814c8;
          (*(code *)PTR__objc_retain_02578638)();
          local_90 = lVar1;
          _dispatch_async(puVar6,&local_b0);
          (*(code *)PTR__objc_release_02578630)(puVar6);
          local_44 = 1;
          _objc_storeStrong(&local_90,0);
        }
        else {
          puVar4 = PTR__OBJC_CLASS___NSURL_026ce328;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_URLWithString__026a16d8,local_88);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR___dispatch_main_q_02578680;
          local_b8 = puVar4;
          if (puVar4 == (undefined *)0x0) {
            _objc_retainAutoreleaseReturnValue();
            _objc_retainAutoreleasedReturnValue();
            lVar1 = local_40;
            local_e0 = PTR___NSConcreteStackBlock_02578660;
            local_d8 = 0xc2000000;
            local_d4 = 0;
            local_d0 = FUN_00eb346c;
            local_c8 = &DAT_025814c8;
            (*(code *)PTR__objc_retain_02578638)();
            local_c0 = lVar1;
            _dispatch_async(puVar6,&local_e0);
            (*(code *)PTR__objc_release_02578630)(puVar6);
            local_44 = 1;
            _objc_storeStrong(&local_c0,0);
          }
          else {
            puVar4 = PTR__OBJC_CLASS___NSURLSession_026ce498;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSURLSession_026ce498,PTR_s_sharedSession_026a64c0);
            _objc_retainAutoreleasedReturnValue();
            lVar1 = local_40;
            puVar6 = local_b8;
            local_108 = PTR___NSConcreteStackBlock_02578660;
            local_100 = 0xc2000000;
            local_fc = 0;
            local_f8 = FUN_00eb34a4;
            local_f0 = &DAT_02581b60;
            (*(code *)PTR__objc_retain_02578638)();
            local_e8 = lVar1;
            puVar5 = puVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar4,PTR_s_dataTaskWithURL_completionHandle_026aaf48,puVar6,&local_108);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(puVar5);
            (*(code *)PTR__objc_release_02578630)(puVar4);
            local_44 = 1;
            _objc_storeStrong(&local_e8,0);
          }
          _objc_storeStrong(&local_b8,0);
        }
        _objc_storeStrong(&local_88,0);
      }
    }
    else {
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_syncPreviewAvatarImageForSpecial_026ab1f0,local_38);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR___dispatch_main_q_02578680;
      local_50 = IVar3;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = local_40;
      local_80 = PTR___NSConcreteStackBlock_02578660;
      local_78 = 0xc2000000;
      local_74 = 0;
      local_70 = FUN_00eb3384;
      local_68 = &DAT_0257ca68;
      (*(code *)PTR__objc_retain_02578638)();
      IVar3 = local_50;
      local_58 = lVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_60 = IVar3;
      _dispatch_async(puVar6,&local_80);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      local_44 = 1;
      _objc_storeStrong(&local_60);
      _objc_storeStrong(&local_58,0);
      _objc_storeStrong(&local_50,0);
    }
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

