// msgBannerOriginalImageDataFromPickerInfo:outExtension: @ 01b9a3ac

/* Function Stack Size: 0x20 bytes */

ID WCRefineMessageBannerBeautifyViewController::
   msgBannerOriginalImageDataFromPickerInfo_outExtension_
             (ID param_1,SEL param_2,ID param_3,ID *param_4)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ID IVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  ulong local_2e8;
  undefined *local_258;
  undefined *local_250;
  undefined8 local_220;
  undefined *local_218;
  long local_210;
  byte local_201;
  ulong local_200;
  ulong local_1f8;
  undefined *local_1f0;
  undefined4 local_1e8;
  undefined4 local_1e4;
  code *local_1e0;
  undefined *local_1d8;
  undefined8 *local_1d0;
  undefined8 *local_1c8;
  undefined8 local_1b0;
  undefined8 *local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  code *local_198;
  code *local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 *local_178;
  undefined4 local_170;
  undefined4 local_16c;
  code *local_168;
  code *local_160;
  undefined8 local_158;
  undefined *local_150;
  int local_144;
  long local_140;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  long local_f8;
  undefined *local_f0;
  ulong local_e8;
  long local_e0;
  ID local_d8;
  ulong local_d0;
  ulong *local_c8;
  ulong local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  uVar1 = local_c0;
  local_c8 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_c0,PTR_s_objectForKeyedSubscript__0269d098,
             *(undefined8 *)PTR__UIImagePickerControllerPHAsset_02578190);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___PHAsset_026ce530;
  local_e8 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___PHAsset_026ce530,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar1 & 1) != 0) {
    _objc_storeStrong(&local_e0,local_e8);
  }
  _objc_storeStrong(&local_e8,0);
  if (local_e0 != 0) {
    puVar2 = PTR__OBJC_CLASS___PHAssetResource_026cf0d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___PHAssetResource_026cf0d0,PTR_s_assetResourcesForAsset__026b73e8,
               local_e0);
    _objc_retainAutoreleasedReturnValue();
    local_f0 = puVar2;
    _memset(auStack_138,0,0x40);
    puVar2 = local_f0;
    (*(code *)PTR__objc_retain_02578638)();
    local_250 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10);
    if (local_250 != (undefined *)0x0) {
      lVar8 = *local_128;
      local_258 = (undefined *)0x0;
      do {
        do {
          if (*local_128 - lVar8 != 0) {
            _objc_enumerationMutation(*local_128 - lVar8,puVar2);
          }
          lVar9 = *(long *)(local_130 + (long)local_258 * 8);
          local_f8 = lVar9;
          (*(code *)PTR__objc_msgSend_02578628)(lVar9,PTR_s_originalFilename_026b73f0);
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar9;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar3;
          FUN_01b9ad50();
          _objc_retainAutoreleasedReturnValue();
          local_140 = lVar4;
          (*(code *)PTR__objc_release_02578630)(lVar3);
          (*(code *)PTR__objc_release_02578630)(lVar9);
          lVar3 = local_140;
          (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_length_0269cca0);
          if (lVar3 == 0) {
            local_144 = 0;
            uVar10 = 0;
          }
          else {
            _objc_storeStrong(lVar3,&local_d0,local_140);
            uVar10 = 2;
            local_144 = 2;
          }
          _objc_storeStrong(uVar10,&local_140,0);
          if (local_144 != 0) goto LAB_01b9a6d4;
          local_258 = local_258 + 1;
        } while (local_258 < local_250);
        local_250 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,
                   0x10);
        local_258 = (undefined *)0x0;
      } while (local_250 != (undefined *)0x0);
    }
    local_144 = 0;
