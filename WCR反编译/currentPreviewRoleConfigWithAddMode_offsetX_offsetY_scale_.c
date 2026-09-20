// currentPreviewRoleConfigWithAddMode:offsetX:offsetY:scale: @ 0182946c

/* Function Stack Size: 0x30 bytes */

void WCRefineAvatarFrameLibraryViewController::
     currentPreviewRoleConfigWithAddMode_offsetX_offsetY_scale_
               (ID param_1,SEL param_2,long_long *param_3,double *param_4,double *param_5,
               double *param_6)

{
  double dVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  double local_68;
  double local_60;
  double local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  double *local_40;
  double *local_38;
  double *local_30;
  long_long *local_28;
  SEL local_20;
  undefined1 *local_18;
  
  dVar1 = DAT_02323ca0;
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_40 = param_6;
  local_38 = param_5;
  local_30 = param_4;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = (undefined1 *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_58 = 1.5;
  puVar3 = local_18;
  local_48 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectionContextEnabled_026b6410);
  if (((ulong)puVar3 & 1) == 0) {
    puVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_previewRole_026b63a8);
    if (puVar3 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
      local_50 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_avatarFrameChatPageOtherAddMode_0269df60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_avatarFrameChatPageOtherOffsetX_0269df88)
      ;
      local_60 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_avatarFrameChatPageOtherOffsetY_0269df90)
      ;
      local_68 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_avatarFrameChatPageOtherScale_0269df98);
    }
    else {
      puVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_previewRole_026b63a8);
      if (puVar3 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
        puVar3 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_avatarFrameChatPageDistinguishSe_0269df00);
        local_50 = local_48;
        if (((ulong)puVar3 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_avatarFrameChatPageOtherAddMode_0269df60);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_avatarFrameChatPageOtherOffsetX_0269df88);
          local_60 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_avatarFrameChatPageOtherOffsetY_0269df90);
          local_68 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_avatarFrameChatPageOtherScale_0269df98);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_avatarFrameChatPageSelfAddMode_0269df68);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_avatarFrameChatPageSelfOffsetX_0269dfa0);
          local_60 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_avatarFrameChatPageSelfOffsetY_0269dfa8);
          local_68 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_avatarFrameChatPageScale_0269dfb0);
        }
      }
      else {
        local_50 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_avatarFrameChatListAddMode_0269df58);
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_avatarFrameChatListOffsetX_0269df70);
        local_60 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_avatarFrameChatListOffsetY_0269df78);
        local_68 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_avatarFrameChatListScale_0269df80);
      }
    }
  }
  else {
    local_50 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectionContextAddMode_026b6420);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectionContextOffsetX_026b6428);
    local_60 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectionContextOffsetY_026b6430);
    local_68 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectionContextScale_026b6438);
  }
  if ((local_68 <= 0.0) || (5.0 < local_68)) {
    local_68 = 1.5;
  }
  if (local_68 < dVar1) {
    local_68 = dVar1;
  }
  if (local_28 != (long_long *)0x0) {
    *local_28 = (long_long)local_50;
  }
  if (local_30 != (double *)0x0) {
    *local_30 = local_58;
  }
  if (local_38 != (double *)0x0) {
    *local_38 = local_60;
  }
  if (local_40 != (double *)0x0) {
    *local_40 = local_68;
  }
  _objc_storeStrong(&local_48,0);
  return;
}

