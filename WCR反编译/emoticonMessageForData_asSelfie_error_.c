// emoticonMessageForData:asSelfie:error: @ 00f39b44

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x24 bytes */

ID WCRefineEmoticonToolsHelper::emoticonMessageForData_asSelfie_error_
             (ID param_1,SEL param_2,ID param_3,bool param_4,ID *param_5)

{
  bool bVar1;
  ID IVar2;
  undefined *puVar3;
  char *pcVar4;
  char *pcVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *local_178;
  cfstringStruct *local_168;
  cfstringStruct *local_130;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  undefined8 local_f0;
  char *local_e8;
  cfstringStruct *local_e0;
  undefined *local_d8;
  char *local_d0;
  undefined1 local_c2;
  bool local_c1;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  char *local_b0;
  char *local_a8;
  char *local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined *local_88;
  char *local_80;
  char *local_78;
  char *local_70;
  char *local_68;
  uint local_5c;
  undefined *local_58;
  ulong *local_50;
  byte local_41;
  undefined8 local_40;
  SEL local_38;
  ID local_30;
  char *local_28;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  local_41 = (byte)param_4;
  IVar2 = local_30;
  local_50 = param_5;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isUsableEmoticonImageData__026ac010,local_40)
  ;
  if ((IVar2 & 1) == 0) {
    puVar3 = PTR_WCRefineLocalEmoticonStore_026ce440;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_sendableDataFromData__026a3db8,local_40
              );
    _objc_retainAutoreleasedReturnValue();
    local_58 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_length_0269cca0);
    if ((puVar3 == (undefined *)0x0) ||
       (IVar2 = local_30,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_30,PTR_s_isUsableEmoticonImageData__026ac010,local_58), (IVar2 & 1) == 0)) {
      if (local_50 != (ulong *)0x0) {
        _objc_retainAutorelease();
        *local_50 = (ulong)&cf_VGr<h_NS_ec;
      }
      local_28 = (char *)0x0;
      local_5c = 1;
    }
    else {
      _objc_storeStrong(&local_40,local_58);
      local_5c = 0;
    }
    _objc_storeStrong(&local_58,0);
    if (local_5c != 0) goto LAB_00f3a3cc;
  }
  pcVar4 = "CEmoticonMgr";
  _objc_getClass();
  pcVar5 = "CEmoticonWrap";
  local_68 = pcVar4;
  _objc_getClass();
  pcVar4 = "CBaseFile";
  local_70 = pcVar5;
  _objc_getClass();
  pcVar5 = "EmoticonUtil";
  local_78 = pcVar4;
  _objc_getClass();
  local_88 = PTR_s_GetDataMD5__026ac140;
  local_90 = PTR_s_saveEmoticonToEmoticonDirForMd5__026ac148;
  local_98 = PTR_s_genEmoticonMsgForEmoticonWrap_im_026ac150;
  local_80 = pcVar5;
  if ((((local_70 != (char *)0x0) &&
       (pcVar4 = local_78,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_78,PTR_s_respondsToSelector__026ca818,PTR_s_GetDataMD5__026ac140),
       ((ulong)pcVar4 & 1) != 0)) &&
      (pcVar4 = local_80,
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_respondsToSelector__026ca818,local_90),
      ((ulong)pcVar4 & 1) != 0)) &&
     (pcVar4 = local_68,
     (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_respondsToSelector__026ca818,local_98),
     ((ulong)pcVar4 & 1) != 0)) {
    pcVar4 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,local_88,local_40);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = local_70;
    local_a0 = pcVar4;
    _objc_alloc_init();
    local_b0 = (char *)0x0;
    local_a8 = pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar5,PTR_s_respondsToSelector__026ca818,PTR_s_m_emojiInfo_026a3d98);
    if (((ulong)pcVar5 & 1) != 0) {
      pcVar5 = local_a8;
      (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_m_emojiInfo_026a3d98);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = local_b0;
      local_b0 = pcVar5;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
    }
    pcVar4 = local_a0;
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_length_0269cca0);
    if (((pcVar4 == (char *)0x0) || (local_b0 == (char *)0x0)) ||
       (pcVar4 = local_b0,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_b0,PTR_s_respondsToSelector__026ca818,PTR_s_setMd5__026ac158),
       ((ulong)pcVar4 & 1) == 0)) {
LAB_00f3a0f8:
      local_5c = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setMd5__026ac158,local_a0);
      local_c1 = false;
      bVar1 = (local_41 & 1) == 0;
      if (bVar1) {
        local_130 = (cfstringStruct *)0x0;
      }
      else {
        local_130 = &cf_Selfie_;
        (*(code *)PTR__objc_msgSend_02578628)
                  (&cf_Selfie_,PTR_s_stringByAppendingString__0269d398,local_a0);
        _objc_retainAutoreleasedReturnValue();
        local_c0 = local_130;
      }
      local_c1 = !bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_b8 = local_130;
      if ((local_c1 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_c0);
      }
      pcVar4 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b0,PTR_s_respondsToSelector__026ca818,PTR_s_setActivityId__026ac160);
      if (((ulong)pcVar4 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setActivityId__026ac160,local_b8);
      }
      pcVar4 = local_a8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_a8,PTR_s_respondsToSelector__026ca818,PTR_s_setM_uiType__026ac168);
      if (((ulong)pcVar4 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setM_uiType__026ac168,2);
      }
      pcVar4 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,local_90,local_a0,local_40,1);
      local_c2 = SUB81(pcVar4,0);
      if (((ulong)pcVar4 & 1) == 0) {
LAB_00f3a0cc:
        local_5c = 0;
      }
      else {
        pcVar4 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,local_98,local_a8,local_40);
        _objc_retainAutoreleasedReturnValue();
        local_d0 = pcVar4;
        if (pcVar4 != (char *)0x0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = pcVar4;
        }
        local_5c = (uint)(pcVar4 != (char *)0x0);
        _objc_storeStrong(&local_d0,0);
        if (local_5c == 0) goto LAB_00f3a0cc;
      }
      _objc_storeStrong(&local_b8,0);
      if (local_5c == 0) goto LAB_00f3a0f8;
    }
    _objc_storeStrong(&local_b0);
    _objc_storeStrong(&local_a8,0);
    _objc_storeStrong(&local_a0,0);
    if (local_5c != 0) goto LAB_00f3a3cc;
  }
  local_d8 = PTR_s_emoticonMsgForImageData_errorMsg_026ac170;
  pcVar4 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_68,PTR_s_respondsToSelector__026ca818,
             PTR_s_emoticonMsgForImageData_errorMsg_026ac170);
  if (((ulong)pcVar4 & 1) == 0) {
    if (local_50 != (ulong *)0x0) {
      _objc_retainAutorelease();
      *local_50 = (ulong)&cf_S_MRHr_gN_ecubh_;
    }
    local_28 = (char *)0x0;
    local_5c = 1;
  }
  else {
    local_e0 = (cfstringStruct *)0x0;
    local_f0 = 0;
    pcVar4 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,local_d8,local_40,&local_f0);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeStrong(&local_e0,local_f0);
    pcVar6 = local_e0;
    local_e8 = pcVar4;
    if ((pcVar4 == (char *)0x0) && (local_50 != (ulong *)0x0)) {
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_isKindOfClass__0269cd68,puVar3);
      bVar1 = ((ulong)pcVar6 & 1) == 0;
      if (bVar1) {
        local_168 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_description_026ca5f8);
        _objc_retainAutoreleasedReturnValue();
        local_100 = local_168;
      }
      else {
        local_168 = local_e0;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_f8 = local_168;
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_100);
      }
      pcVar6 = local_f8;
      (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_length_0269cca0);
      if (pcVar6 == (cfstringStruct *)0x0) {
        local_178 = &cf_ubh_1Y_;
      }
      else {
        local_178 = local_f8;
      }
      _objc_retainAutorelease();
      *local_50 = (ulong)local_178;
      _objc_storeStrong(&local_f8,0);
    }
    pcVar4 = local_e8;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = pcVar4;
    local_5c = 1;
    _objc_storeStrong(&local_e8);
    _objc_storeStrong(&local_e0,0);
  }
LAB_00f3a3cc:
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

