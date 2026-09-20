// FUN_010124dc @ 010124dc

void FUN_010124dc(long param_1)

{
  bool bVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  cfstringStruct *local_280;
  ulong local_250;
  ulong local_248;
  undefined *local_208;
  undefined *local_1f0;
  undefined *local_1e0;
  cfstringStruct *local_1b8;
  cfstringStruct *local_1b0;
  byte local_1a1;
  long local_1a0;
  undefined1 local_192;
  byte local_191;
  long local_190;
  undefined8 local_188;
  undefined *local_180;
  undefined8 local_178;
  undefined1 auStack_170 [8];
  long local_168;
  long *local_160;
  undefined8 local_130;
  byte local_121;
  long local_120;
  byte local_111;
  long local_110;
  undefined1 local_102;
  byte local_101;
  undefined *local_100;
  undefined *local_f8;
  byte local_e9;
  undefined *local_e8;
  undefined *local_e0;
  byte local_d1;
  undefined *local_d0;
  undefined *local_c8;
  byte local_b9;
  long local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28);
  local_b8 = param_1;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_length_0269cca0);
  if (lVar3 != 0) {
    local_b9 = 0;
    if ((*(byte *)(param_1 + 0x88) & 1) != 0) {
      local_1e0 = *(undefined **)(*(long *)(*(long *)(param_1 + 0x50) + 8) + 0x28);
      local_d1 = 0;
      bVar1 = local_1e0 == (undefined *)0x0;
      if (bVar1) {
        local_1e0 = PTR__OBJC_CLASS___UIImage_026cdfd0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithData__0269d4c8,
                   *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x58) + 8) + 0x28));
        _objc_retainAutoreleasedReturnValue();
        local_d0 = local_1e0;
      }
      local_d1 = bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_c8 = local_1e0;
      if ((local_d1 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_d0);
      }
      uVar4 = *(undefined8 *)(param_1 + 0x80);
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar4,PTR_s_sendVideoAtPath_coverImage_toUsr_026adb48,
                 *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28),local_c8,
                 *(undefined8 *)(param_1 + 0x20));
      local_b9 = (byte)uVar4;
      _objc_storeStrong(&local_c8,0);
    }
    if ((local_b9 & 1) == 0) {
      lVar3 = *(long *)(*(long *)(param_1 + 0x68) + 8);
      *(long *)(lVar3 + 0x18) = *(long *)(lVar3 + 0x18) + 1;
    }
    else {
      lVar3 = *(long *)(*(long *)(param_1 + 0x60) + 8);
      *(long *)(lVar3 + 0x18) = *(long *)(lVar3 + 0x18) + 1;
    }
  }
  if ((*(byte *)(param_1 + 0x89) & 1) != 0) {
    lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x70) + 8) + 0x28);
    (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_length_0269cca0);
    if ((lVar3 != 0) || (*(long *)(*(long *)(*(long *)(param_1 + 0x50) + 8) + 0x28) != 0)) {
      lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x58) + 8) + 0x28);
      (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_length_0269cca0);
      local_e9 = 0;
      if (lVar3 == 0) {
        local_1f0 = PTR__OBJC_CLASS___NSData_026ce1d0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfFile__0269e0b8,
                   *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 8) + 0x28));
        _objc_retainAutoreleasedReturnValue();
        local_e8 = local_1f0;
      }
      else {
        local_1f0 = *(undefined **)(*(long *)(*(long *)(param_1 + 0x58) + 8) + 0x28);
      }
      local_e9 = lVar3 == 0;
      (*(code *)PTR__objc_retain_02578638)();
      local_e0 = local_1f0;
      if ((local_e9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_e8);
      }
      local_208 = *(undefined **)(*(long *)(*(long *)(param_1 + 0x50) + 8) + 0x28);
      local_101 = 0;
      bVar1 = local_208 == (undefined *)0x0;
      if (bVar1) {
        local_208 = PTR__OBJC_CLASS___UIImage_026cdfd0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithData__0269d4c8,local_e0);
        _objc_retainAutoreleasedReturnValue();
        local_100 = local_208;
      }
      local_101 = bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_f8 = local_208;
      if ((local_101 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_100);
      }
      uVar5 = *(ulong *)(param_1 + 0x80);
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar5,PTR_s_sendImageData_image_toUsr__026adb50,local_e0,local_f8,
                 *(undefined8 *)(param_1 + 0x20));
      local_102 = (undefined1)uVar5;
      if ((uVar5 & 1) == 0) {
        lVar3 = *(long *)(*(long *)(param_1 + 0x68) + 8);
        *(long *)(lVar3 + 0x18) = *(long *)(lVar3 + 0x18) + 1;
      }
      else {
        lVar3 = *(long *)(*(long *)(param_1 + 0x60) + 8);
        *(long *)(lVar3 + 0x18) = *(long *)(lVar3 + 0x18) + 1;
      }
      _objc_storeStrong(&local_f8);
      _objc_storeStrong(&local_e0,0);
    }
  }
  local_110 = 0;
  uVar5 = *(ulong *)(param_1 + 0x28);
  (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_count_0269cfe0);
  bVar2 = 0;
  if (1 < uVar5) {
    uVar5 = *(ulong *)(param_1 + 0x30);
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_autoParseLinkCombineImageSendEna_026adb58);
    bVar2 = 1;
    if ((uVar5 & 1) == 0) {
      bVar2 = *(byte *)(param_1 + 0x8a);
    }
  }
  local_111 = bVar2 & 1;
  if ((bVar2 & 1) != 0) {
    lVar9 = *(long *)(param_1 + 0x80);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(lVar9,PTR_s_mediaGroupInfoWithCount__026adb60,uVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = local_110;
    local_110 = lVar9;
    (*(code *)PTR__objc_release_02578630)(lVar3);
  }
  local_120 = 0;
  local_121 = 0;
  _memset(auStack_170,0,0x40);
  uVar5 = *(ulong *)(param_1 + 0x28);
  (*(code *)PTR__objc_retain_02578638)();
  local_248 = uVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_170,auStack_a8,0x10);
  if (local_248 != 0) {
    lVar3 = *local_160;
    local_250 = 0;
    do {
      do {
        if (*local_160 - lVar3 != 0) {
          _objc_enumerationMutation(*local_160 - lVar3,uVar5);
        }
        uVar4 = *(undefined8 *)(local_168 + local_250 * 8);
        local_130 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar4,PTR_s_objectForKeyedSubscript__0269d098,&cf_data);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___UIImage_026cdfd0;
        local_178 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithData__0269d4c8,uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = local_130;
        local_180 = puVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_130,PTR_s_objectForKeyedSubscript__0269d098,&cf_livePhotoVideoPath);
        _objc_retainAutoreleasedReturnValue();
        local_190 = 0;
        local_188 = uVar4;
        if ((local_110 != 0) && ((local_121 & 1) == 0)) {
          local_120 = local_120 + 1;
          lVar7 = *(long *)(param_1 + 0x80);
          (*(code *)PTR__objc_msgSend_02578628)
                    (lVar7,PTR_s_mediaGroupInfoCopy_sequence__026adb68,local_110,local_120);
          _objc_retainAutoreleasedReturnValue();
          lVar9 = local_190;
          local_190 = lVar7;
          (*(code *)PTR__objc_release_02578630)(lVar9);
        }
        uVar8 = *(ulong *)(param_1 + 0x80);
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar8,PTR_s_sendImageData_image_livePhotoVid_026ad920,local_178,local_180,
                   local_188,*(undefined8 *)(param_1 + 0x20),local_190);
        local_191 = (byte)uVar8;
        if (((uVar8 & 1) == 0) && (local_190 != 0)) {
          local_121 = 1;
          uVar4 = *(undefined8 *)(param_1 + 0x80);
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar4,PTR_s_sendImageData_image_livePhotoVid_026ad920,local_178,local_180,
                     local_188,*(undefined8 *)(param_1 + 0x20),0);
          local_191 = (byte)uVar4;
        }
        if ((local_191 & 1) == 0) {
          lVar9 = *(long *)(*(long *)(param_1 + 0x68) + 8);
          *(long *)(lVar9 + 0x18) = *(long *)(lVar9 + 0x18) + 1;
        }
        else {
          lVar9 = *(long *)(*(long *)(param_1 + 0x60) + 8);
          *(long *)(lVar9 + 0x18) = *(long *)(lVar9 + 0x18) + 1;
        }
        _objc_storeStrong(&local_190);
        _objc_storeStrong(&local_188,0);
        _objc_storeStrong(&local_180,0);
        _objc_storeStrong(&local_178,0);
        local_250 = local_250 + 1;
      } while (local_250 < local_248);
      local_248 = uVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_170,auStack_a8,0x10);
      local_250 = 0;
    } while (local_248 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar5);
  lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x78) + 8) + 0x28);
  (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_length_0269cca0);
  if (lVar3 != 0) {
    uVar5 = *(ulong *)(param_1 + 0x80);
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar5,PTR_s_sendAudioAtPath_toUsr__026adb70,
               *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x78) + 8) + 0x28),
               *(undefined8 *)(param_1 + 0x20));
    local_192 = (undefined1)uVar5;
    if ((uVar5 & 1) == 0) {
      lVar3 = *(long *)(*(long *)(param_1 + 0x68) + 8);
      *(long *)(lVar3 + 0x18) = *(long *)(lVar3 + 0x18) + 1;
    }
    else {
      lVar3 = *(long *)(*(long *)(param_1 + 0x60) + 8);
      *(long *)(lVar3 + 0x18) = *(long *)(lVar3 + 0x18) + 1;
    }
  }
  if (((*(byte *)(param_1 + 0x8b) & 1) == 0) && ((*(byte *)(param_1 + 0x89) & 1) == 0)) {
    uVar5 = *(ulong *)(param_1 + 0x30);
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_autoParseLinkSendCaptionEnabled_026adb78);
    if ((uVar5 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 0x38);
      (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_captionText_026adb80);
      _objc_retainAutoreleasedReturnValue();
      local_1a0 = lVar3;
      (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_length_0269cca0);
      if (lVar3 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (*(undefined8 *)(param_1 + 0x80),PTR_s_sendText_toUsr__026ad9f8,local_1a0,
                   *(undefined8 *)(param_1 + 0x20));
      }
      _objc_storeStrong(&local_1a0,0);
    }
  }
  local_1a1 = 0 < *(long *)(*(long *)(*(long *)(param_1 + 0x60) + 8) + 0x18);
  bVar1 = !(bool)local_1a1;
  if (bVar1) {
    local_280 = &cf_ZSOS1Y_;
  }
  else {
    local_280 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__S);
    _objc_retainAutoreleasedReturnValue();
    local_1b8 = local_280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_1b0 = local_280;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_1b8);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x80),PTR_s_finishProgressToastSuccess_text__026ad9e0,
             local_1a1 & 1,local_1b0);
  if (*(long *)(param_1 + 0x40) != 0) {
    (**(code **)(*(long *)(param_1 + 0x40) + 0x10))
              (*(long *)(param_1 + 0x40),local_1a1 & 1,local_1b0);
  }
  _objc_storeStrong(&local_1b0);
  _objc_storeStrong(&local_110,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

