// generateImageWithPrompt:provider:apiKey:completion: @ 009ce674

/* Function Stack Size: 0x30 bytes */

ID WCRefineAIClient::generateImageWithPrompt_provider_apiKey_completion_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,undefined4 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint local_154;
  undefined *local_150;
  undefined4 local_148;
  undefined4 local_144;
  code *local_140;
  undefined *local_138;
  undefined *local_130;
  undefined8 local_128;
  undefined *local_120;
  undefined *local_118;
  undefined4 local_110;
  undefined4 local_10c;
  code *local_108;
  undefined *local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  ulong local_e0;
  undefined *local_d8;
  undefined8 local_d0;
  undefined4 local_c4;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  code *local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  byte local_91;
  ulong local_90;
  ulong local_88;
  undefined8 local_80;
  undefined8 local_78;
  ulong local_70;
  undefined8 local_68;
  SEL local_60;
  ID local_58;
  undefined *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  ulong local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_68 = 0;
  local_60 = param_2;
  local_58 = param_1;
  _objc_storeStrong(&local_68,param_3);
  local_70 = 0;
  _objc_storeStrong(&local_70,param_4);
  local_78 = 0;
  _objc_storeStrong(&local_78,param_5);
  local_80 = 0;
  _objc_storeStrong(&local_80,param_6);
  uVar4 = local_70;
  uVar3 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_imagePath_026aae08);
  _objc_retainAutoreleasedReturnValue();
  FUN_009c9ac8();
  _objc_retainAutoreleasedReturnValue();
  local_88 = uVar4;
  (*(code *)PTR__objc_release_02578630)(uVar3);
  uVar4 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_supportsImage_026aad18);
  local_91 = 0;
  local_154 = 1;
  if (((uVar4 & 1) != 0) && (local_154 = 1, local_88 != 0)) {
    uVar4 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_imageModel_026aadd0);
    _objc_retainAutoreleasedReturnValue();
    local_91 = 1;
    local_90 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_154 = 1;
    if (uVar4 != 0) {
      uVar4 = local_70;
      FUN_009c0574(local_70,local_78);
      local_154 = (uint)uVar4 ^ 1;
    }
  }
  if ((local_91 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_90);
  }
  puVar5 = PTR___dispatch_main_q_02578680;
  if ((local_154 & 1) == 0) {
    local_d0 = 0;
    local_48 = &cf_model;
    uVar4 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_imageModel_026aadd0);
    _objc_retainAutoreleasedReturnValue();
    local_40 = &cf_prompt;
    local_30 = local_68;
    puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_38 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_38,&local_48,2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_d8 = puVar6;
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(uVar4);
    uVar4 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_providerID_0269d480);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar4);
    if ((uVar3 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_d8,PTR_s_setObject_forKeyedSubscript__0269d248,&cf_1024x1024,&cf_image_size);
    }
    local_e8 = local_d0;
    uVar4 = local_88;
    FUN_009c9de0(local_88,local_78,local_d8,&local_e8);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeStrong(&local_d0,local_e8);
    puVar5 = PTR___dispatch_main_q_02578680;
    local_e0 = uVar4;
    if (uVar4 == 0) {
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_80;
      local_118 = PTR___NSConcreteStackBlock_02578660;
      local_110 = 0xc2000000;
      local_10c = 0;
      local_108 = FUN_009cee80;
      local_100 = &DAT_0257ca68;
      (*(code *)PTR__objc_retain_02578638)();
      uVar1 = local_d0;
      local_f0 = uVar2;
      (*(code *)PTR__objc_retain_02578638)();
      local_f8 = uVar1;
      _dispatch_async(puVar5,&local_118);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      local_50 = (undefined *)0x0;
      local_c4 = 1;
      _objc_storeStrong(&local_f8);
      _objc_storeStrong(&local_f0,0);
    }
    else {
      puVar5 = PTR_WCRefineAIRequest_026ceae8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIRequest_026ceae8,PTR_s_new_0269d288);
      puVar6 = PTR__OBJC_CLASS___NSURLSession_026ce498;
      local_120 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSURLSession_026ce498,PTR_s_sharedSession_026a64c0);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = local_e0;
      puVar5 = local_120;
      local_150 = PTR___NSConcreteStackBlock_02578660;
      local_148 = 0xc2000000;
      local_144 = 0;
      local_140 = FUN_009cef4c;
      local_138 = &DAT_02581558;
      (*(code *)PTR__objc_retain_02578638)();
      uVar1 = local_80;
      local_130 = puVar5;
      (*(code *)PTR__objc_retain_02578638)();
      local_128 = uVar1;
      puVar5 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar6,PTR_s_dataTaskWithRequest_completionHa_026a5f60,uVar4,&local_150);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_setTask__026aaf18);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      puVar5 = local_120;
      (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_task_026a1510);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar5);
      puVar5 = local_120;
      (*(code *)PTR__objc_retain_02578638)();
      local_50 = puVar5;
      local_c4 = 1;
      _objc_storeStrong(&local_128);
      _objc_storeStrong(&local_130,0);
      _objc_storeStrong(&local_120,0);
    }
    _objc_storeStrong(&local_e0);
    _objc_storeStrong(&local_d8,0);
    _objc_storeStrong(&local_d0,0);
  }
  else {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_80;
    local_c0 = PTR___NSConcreteStackBlock_02578660;
    local_b8 = 0xc2000000;
    local_b4 = 0;
    local_b0 = FUN_009cee0c;
    local_a8 = &DAT_025814c8;
    (*(code *)PTR__objc_retain_02578638)();
    local_a0 = uVar1;
    _dispatch_async(puVar5,&local_c0);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    local_50 = (undefined *)0x0;
    local_c4 = 1;
    _objc_storeStrong(&local_a0,0);
  }
  _objc_storeStrong(&local_88);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_68,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_50;
}