LAB_01b9a6d4:
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = PTR__OBJC_CLASS___PHImageRequestOptions_026ce8e8;
    _objc_alloc_init();
    local_150 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setVersion__026a7018,2);
    (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_setDeliveryMode__026a7020,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_setNetworkAccessAllowed__026a7010,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_setSynchronous__026a7628,1);
    local_178 = &local_180;
    local_180 = 0;
    local_170 = 0x32000000;
    local_16c = 0x30;
    local_168 = FUN_01b9af34;
    local_160 = FUN_01b9af88;
    local_158 = 0;
    local_1a8 = &local_1b0;
    local_1b0 = 0;
    local_1a0 = 0x32000000;
    local_19c = 0x30;
    local_198 = FUN_01b9af34;
    local_190 = FUN_01b9af88;
    local_188 = 0;
    puVar2 = PTR__OBJC_CLASS___PHImageManager_026ce880;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___PHImageManager_026ce880,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_1f0 = PTR___NSConcreteStackBlock_02578660;
    local_1e8 = 0xc2000000;
    local_1e4 = 0;
    local_1e0 = FUN_01b9afb4;
    local_1d8 = &DAT_0258b4c8;
    local_1d0 = &local_180;
    local_1c8 = &local_1b0;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    lVar8 = local_178[5];
    (*(code *)PTR__objc_msgSend_02578628)(lVar8,PTR_s_length_0269cca0);
    if (lVar8 != 0) {
      uVar1 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0);
      if (uVar1 == 0) {
        uVar5 = local_1a8[5];
        FUN_01b9b084();
        _objc_retainAutoreleasedReturnValue();
        uVar1 = local_d0;
        local_d0 = uVar5;
        (*(code *)PTR__objc_release_02578630)(uVar1);
      }
      _objc_storeStrong(&local_d8,local_178[5]);
    }
    __Block_object_dispose(&local_1b0,8);
    _objc_storeStrong(&local_188);
    __Block_object_dispose(&local_180,8);
    _objc_storeStrong(&local_158,0);
    _objc_storeStrong(&local_150,0);
    _objc_storeStrong(&local_f0,0);
  }
  IVar6 = local_d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0);
  if (IVar6 == 0) {
    uVar1 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c0,PTR_s_objectForKeyedSubscript__0269d098,
               *(undefined8 *)PTR__UIImagePickerControllerImageURL_02578170);
    _objc_retainAutoreleasedReturnValue();
    local_201 = 0;
    local_2e8 = uVar1;
    if (uVar1 == 0) {
      local_2e8 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c0,PTR_s_objectForKeyedSubscript__0269d098,
                 *(undefined8 *)PTR__UIImagePickerControllerReferenceURL_02578198);
      _objc_retainAutoreleasedReturnValue();
      local_200 = local_2e8;
    }
    local_201 = uVar1 == 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_1f8 = local_2e8;
    if ((local_201 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_200);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = local_1f8;
    puVar2 = PTR__OBJC_CLASS___NSURL_026ce328;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((uVar1 & 1) != 0) &&
       (uVar1 = local_1f8, (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_isFileURL_026a7088)
       , (uVar1 & 1) != 0)) {
      local_210 = 0;
      local_220 = 0;
      puVar2 = PTR__OBJC_CLASS___NSData_026ce1d0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfURL_options_er_026ac470,
                 local_1f8,0,&local_220);
      _objc_retainAutoreleasedReturnValue();
      _objc_storeStrong(&local_210,local_220);
      local_218 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_length_0269cca0);
      if ((puVar2 != (undefined *)0x0) && (local_210 == 0)) {
        _objc_storeStrong(&local_d8,local_218);
        uVar1 = local_d0;
        (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0);
        if (uVar1 == 0) {
          uVar5 = local_1f8;
          (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_pathExtension_0269e090);
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar5;
          FUN_01b9ad50();
          _objc_retainAutoreleasedReturnValue();
          uVar1 = local_d0;
          local_d0 = uVar7;
          (*(code *)PTR__objc_release_02578630)(uVar1);
          (*(code *)PTR__objc_release_02578630)(uVar5);
        }
      }
      _objc_storeStrong(&local_218);
      _objc_storeStrong(&local_210,0);
    }
    _objc_storeStrong(&local_1f8,0);
  }
  uVar1 = local_d0;
  if (local_c8 != (ulong *)0x0) {
    _objc_retainAutorelease();
    *local_c8 = uVar1;
  }
  IVar6 = local_d8;
  (*(code *)PTR__objc_retain_02578638)();
  local_144 = 1;
  _objc_storeStrong(&local_e0);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return IVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

