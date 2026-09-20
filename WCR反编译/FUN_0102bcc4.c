// FUN_0102bcc4 @ 0102bcc4

void FUN_0102bcc4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *local_110;
  undefined4 local_108;
  undefined4 local_104;
  code *local_100;
  undefined *local_f8;
  undefined8 local_f0;
  undefined *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  code *local_d8;
  undefined *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  code *local_a8;
  undefined *local_a0;
  undefined8 local_98;
  long local_90;
  undefined4 local_84;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  long local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  undefined8 local_38;
  long local_30;
  long local_28;
  
  local_30 = 0;
  local_28 = param_1;
  _objc_storeStrong(&local_30);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = param_1;
  if ((local_40 == 0) &&
     (lVar3 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
     lVar3 != 0)) {
    lVar3 = *(long *)(param_1 + 0x40);
    (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_platformForURL__026ad950,local_30);
    local_90 = lVar3;
    if (lVar3 == 0) {
      local_90 = *(long *)(param_1 + 0x38);
    }
    uVar4 = *(ulong *)(param_1 + 0x40);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_platformAllowed__026adc10,local_90);
    lVar3 = local_30;
    uVar2 = local_38;
    puVar6 = PTR___dispatch_main_q_02578680;
    if ((uVar4 & 1) == 0) {
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      local_b8 = PTR___NSConcreteStackBlock_02578660;
      local_b0 = 0xc2000000;
      local_ac = 0;
      local_a8 = FUN_0102c6d0;
      local_a0 = &DAT_025814c8;
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      (*(code *)PTR__objc_retain_02578638)();
      local_98 = uVar2;
      _dispatch_async(puVar6,&local_b8);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      local_84 = 1;
      _objc_storeStrong(&local_98,0);
    }
    else {
      if (local_90 == 1) {
        uVar7 = *(undefined8 *)(param_1 + 0x40);
        uVar8 = *(undefined8 *)(param_1 + 0x20);
        bVar1 = *(byte *)(param_1 + 0x48);
        local_e8 = PTR___NSConcreteStackBlock_02578660;
        local_e0 = 0xc2000000;
        local_dc = 0;
        local_d8 = FUN_0102c7f4;
        local_d0 = &DAT_02584710;
        local_c0 = *(undefined8 *)(param_1 + 0x30);
        uVar5 = *(undefined8 *)(param_1 + 0x28);
        (*(code *)PTR__objc_retain_02578638)();
        local_c8 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar7,PTR_s_parseDouyinResolvedURL_sourceURL_026ade38,lVar3,uVar8,uVar2,bVar1 & 1
                   ,&local_e8);
        _objc_storeStrong(&local_c8,0);
      }
      else if (local_90 == 2) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (*(undefined8 *)(param_1 + 0x40),PTR_s_parseXHSResolvedURL_sourceURL_co_026ade40,
                   local_30,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
      }
      else if (local_90 == 3) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (*(undefined8 *)(param_1 + 0x40),PTR_s_parseBilibiliResolvedURL_sourceU_026ade48,
                   local_30,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
      }
      else if (local_90 == 4) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (*(undefined8 *)(param_1 + 0x40),PTR_s_parseXResolvedURL_sourceURL_comp_026ade30,
                   local_30,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
      }
      else if (local_90 == 5) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (*(undefined8 *)(param_1 + 0x40),PTR_s_parseTikTokResolvedURL_sourceURL_026ade50,
                   local_30,*(undefined8 *)(param_1 + 0x20),local_38,*(undefined8 *)(param_1 + 0x28)
                  );
      }
      else if (local_90 == 6) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (*(undefined8 *)(param_1 + 0x40),PTR_s_parseInstagramResolvedURL_source_026ade58,
                   local_30,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
      }
      else if (local_90 == 7) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (*(undefined8 *)(param_1 + 0x40),PTR_s_parseKuaishouResolvedURL_sourceU_026ade60,
                   local_30,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
      }
      else if (local_90 + -8 == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (*(undefined8 *)(param_1 + 0x40),PTR_s_parsePipixiaResolvedURL_sourceUR_026ade68,
                   local_30,*(undefined8 *)(param_1 + 0x20),local_38,*(undefined8 *)(param_1 + 0x28)
                  );
      }
      else {
        _objc_retainAutoreleaseReturnValue(local_90 + -8);
        _objc_retainAutoreleasedReturnValue();
        local_110 = PTR___NSConcreteStackBlock_02578660;
        local_108 = 0xc2000000;
        local_104 = 0;
        local_100 = FUN_0102c89c;
        local_f8 = &DAT_025814c8;
        uVar2 = *(undefined8 *)(param_1 + 0x28);
        (*(code *)PTR__objc_retain_02578638)();
        local_f0 = uVar2;
        _dispatch_async(puVar6,&local_110);
        (*(code *)PTR__objc_release_02578630)(puVar6);
        _objc_storeStrong(&local_f0,0);
      }
      local_84 = 0;
    }
  }
  else {
    puVar6 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = local_40;
    local_80 = PTR___NSConcreteStackBlock_02578660;
    local_78 = 0xc2000000;
    local_74 = 0;
    local_70 = FUN_0102c30c;
    local_68 = &DAT_02582d98;
    local_50 = *(undefined8 *)(param_1 + 0x38);
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = lVar3;
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = uVar2;
    _dispatch_async(puVar6,&local_80);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    local_84 = 1;
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return;
}

