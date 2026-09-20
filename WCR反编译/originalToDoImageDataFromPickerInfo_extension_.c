// originalToDoImageDataFromPickerInfo:extension: @ 01ece244

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x20 bytes */

ID WCRefineToDoListSettingsViewController::originalToDoImageDataFromPickerInfo_extension_
             (ID param_1,SEL param_2,ID param_3,ID *param_4)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  long lVar5;
  cfstringStruct *pcVar6;
  undefined8 uVar7;
  cfstringStruct *local_3a0;
  cfstringStruct *local_388;
  cfstringStruct *local_330;
  cfstringStruct *local_2b0;
  undefined *local_268;
  undefined *local_260;
  undefined *local_208;
  byte local_1f9;
  cfstringStruct *local_1f8;
  cfstringStruct *local_1f0;
  undefined *local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  code *local_1d8;
  undefined *local_1d0;
  ID local_1c8;
  undefined8 *local_1c0;
  long *local_1b8;
  undefined *local_1b0;
  int local_1a4;
  ID local_1a0;
  undefined1 auStack_198 [8];
  long local_190;
  long *local_188;
  cfstringStruct *local_158;
  undefined *local_150 [3];
  cfstringStruct *local_138;
  long local_130 [2];
  long *local_120;
  undefined4 local_118;
  undefined4 local_114;
  code *local_110;
  code *local_108;
  cfstringStruct *local_100;
  undefined8 local_f8;
  undefined8 *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  code *local_e0;
  code *local_d8;
  undefined8 local_d0;
  ID *local_c8;
  cfstringStruct *local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = (cfstringStruct *)0x0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  local_f0 = &local_f8;
  local_f8 = 0;
  local_e8 = 0x32000000;
  local_e4 = 0x30;
  local_e0 = FUN_01ececbc;
  local_d8 = FUN_01eced10;
  local_d0 = 0;
  local_120 = local_130 + 1;
  local_130[1] = 0;
  local_118 = 0x32000000;
  local_114 = 0x30;
  local_110 = FUN_01ececbc;
  local_108 = FUN_01eced10;
  local_c8 = param_4;
  (*(code *)PTR__objc_retain_02578638)();
  local_100 = &::cf___;
  local_130[0] = 0;
  pcVar1 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_c0,PTR_s_objectForKeyedSubscript__0269d098,
             *(undefined8 *)PTR__UIImagePickerControllerPHAsset_02578190);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___PHAsset_026ce530;
  local_138 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___PHAsset_026ce530,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((ulong)pcVar1 & 1) != 0) {
    _objc_storeStrong(local_130,local_138);
  }
  if (local_130[0] != 0) {
    puVar2 = PTR__OBJC_CLASS___PHAssetResource_026cf0d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___PHAssetResource_026cf0d0,PTR_s_assetResourcesForAsset__026b73e8,
               local_130[0]);
    _objc_retainAutoreleasedReturnValue();
    local_150[0] = puVar2;
    _memset(auStack_198,0,0x40);
    puVar2 = local_150[0];
    (*(code *)PTR__objc_retain_02578638)();
    local_260 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_198,auStack_a8,0x10);
    if (local_260 != (undefined *)0x0) {
      lVar5 = *local_188;
      local_268 = (undefined *)0x0;
      do {
        do {
          if (*local_188 - lVar5 != 0) {
            _objc_enumerationMutation(*local_188 - lVar5,puVar2);
          }
          IVar4 = local_b0;
          pcVar6 = *(cfstringStruct **)(local_190 + (long)local_268 * 8);
          local_158 = pcVar6;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_originalFilename_026b73f0);
          _objc_retainAutoreleasedReturnValue();
          pcVar1 = pcVar6;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          local_2b0 = pcVar1;
          if (pcVar1 == (cfstringStruct *)0x0) {
            local_2b0 = &::cf___;
          }
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar4,PTR_s_normalizedToDoBackgroundMediaExt_026c7c80,local_2b0);
          _objc_retainAutoreleasedReturnValue();
          local_1a0 = IVar4;
          (*(code *)PTR__objc_release_02578630)(pcVar1);
          (*(code *)PTR__objc_release_02578630)(pcVar6);
          IVar4 = local_1a0;
          (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_length_0269cca0);
          if (IVar4 == 0) {
            local_1a4 = 0;
            uVar7 = 0;
          }
          else {
            _objc_storeStrong(local_120 + 5,local_1a0);
            uVar7 = 2;
            local_1a4 = 2;
          }
          _objc_storeStrong(uVar7,&local_1a0,0);
          if (local_1a4 != 0) goto LAB_01ece6ac;
          local_268 = local_268 + 1;
        } while (local_268 < local_260);
        local_260 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_198,auStack_a8,
                   0x10);
        local_268 = (undefined *)0x0;
      } while (local_260 != (undefined *)0x0);
    }
    local_1a4 = 0;
