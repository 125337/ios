// parseURL:cardPlaybackEnough:completion: @ 0102b514

/* Function Stack Size: 0x24 bytes */

void WCRefineLinkParser::parseURL_cardPlaybackEnough_completion_
               (ID param_1,SEL param_2,ID param_3,bool param_4,ID param_5,undefined4 param_6)

{
  long lVar1;
  undefined8 uVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 in_d0;
  uint local_18c;
  uint local_124;
  undefined *local_120;
  undefined4 local_118;
  undefined4 local_114;
  code *local_110;
  undefined *local_108;
  undefined8 local_100;
  long local_f8;
  undefined8 local_f0;
  ID local_e8;
  ID local_e0;
  byte local_d8;
  byte local_d1;
  undefined8 local_d0;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  code *local_b8;
  undefined *local_b0;
  long local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined4 local_8c;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  long local_68;
  byte local_59;
  ID local_58;
  undefined8 local_50;
  long local_48;
  byte local_39;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_39 = (byte)param_4;
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  _CFAbsoluteTimeGetCurrent();
  IVar3 = local_28;
  local_50 = in_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_platformForURL__026ad950,local_38);
  local_124 = 0;
  local_58 = IVar3;
  if (IVar3 != 0) {
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_platformAllowed__026adc10,IVar3);
    local_124 = (uint)IVar4;
  }
  puVar5 = PTR___dispatch_main_q_02578680;
  local_59 = (byte)local_124 & 1;
  if ((local_124 & 1) == 0) {
    if (local_48 != 0) {
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = local_48;
      local_88 = PTR___NSConcreteStackBlock_02578660;
      local_80 = 0xc2000000;
      local_7c = 0;
      local_78 = FUN_0102ba64;
      local_70 = &DAT_025814c8;
      (*(code *)PTR__objc_retain_02578638)();
      local_68 = lVar1;
      _dispatch_async(puVar5,&local_88);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      _objc_storeStrong(&local_68,0);
    }
    local_8c = 1;
  }
  else {
    puVar5 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_98 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_autoParseLinkCustomAPIEnabled_026ade18);
    if (((ulong)puVar5 & 1) == 0) {
      local_d1 = 0;
      local_18c = 0;
      if (local_58 == 4) {
        uVar7 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_lowercaseString_0269d9c0);
        _objc_retainAutoreleasedReturnValue();
        local_d1 = 1;
        local_d0 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_18c = (uint)uVar7 ^ 1;
      }
      if ((local_d1 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_d0);
      }
      IVar3 = local_28;
      uVar7 = local_38;
      lVar1 = local_48;
      if ((local_18c & 1) == 0) {
        local_120 = PTR___NSConcreteStackBlock_02578660;
        local_118 = 0xc2000000;
        local_114 = 0;
        local_110 = FUN_0102bcc4;
        local_108 = &DAT_02584740;
        local_f0 = local_50;
        local_e8 = local_58;
        (*(code *)PTR__objc_retain_02578638)();
        uVar2 = local_38;
        local_f8 = lVar1;
        local_e0 = local_28;
        (*(code *)PTR__objc_retain_02578638)();
        local_100 = uVar2;
        local_d8 = local_39 & 1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar3,PTR_s_resolveRedirects_completion__026ade70,uVar7,&local_120);
        _objc_storeStrong(&local_100);
        _objc_storeStrong(&local_f8,0);
        local_8c = 0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_parseXResolvedURL_sourceURL_comp_026ade30,local_38,local_38,
                   local_48);
        local_8c = 1;
      }
    }
    else {
      puVar6 = local_98;
      (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_autoParseLinkCustomAPIURL_026ade20);
      _objc_retainAutoreleasedReturnValue();
      local_a0 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_length_0269cca0);
      puVar5 = PTR___dispatch_main_q_02578680;
      if (puVar6 == (undefined *)0x0) {
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        lVar1 = local_48;
        local_c8 = PTR___NSConcreteStackBlock_02578660;
        local_c0 = 0xc2000000;
        local_bc = 0;
        local_b8 = FUN_0102bb88;
        local_b0 = &DAT_025814c8;
        (*(code *)PTR__objc_retain_02578638)();
        local_a8 = lVar1;
        _dispatch_async(puVar5,&local_c8);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        local_8c = 1;
        _objc_storeStrong(&local_a8,0);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_parseViaCustomAPIURL_sourceURL_p_026ade28,local_a0,local_38,
                   local_58,local_48);
        local_8c = 1;
      }
      _objc_storeStrong(&local_a0,0);
    }
    _objc_storeStrong(&local_98,0);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_38,0);
  return;
}

