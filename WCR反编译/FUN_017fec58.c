// FUN_017fec58 @ 017fec58

void FUN_017fec58(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  undefined *puVar6;
  long lVar7;
  undefined *local_120;
  undefined4 local_118;
  undefined4 local_114;
  code *local_110;
  undefined *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  code *local_d8;
  undefined *local_d0;
  ulong local_c8;
  long local_c0;
  undefined *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  ulong local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  ulong local_80;
  undefined4 local_74;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  long local_38;
  ulong local_30;
  long local_28;
  
  local_30 = 0;
  local_28 = param_1;
  _objc_storeStrong(&local_30);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  uVar3 = local_30;
  lVar7 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  *(long *)(lVar7 + 0x18) = *(long *)(lVar7 + 0x18) + 1;
  local_40 = param_1;
  if (local_38 == 0) {
    puVar2 = PTR__OBJC_CLASS___UIImage_026cdfd0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    uVar1 = local_30;
    if ((uVar3 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_80 = uVar1;
      pcVar4 = &cf_WCRefineScreenshotWatermarkProcessor;
      _NSClassFromString();
      pcVar5 = &cf_sharedProcessor;
      local_88 = pcVar4;
      _NSSelectorFromString();
      uVar3 = local_80;
      local_90 = pcVar5;
      (*(code *)PTR__objc_retain_02578638)();
      local_98 = uVar3;
      if ((local_88 != (cfstringStruct *)0x0) &&
         (pcVar4 = local_88,
         (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_respondsToSelector__026ca818,local_90)
         , ((ulong)pcVar4 & 1) != 0)) {
        pcVar5 = local_88;
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_performSelector__026ca7b8,local_90);
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = &cf_applyWatermarkToImage_;
        local_a0 = pcVar5;
        _NSSelectorFromString();
        local_a8 = pcVar4;
        if ((local_a0 != (cfstringStruct *)0x0) &&
           (pcVar5 = local_a0,
           (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_respondsToSelector__026ca818,pcVar4)
           , ((ulong)pcVar5 & 1) != 0)) {
          pcVar4 = local_a0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_a0,PTR_s_methodSignatureForSelector__0269e190,local_a8);
          _objc_retainAutoreleasedReturnValue();
          local_b0 = pcVar4;
          if (pcVar4 != (cfstringStruct *)0x0) {
            puVar2 = PTR__OBJC_CLASS___NSInvocation_026ce208;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSInvocation_026ce208,
                       PTR_s_invocationWithMethodSignature__0269e1a0,pcVar4);
            _objc_retainAutoreleasedReturnValue();
            local_b8 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setTarget__0269e1a8,local_a0);
            (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setSelector__0269e1b0,local_a8);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_b8,PTR_s_setArgument_atIndex__0269eae8,&local_80,2);
            (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_invoke_0269e1b8);
            local_c0 = 0;
            (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_getReturnValue__0269e1c0,&local_c0)
            ;
            if (local_c0 != 0) {
              _objc_storeStrong(&local_98,local_c0);
            }
            _objc_storeStrong(&local_b8,0);
          }
          _objc_storeStrong(&local_b0,0);
        }
        _objc_storeStrong(&local_a0,0);
      }
      puVar6 = PTR__OBJC_CLASS___PHPhotoLibrary_026ce4a0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___PHPhotoLibrary_026ce4a0,PTR_s_sharedPhotoLibrary_026a1730);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_98;
      puVar2 = PTR___NSConcreteStackBlock_02578660;
      local_e8 = PTR___NSConcreteStackBlock_02578660;
      local_e0 = 0xc2000000;
      local_dc = 0;
      local_d8 = FUN_017ff208;
      local_d0 = &DAT_0257a800;
      (*(code *)PTR__objc_retain_02578638)();
      local_c8 = uVar3;
      local_120 = puVar2;
      local_118 = 0xc2000000;
      local_114 = 0;
      local_110 = FUN_017ff258;
      local_108 = &DAT_02589698;
      local_100 = *(undefined8 *)(param_1 + 0x30);
      local_f8 = *(undefined8 *)(param_1 + 0x20);
      local_f0 = *(undefined8 *)(param_1 + 0x28);
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar6,PTR_s_performChanges_completionHandler_026a1740,&local_e8,&local_120);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      _objc_storeStrong(&local_c8);
      _objc_storeStrong(&local_98,0);
      _objc_storeStrong(&local_80,0);
      local_74 = 0;
      goto LAB_017ff124;
    }
  }
  puVar2 = PTR___dispatch_main_q_02578680;
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) ==
      *(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18)) {
    _objc_retainAutoreleaseReturnValue(0);
    _objc_retainAutoreleasedReturnValue();
    local_70 = PTR___NSConcreteStackBlock_02578660;
    local_68 = 0xc2000000;
    local_64 = 0;
    local_60 = FUN_017ff150;
    local_58 = &DAT_02585ca0;
    local_50 = *(undefined8 *)(param_1 + 0x30);
    local_48 = *(undefined8 *)(param_1 + 0x28);
    _dispatch_async();
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  local_74 = 1;
LAB_017ff124:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return;
}