LAB_01ece6ac:
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = PTR__OBJC_CLASS___PHImageRequestOptions_026ce8e8;
    _objc_alloc_init();
    local_1b0 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setVersion__026a7018,2);
    (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_setDeliveryMode__026a7020,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_setNetworkAccessAllowed__026a7010,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_setSynchronous__026a7628,1);
    puVar3 = PTR__OBJC_CLASS___PHImageManager_026ce880;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___PHImageManager_026ce880,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = local_b0;
    lVar5 = local_130[0];
    puVar2 = local_1b0;
    local_1e8 = PTR___NSConcreteStackBlock_02578660;
    local_1e0 = 0xc2000000;
    local_1dc = 0;
    local_1d8 = FUN_01eced3c;
    local_1d0 = &DAT_0258ca40;
    local_1c0 = &local_f8;
    local_1b8 = local_130 + 1;
    (*(code *)PTR__objc_retain_02578638)();
    local_1c8 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_requestImageDataAndOrientationFo_026c0128,lVar5,puVar2,&local_1e8);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(&local_1c8);
    _objc_storeStrong(&local_1b0,0);
    _objc_storeStrong(local_150,0);
  }
  lVar5 = local_f0[5];
  (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_length_0269cca0);
  if (lVar5 == 0) {
    pcVar1 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c0,PTR_s_objectForKeyedSubscript__0269d098,
               *(undefined8 *)PTR__UIImagePickerControllerImageURL_02578170);
    _objc_retainAutoreleasedReturnValue();
    local_1f9 = 0;
    local_330 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_330 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c0,PTR_s_objectForKeyedSubscript__0269d098,
                 *(undefined8 *)PTR__UIImagePickerControllerReferenceURL_02578198);
      _objc_retainAutoreleasedReturnValue();
      local_1f8 = local_330;
    }
    local_1f9 = pcVar1 == (cfstringStruct *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_1f0 = local_330;
    if ((local_1f9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_1f8);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar1 = local_1f0;
    puVar2 = PTR__OBJC_CLASS___NSURL_026ce328;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((((ulong)pcVar1 & 1) != 0) &&
       (pcVar1 = local_1f0,
       (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_isFileURL_026a7088),
       ((ulong)pcVar1 & 1) != 0)) {
      puVar2 = PTR__OBJC_CLASS___NSData_026ce1d0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfURL__026a9eb0,local_1f0);
      _objc_retainAutoreleasedReturnValue();
      local_208 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_length_0269cca0);
      if (puVar2 != (undefined *)0x0) {
        _objc_storeStrong(local_f0 + 5,local_208);
        IVar4 = local_b0;
        pcVar1 = local_1f0;
        (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_pathExtension_0269e090);
        _objc_retainAutoreleasedReturnValue();
        local_388 = pcVar1;
        if (pcVar1 == (cfstringStruct *)0x0) {
          local_388 = &::cf___;
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar4,PTR_s_normalizedToDoBackgroundMediaExt_026c7c80,local_388);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = local_120[5];
        local_120[5] = IVar4;
        (*(code *)PTR__objc_release_02578630)(lVar5);
        (*(code *)PTR__objc_release_02578630)(pcVar1);
      }
      _objc_storeStrong(&local_208,0);
    }
    _objc_storeStrong(&local_1f0,0);
  }
  if (local_c8 != (ID *)0x0) {
    local_3a0 = (cfstringStruct *)local_120[5];
    if (local_3a0 == (cfstringStruct *)0x0) {
      local_3a0 = &::cf___;
    }
    _objc_retainAutorelease();
    *local_c8 = (ID)local_3a0;
  }
  IVar4 = local_f0[5];
  (*(code *)PTR__objc_retain_02578638)();
  local_1a4 = 1;
  _objc_storeStrong(&local_138);
  _objc_storeStrong(local_130,0);
  __Block_object_dispose(local_130 + 1,8);
  _objc_storeStrong(&local_100,0);
  __Block_object_dispose(&local_f8,8);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return IVar4;
}

