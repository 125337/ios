// emitLinkCardToUsr:url:title:desc:cover:thumbData: @ 01006150

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x40 bytes */

bool __thiscall
WCRefineLinkMediaSender::emitLinkCardToUsr_url_title_desc_cover_thumbData_
          (WCRefineLinkMediaSender *this,ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,
          ID param_6,ID param_7,ID param_8)

{
  bool bVar1;
  long lVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  char *pcVar6;
  char *pcVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  char *pcVar11;
  double in_d0;
  undefined *local_2a8;
  cfstringStruct *local_1c0;
  cfstringStruct *local_188;
  undefined *local_140;
  undefined *local_138 [2];
  char *local_128;
  char *local_120;
  undefined *local_118;
  int local_10c;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  bool local_f1;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  char *local_d8;
  char *local_d0;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  bool local_99;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  undefined4 local_6c;
  undefined *local_68;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  long local_48;
  long local_40;
  SEL local_38;
  ID local_30;
  byte local_21;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_5);
  local_58 = 0;
  _objc_storeStrong(&local_58,param_6);
  local_60 = 0;
  _objc_storeStrong(&local_60,param_7);
  local_68 = (undefined *)0x0;
  _objc_storeStrong(&local_68,param_8);
  lVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if (((lVar2 == 0) ||
      (lVar2 = local_48, (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0),
      lVar2 == 0)) ||
     (lVar2 = local_50, (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0),
     lVar2 == 0)) {
    local_21 = 0;
    local_6c = 1;
  }
  else {
    local_78 = (cfstringStruct *)0x0;
    pcVar3 = &cf_SettingUtil;
    _NSClassFromString();
    local_80 = pcVar3;
    if ((pcVar3 != (cfstringStruct *)0x0) &&
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_getLocalUsrName__0269ce98),
       ((ulong)pcVar3 & 1) != 0)) {
      pcVar4 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_getLocalUsrName__0269ce98,0);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_78;
      local_78 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
    }
    pcVar3 = local_78;
    puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
    if ((((ulong)pcVar3 & 1) == 0) ||
       (pcVar3 = local_78, (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0),
       pcVar3 == (cfstringStruct *)0x0)) {
      local_188 = &cf_MMServiceCenter;
      _NSClassFromString();
      local_99 = false;
      bVar1 = local_188 == (cfstringStruct *)0x0;
      local_88 = local_188;
      if (bVar1) {
        local_188 = (cfstringStruct *)0x0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_defaultCenter_026ca5e0);
        _objc_retainAutoreleasedReturnValue();
        local_98 = local_188;
      }
      local_99 = !bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_90 = local_188;
      if ((local_99 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_98);
      }
      local_a8 = (cfstringStruct *)0x0;
      if ((local_90 != (cfstringStruct *)0x0) &&
         (pcVar4 = local_90,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_90,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
         pcVar3 = local_90, puVar5 = PTR_s_getService__0269d170, ((ulong)pcVar4 & 1) != 0)) {
        pcVar4 = &cf_CContactMgr;
        _NSClassFromString(&cf_CContactMgr);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,puVar5,pcVar4);
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = local_a8;
        local_a8 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar4);
      }
      local_b0 = (cfstringStruct *)0x0;
      if ((local_a8 != (cfstringStruct *)0x0) &&
         (pcVar3 = local_a8,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_a8,PTR_s_respondsToSelector__026ca818,PTR_s_getSelfContact_0269da60),
         ((ulong)pcVar3 & 1) != 0)) {
        pcVar4 = local_a8;
        (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_getSelfContact_0269da60);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = local_b0;
        local_b0 = pcVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
      }
      pcVar4 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_valueForKey__0269d128,&cf_m_nsUsrName);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_78;
      local_78 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      _objc_storeStrong(&local_b0);
      _objc_storeStrong(&local_a8,0);
      _objc_storeStrong(&local_90,0);
    }
    pcVar6 = "CMessageWrap";
    _objc_getClass();
    pcVar7 = "CExtendInfoOfAPP";
    local_d0 = pcVar6;
    _objc_getClass();
    local_1c0 = &cf_MMServiceCenter;
    local_d8 = pcVar7;
    _NSClassFromString();
    local_f1 = false;
    bVar1 = local_1c0 == (cfstringStruct *)0x0;
    local_e0 = local_1c0;
    if (bVar1) {
      local_1c0 = (cfstringStruct *)0x0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_defaultCenter_026ca5e0);
      _objc_retainAutoreleasedReturnValue();
      local_f0 = local_1c0;
    }
    local_f1 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_e8 = local_1c0;
    if ((local_f1 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_f0);
    }
    local_100 = (cfstringStruct *)0x0;
    if ((local_e8 != (cfstringStruct *)0x0) &&
       (pcVar4 = local_e8,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_e8,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
       pcVar3 = local_e8, puVar5 = PTR_s_getService__0269d170, ((ulong)pcVar4 & 1) != 0)) {
      pcVar4 = &cf_CMessageMgr;
      _NSClassFromString(&cf_CMessageMgr);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,puVar5,pcVar4);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = local_100;
      local_100 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
    }
    pcVar3 = &cf_AddAppMsg_MsgWrap_Data_Scene_;
    _NSSelectorFromString();
    pcVar4 = local_78;
    puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_108 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
    if ((((((ulong)pcVar4 & 1) == 0) ||
         (pcVar3 = local_78, (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0),
         pcVar3 == (cfstringStruct *)0x0)) || (local_d0 == (char *)0x0)) ||
       ((local_100 == (cfstringStruct *)0x0 ||
        (pcVar3 = local_100,
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_100,PTR_s_respondsToSelector__026ca818,local_108), ((ulong)pcVar3 & 1) == 0
        )))) {
      local_21 = 0;
      local_6c = 1;
    }
    else {
      puVar5 = PTR__OBJC_CLASS___NSDate_026cdf88;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar5);
      puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
      lVar2 = local_50;
      local_10c = (int)in_d0;
      FUN_01007090();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = local_58;
      FUN_01007090();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = local_48;
      FUN_01007090();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = local_60;
      FUN_01007090();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar5,PTR_s_stringWithFormat__0269cca8,
                 &
                 cf_<msg><appmsgappid___sdkver__0_><title>__<_title><des>__<_des><type>5<_type><url>__<_url><thumburl>__<_thumburl><appattach><cdnthumbaeskey><_cdnthumbaeskey><aeskey><_aeskey><_appattach><_appmsg><_msg>
                );
      _objc_retainAutoreleasedReturnValue();
      local_118 = puVar5;
      (*(code *)PTR__objc_release_02578630)(uVar10);
      (*(code *)PTR__objc_release_02578630)(lVar9);
      (*(code *)PTR__objc_release_02578630)(uVar8);
      (*(code *)PTR__objc_release_02578630)(lVar2);
      pcVar6 = local_d0;
      _objc_alloc();
      pcVar7 = pcVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_120 = pcVar7;
      (*(code *)PTR__objc_release_02578630)(pcVar6);
      if (local_120 == (char *)0x0) {
        local_21 = 0;
        local_6c = 1;
      }
      else {
        FUN_01007234(local_120,&cf_m_nsContent,local_118);
        FUN_01007234(local_120,&cf_m_nsToUsr,local_40);
        FUN_01007234(local_120,&cf_m_nsFromUsr,local_78);
        pcVar6 = local_120;
        puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInt__0269d800,
                   local_10c);
        _objc_retainAutoreleasedReturnValue();
        FUN_01007234(pcVar6,&cf_m_uiCreateTime);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        pcVar6 = local_120;
        puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0x31);
        _objc_retainAutoreleasedReturnValue();
        FUN_01007234(pcVar6,&cf_m_uiMessageType);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        pcVar6 = local_120;
        puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810);
        _objc_retainAutoreleasedReturnValue();
        FUN_01007234(pcVar6,&cf_m_uiStatus);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        pcVar6 = local_120;
        puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,1);
        _objc_retainAutoreleasedReturnValue();
        FUN_01007234(pcVar6,&cf_m_bNew);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        local_128 = (char *)0x0;
        pcVar7 = local_120;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_120,PTR_s_valueForKey__0269d128,&cf_m_extendInfoWithMsgType);
        _objc_retainAutoreleasedReturnValue();
        pcVar6 = local_128;
        local_128 = pcVar7;
        (*(code *)PTR__objc_release_02578630)(pcVar6);
        if ((local_128 == (char *)0x0) && (local_d8 != (char *)0x0)) {
          pcVar7 = local_d8;
          _objc_alloc();
          pcVar11 = pcVar7;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          pcVar6 = local_128;
          local_128 = pcVar11;
          (*(code *)PTR__objc_release_02578630)(pcVar6);
          (*(code *)PTR__objc_release_02578630)(pcVar7);
          FUN_01007234(local_120,&cf_m_extendInfoWithMsgType,local_128);
        }
        FUN_01007234(local_128,&cf_m_nsTitle,local_50);
        FUN_01007234(local_128,&cf_m_nsDesc,local_58);
        FUN_01007234(local_128,&cf_m_nsAppMediaUrl,local_48);
        FUN_01007234(local_128,&cf_m_nsShareOpenUrl,local_48);
        FUN_01007234(local_128,&cf_m_nsThumbUrl,local_60);
        pcVar6 = local_128;
        puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,5);
        _objc_retainAutoreleasedReturnValue();
        FUN_01007234(pcVar6,&cf_m_uiAppMsgInnerType);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        puVar5 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
        if (puVar5 != (undefined *)0x0) {
          FUN_01007234(local_120,&cf_m_dtThumbnail,local_68);
        }
        FUN_01007234(local_120,&cf_m_nsContent,&::cf___);
        puVar5 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
        if (puVar5 == (undefined *)0x0) {
          local_2a8 = PTR__OBJC_CLASS___NSData_026ce1d0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_data_0269d850);
          _objc_retainAutoreleasedReturnValue();
          local_140 = local_2a8;
        }
        else {
          local_2a8 = local_68;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_138[0] = local_2a8;
        if (puVar5 == (undefined *)0x0) {
          (*(code *)PTR__objc_release_02578630)(local_140);
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_100,local_108,local_40,local_120,local_138[0],3)
        ;
        local_21 = 1;
        local_6c = 1;
        _objc_storeStrong(local_138);
        _objc_storeStrong(&local_128,0);
      }
      _objc_storeStrong(&local_120);
      _objc_storeStrong(&local_118,0);
    }
    _objc_storeStrong(&local_100);
    _objc_storeStrong(&local_e8,0);
    _objc_storeStrong(&local_78,0);
  }
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  return local_21 & 1;
}

