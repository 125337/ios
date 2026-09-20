// FUN_008160b8 @ 008160b8

void FUN_008160b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                 byte param_9)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined1 *local_138;
  undefined1 *local_b8;
  undefined1 *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 *local_80 [3];
  ulong local_68;
  byte local_5d;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  ulong local_48;
  undefined8 local_40;
  undefined1 *local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_48 = 0;
  local_40 = param_5;
  local_38 = param_4;
  local_30 = param_1;
  uStack_28 = param_2;
  _objc_storeStrong(&local_48,param_6);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_7);
  uVar2 = local_48;
  local_5d = param_9;
  local_5c = param_8;
  local_58 = param_3;
  FUN_00838b24();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_WCRefineWechatThemeStore_026ce6d0;
  local_68 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineWechatThemeStore_026ce6d0,PTR_s_sharedStore_026a3d08);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_68;
  uStack_88 = uStack_28;
  local_90 = local_30;
  puVar4 = PTR__OBJC_CLASS___UIScreen_026cdf70;
  uVar7 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  puVar5 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_90,uStack_88,uVar7,puVar3,PTR_s_replacementImageNamed_size_scale_026a3d10,uVar2,
             local_50);
  _objc_retainAutoreleasedReturnValue();
  local_80[0] = puVar5;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  bVar1 = local_80[0] == (undefined1 *)0x0;
  if (bVar1) {
    local_138 = local_38;
    (*DAT_028cd0e8)(local_30,uStack_28,local_58,local_38,local_40,local_68,local_50,local_5c,
                    local_5d & 1);
    _objc_retainAutoreleasedReturnValue();
    local_b8 = local_138;
  }
  else {
    local_138 = local_80[0];
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_98 = local_138;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_b8);
  }
  if ((local_98 == (undefined1 *)0x0) &&
     (uVar2 = local_68,
     (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_isEqualToString__0269ccc8,local_48),
     (uVar2 & 1) == 0)) {
    puVar6 = local_38;
    (*DAT_028cd0e8)(local_30,uStack_28,local_58,local_38,local_40,local_48,local_50,local_5c,
                    local_5d & 1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = local_98;
    local_98 = puVar6;
    (*(code *)PTR__objc_release_02578630)(puVar5);
  }
  uVar2 = local_48;
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  if (((uVar2 & 1) != 0) &&
     ((uVar2 = local_48,
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isEqualToString__0269ccc8,&cf_ai_filled),
      (uVar2 & 1) != 0 ||
      (uVar2 = local_48,
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_containsString__0269d0b0,&cf_ai_filled),
      (uVar2 & 1) != 0)))) {
    puVar5 = local_98;
    puVar3 = PTR__OBJC_CLASS___UIImage_026cdfd0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((((ulong)puVar5 & 1) != 0) &&
       (puVar5 = local_98,
       (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_renderingMode_026a02c0),
       puVar5 != (undefined1 *)((long)&MACH_HEADER.magic + 1))) {
      puVar6 = local_98;
      (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_imageWithRenderingMode__026ca690,1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = local_98;
      local_98 = puVar6;
      (*(code *)PTR__objc_release_02578630)(puVar5);
    }
  }
  puVar5 = local_98;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_98);
  _objc_storeStrong(local_80,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_autoreleaseReturnValue(puVar5);
  return;
}

