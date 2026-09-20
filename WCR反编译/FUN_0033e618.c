// FUN_0033e618 @ 0033e618

void FUN_0033e618(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *local_2b8;
  undefined *local_2b0;
  undefined *local_270;
  undefined *local_268;
  undefined1 auStack_248 [8];
  long local_240;
  long *local_238;
  undefined8 local_208;
  undefined1 auStack_200 [8];
  long local_1f8;
  long *local_1f0;
  undefined8 local_1c0;
  undefined4 local_1a4;
  long local_1a0;
  cfstringStruct *local_198;
  cfstringStruct *local_190;
  cfstringStruct *local_188;
  cfstringStruct *local_180;
  cfstringStruct *local_178;
  cfstringStruct *local_170;
  cfstringStruct *local_168;
  undefined1 auStack_160 [128];
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1a0 = 0;
  _objc_storeStrong(&local_1a0,param_1);
  if (local_1a0 == 0) {
    local_1a4 = 1;
  }
  else {
    FUN_0033ab8c(local_1a0);
    _memset(auStack_200,0,0x40);
    local_e0 = &cf_setCanSendOriginalImage_;
    local_d8 = &cf_setCanSendOriginImage_;
    local_d0 = &cf_setIsOpenSendOriginVideo_;
    local_c8 = &cf_setCanSendVideoMessage_;
    local_c0 = &cf_setCanSendMultiImage_;
    local_b8 = &cf_setButtonEnableAfterSend_;
    local_b0 = &cf_setIsNotShowVideoSizeAlertView_;
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_e0,7
              );
    _objc_retainAutoreleasedReturnValue();
    local_268 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_268 != (undefined *)0x0) {
      lVar2 = *local_1f0;
      local_270 = (undefined *)0x0;
      do {
        do {
          if (*local_1f0 - lVar2 != 0) {
            _objc_enumerationMutation(*local_1f0 - lVar2,puVar1);
          }
          local_1c0 = *(undefined8 *)(local_1f8 + (long)local_270 * 8);
          FUN_0033eb94(local_1a0,local_1c0,1);
          local_270 = local_270 + 1;
        } while (local_270 < local_268);
        local_268 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_200,auStack_a8,
                   0x10);
        local_270 = (undefined *)0x0;
      } while (local_268 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    FUN_0033eb94(local_1a0,&cf_setHideOriginButton_,0);
    FUN_0033eb94(local_1a0,&cf_setForceSendOriginalImage_,1);
    _memset(auStack_248,0,0x40);
    local_198 = &cf_setShowSkipBtn_;
    local_190 = &cf_setCanSendMultiVideo_;
    local_188 = &cf_setCanHybridSendAsset_;
    local_180 = &cf_setNeedThumbImage_;
    local_178 = &cf_setIsWAVideoCompressed_;
    local_170 = &cf_setVideoDirectToEditMode_;
    local_168 = &cf_setImageDirectToEditMode_;
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_198,
               7);
    _objc_retainAutoreleasedReturnValue();
    local_2b0 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_2b0 != (undefined *)0x0) {
      lVar2 = *local_238;
      local_2b8 = (undefined *)0x0;
      do {
        do {
          if (*local_238 - lVar2 != 0) {
            _objc_enumerationMutation(*local_238 - lVar2,puVar1);
          }
          local_208 = *(undefined8 *)(local_240 + (long)local_2b8 * 8);
          FUN_0033eb94(local_1a0,local_208,0);
          local_2b8 = local_2b8 + 1;
        } while (local_2b8 < local_2b0);
        local_2b0 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_248,auStack_160,
                   0x10);
        local_2b8 = (undefined *)0x0;
      } while (local_2b0 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    FUN_0033eb94(local_1a0,&cf_setM_isJustReturnMMAsset_,0);
    FUN_0033ed08(local_1a0,&cf_setUiMaxVideoDuration_,&DAT_00004650);
    FUN_0033ed08(local_1a0,&cf_setPreviewEditScene_,4);
    FUN_0033ed08(local_1a0,&cf_setCompressType_,1);
    FUN_0033ed08(local_1a0,&cf_setMaxImageCount_,9);
    FUN_0033ed08(local_1a0,&cf_setVideoQualityType_,1);
    local_1a4 = 0;
  }
  _objc_storeStrong(&local_1a0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

