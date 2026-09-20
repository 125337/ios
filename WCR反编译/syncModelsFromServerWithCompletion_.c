// syncModelsFromServerWithCompletion: @ 015949d8

/* Function Stack Size: 0x18 bytes */

void WCRefineVoiceCloneHelper::syncModelsFromServerWithCompletion_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  code *local_b0;
  undefined *local_a8;
  undefined **local_a0;
  ID local_98;
  undefined *local_90;
  ID local_88;
  ID local_80;
  undefined4 local_74;
  undefined1 *local_70;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined **local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3,param_3,param_4);
  uVar1 = local_38;
  ppuVar2 = &local_68;
  local_68 = PTR___NSConcreteStackBlock_02578660;
  local_60 = 0xc2000000;
  local_5c = 0;
  local_58 = FUN_01594f44;
  local_50 = &DAT_02586c88;
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = uVar1;
  _objc_retainBlock();
  puVar3 = PTR_WCRefineConfig_026cdf58;
  local_40 = ppuVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  local_70 = puVar4;
  if (puVar4 == (undefined1 *)((long)&MACH_HEADER.cputype + 1)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_wcr_syncFineVoiceModelsWithCompl_026b0a90,local_40);
    local_74 = 1;
    goto LAB_01594f08;
  }
  IVar5 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_requestCredential_026b09e0);
  _objc_retainAutoreleasedReturnValue();
  local_80 = IVar5;
  (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_length_0269cca0);
  if (IVar5 == 0) {
    (*(code *)local_40[2])(local_40,0,&cf__gMn_cSQ);
    local_74 = 1;
  }
  else {
    local_88 = 0;
    if (local_70 == (undefined1 *)0x0) {
      IVar6 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_resolvedBaseURL_026b0a38);
      _objc_retainAutoreleasedReturnValue();
      IVar7 = IVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      IVar5 = local_88;
      local_88 = IVar7;
      (*(code *)PTR__objc_release_02578630)(IVar5);
      (*(code *)PTR__objc_release_02578630)(IVar6);
LAB_01594ca0:
      puVar3 = PTR__OBJC_CLASS___NSMutableURLRequest_026ce480;
      puVar8 = PTR__OBJC_CLASS___NSURL_026ce328;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_URLWithString__026a16d8,local_88);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_requestWithURL__026a16e0);
      _objc_retainAutoreleasedReturnValue();
      local_90 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar8);
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setHTTPMethod__026a64b0,&cf_GET);
      puVar3 = local_90;
      puVar8 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_Bearer__);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_setValue_forHTTPHeaderField__026a16e8,puVar8,&cf_Authorization);
      (*(code *)PTR__objc_release_02578630)(puVar8);
      (*(code *)PTR__objc_msgSend_02578628)
                (0x403e000000000000,local_90,PTR_s_setTimeoutInterval__0269cae8);
      puVar8 = PTR__OBJC_CLASS___NSURLSession_026ce498;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSURLSession_026ce498,PTR_s_sharedSession_026a64c0);
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = local_40;
      puVar3 = local_90;
      local_c0 = PTR___NSConcreteStackBlock_02578660;
      local_b8 = 0xc2000000;
      local_b4 = 0;
      local_b0 = FUN_015950d8;
      local_a8 = &DAT_02586cb8;
      (*(code *)PTR__objc_retain_02578638)();
      local_a0 = ppuVar2;
      local_98 = local_28;
      puVar9 = puVar8;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar8,PTR_s_dataTaskWithRequest_completionHa_026a5f60,puVar3,&local_c0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar9);
      (*(code *)PTR__objc_release_02578630)(puVar8);
      _objc_storeStrong(&local_a0);
      _objc_storeStrong(&local_90,0);
      local_74 = 0;
    }
    else {
      if ((local_70 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) ||
         ((dword *)local_70 == &MACH_HEADER.cputype)) {
        IVar6 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_resolvedBaseURL_026b0a38);
        _objc_retainAutoreleasedReturnValue();
        IVar7 = IVar6;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        IVar5 = local_88;
        local_88 = IVar7;
        (*(code *)PTR__objc_release_02578630)(IVar5);
        (*(code *)PTR__objc_release_02578630)(IVar6);
        goto LAB_01594ca0;
      }
      (*(code *)local_40[2])(local_40,0,&cf_O_FUfN_ecbSKbRmRrI);
      local_74 = 1;
    }
    _objc_storeStrong(&local_88,0);
  }
  _objc_storeStrong(&local_80,0);
LAB_01594f08:
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_38,0);
  return;
}

