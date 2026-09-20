// emoticonWrapFromMessageWrap:asSelfie: @ 00f4a794

/* Function Stack Size: 0x1c bytes */

ID WCRefineEmoticonToolsHelper::emoticonWrapFromMessageWrap_asSelfie_
             (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  bool bVar1;
  undefined *puVar2;
  char *pcVar3;
  char *pcVar4;
  ID IVar5;
  cfstringStruct *local_148;
  ID local_a8;
  bool local_99;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  byte local_81;
  ID local_80;
  ID local_78;
  int local_6c;
  ID local_68;
  char *local_60;
  char *local_58;
  char *local_50;
  undefined4 local_48;
  byte local_41;
  long local_40;
  SEL local_38;
  ID local_30;
  char *local_28;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  local_41 = (byte)param_4;
  if (local_40 == 0) {
    local_28 = (char *)0x0;
    local_48 = 1;
  }
  else {
    pcVar3 = "CEmoticonWrap";
    _objc_getClass();
    local_50 = pcVar3;
    if (pcVar3 == (char *)0x0) {
      local_28 = (char *)0x0;
      local_48 = 1;
    }
    else {
      _objc_alloc_init();
      local_60 = (char *)0x0;
      local_58 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_m_emojiInfo_026a3d98);
      if (((ulong)pcVar3 & 1) != 0) {
        pcVar4 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_m_emojiInfo_026a3d98);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = local_60;
        local_60 = pcVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
      }
      IVar5 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_emoticonMD5FromMessageWrap__026aa7d0,local_40);
      _objc_retainAutoreleasedReturnValue();
      local_68 = IVar5;
      (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_length_0269cca0);
      if ((IVar5 == 0) || (local_60 == (char *)0x0)) {
        local_28 = (char *)0x0;
        local_48 = 1;
      }
      else {
        pcVar3 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,PTR_s_respondsToSelector__026ca818,PTR_s_setMd5__026ac158);
        if (((ulong)pcVar3 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setMd5__026ac158,local_68);
        }
        IVar5 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_unsignedIntValueFromObject_key_f_026ac3f8,local_40,
                   &cf_m_uiEmoticonType,2);
        local_6c = (int)IVar5;
        if (local_6c == 0) {
          local_6c = 2;
        }
        pcVar3 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_setM_uiType__026ac168);
        if (((ulong)pcVar3 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setM_uiType__026ac168,local_6c);
        }
        local_81 = 0;
        bVar1 = (local_41 & 1) == 0;
        if (bVar1) {
          local_a8 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,PTR_s_stringValueFromObject_key__026abfe0,local_40,
                     &cf_m_nsEmoticonBelongToProductID);
          _objc_retainAutoreleasedReturnValue();
          local_80 = local_a8;
        }
        else {
          local_a8 = 0;
        }
        local_81 = bVar1;
        (*(code *)PTR__objc_retain_02578638)();
        local_78 = local_a8;
        if ((local_81 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_80);
        }
        pcVar3 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,PTR_s_respondsToSelector__026ca818,PTR_s_setProductId__026ac400);
        if (((ulong)pcVar3 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setProductId__026ac400,local_78);
        }
        pcVar4 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,PTR_s_respondsToSelector__026ca818,PTR_s_setDesignerId__026ac408);
        pcVar3 = local_60;
        puVar2 = PTR_s_setDesignerId__026ac408;
        if (((ulong)pcVar4 & 1) != 0) {
          IVar5 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,PTR_s_stringValueFromObject_key__026abfe0,local_40,&cf_m_nsDesignerId)
          ;
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(pcVar3,puVar2);
          (*(code *)PTR__objc_release_02578630)(IVar5);
        }
        pcVar4 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,PTR_s_respondsToSelector__026ca818,PTR_s_setThumbUrl__026ac410);
        pcVar3 = local_60;
        puVar2 = PTR_s_setThumbUrl__026ac410;
        if (((ulong)pcVar4 & 1) != 0) {
          IVar5 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,PTR_s_stringValueFromObject_key__026abfe0,local_40,&cf_m_nsThumbImgUrl
                    );
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(pcVar3,puVar2);
          (*(code *)PTR__objc_release_02578630)(IVar5);
        }
        pcVar4 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,PTR_s_respondsToSelector__026ca818,PTR_s_setAttachedText__026ac418);
        pcVar3 = local_60;
        puVar2 = PTR_s_setAttachedText__026ac418;
        if (((ulong)pcVar4 & 1) != 0) {
          IVar5 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,PTR_s_stringValueFromObject_key__026abfe0,local_40,&cf_m_attachedText)
          ;
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(pcVar3,puVar2);
          (*(code *)PTR__objc_release_02578630)(IVar5);
        }
        pcVar4 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,PTR_s_respondsToSelector__026ca818,PTR_s_setAttachedTextColor__026ac420)
        ;
        pcVar3 = local_60;
        puVar2 = PTR_s_setAttachedTextColor__026ac420;
        if (((ulong)pcVar4 & 1) != 0) {
          IVar5 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,PTR_s_stringValueFromObject_key__026abfe0,local_40,
                     &cf_m_attachedTextColor);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(pcVar3,puVar2);
          (*(code *)PTR__objc_release_02578630)(IVar5);
        }
        pcVar4 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,PTR_s_respondsToSelector__026ca818,PTR_s_setLensId__026ac428);
        pcVar3 = local_60;
        puVar2 = PTR_s_setLensId__026ac428;
        if (((ulong)pcVar4 & 1) != 0) {
          IVar5 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,PTR_s_stringValueFromObject_key__026abfe0,local_40,&cf_m_lensId);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(pcVar3,puVar2);
          (*(code *)PTR__objc_release_02578630)(IVar5);
        }
        pcVar4 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,PTR_s_respondsToSelector__026ca818,PTR_s_setLinkId__026ac430);
        pcVar3 = local_60;
        puVar2 = PTR_s_setLinkId__026ac430;
        if (((ulong)pcVar4 & 1) != 0) {
          IVar5 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,PTR_s_stringValueFromObject_key__026abfe0,local_40,&cf_m_nsLinkId);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(pcVar3,puVar2);
          (*(code *)PTR__objc_release_02578630)(IVar5);
        }
        pcVar3 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,PTR_s_respondsToSelector__026ca818,
                   PTR_s_copyDownloadInfoFromMsg__026ac438);
        if (((ulong)pcVar3 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_60,PTR_s_copyDownloadInfoFromMsg__026ac438,local_40);
        }
        local_99 = (local_41 & 1) == 0;
        if (local_99) {
          local_148 = (cfstringStruct *)0x0;
        }
        else {
          local_148 = &cf_Selfie_;
          (*(code *)PTR__objc_msgSend_02578628)
                    (&cf_Selfie_,PTR_s_stringByAppendingString__0269d398,local_68);
          _objc_retainAutoreleasedReturnValue();
          local_98 = local_148;
        }
        local_99 = !local_99;
        (*(code *)PTR__objc_retain_02578638)();
        local_90 = local_148;
        if (local_99) {
          (*(code *)PTR__objc_release_02578630)(local_98);
        }
        pcVar3 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,PTR_s_respondsToSelector__026ca818,PTR_s_setActivityId__026ac160);
        if (((ulong)pcVar3 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setActivityId__026ac160,local_90);
        }
        pcVar3 = local_58;
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = pcVar3;
        local_48 = 1;
        _objc_storeStrong(&local_90);
        _objc_storeStrong(&local_78,0);
      }
      _objc_storeStrong(&local_68);
      _objc_storeStrong(&local_60,0);
      _objc_storeStrong(&local_58,0);
    }
  }
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

