// FUN_006909b0 @ 006909b0

byte FUN_006909b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  char *pcVar5;
  cfstringStruct *pcVar6;
  undefined *puVar7;
  char *pcVar8;
  char *local_c0;
  cfstringStruct *local_b8;
  char *local_b0;
  undefined *local_a8;
  long local_a0;
  undefined4 local_98;
  undefined4 local_94;
  cfstringStruct *local_90;
  char *local_88;
  char *local_80;
  char *local_78;
  long local_70;
  long local_68;
  long local_60 [3];
  long local_48;
  long local_40;
  long local_38;
  long local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_3);
  lVar2 = local_30;
  FUN_0067d82c();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = local_38;
  local_48 = lVar2;
  FUN_0067d82c();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_40;
  local_60[0] = lVar3;
  FUN_0067d82c();
  _objc_retainAutoreleasedReturnValue();
  local_68 = lVar2;
  FUN_006919bc();
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = "CMessageWrap";
  local_70 = lVar2;
  _objc_getClass();
  pcVar5 = "CExtendInfoOfAPP";
  local_78 = pcVar4;
  _objc_getClass();
  pcVar4 = "CMessageMgr";
  local_80 = pcVar5;
  _objc_getClass();
  FUN_006842e0();
  _objc_retainAutoreleasedReturnValue();
  pcVar6 = &cf_AddAppMsg_MsgWrap_Data_Scene_;
  local_88 = pcVar4;
  _NSSelectorFromString();
  lVar2 = local_48;
  local_90 = pcVar6;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
  if (((((lVar2 != 0) &&
        (lVar2 = local_60[0],
        (*(code *)PTR__objc_msgSend_02578628)(local_60[0],PTR_s_length_0269cca0), lVar2 != 0)) &&
       (lVar2 = local_68, (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0),
       lVar2 != 0)) &&
      ((lVar2 = local_70, (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0),
       lVar2 != 0 && (local_78 != (char *)0x0)))) && (local_88 != (char *)0x0)) {
    pcVar4 = local_88;
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_respondsToSelector__026ca818,local_90);
    uVar1 = SUB84(pcVar4,0);
    if (((ulong)pcVar4 & 1) != 0) {
      FUN_00691ac8();
      lVar2 = local_68;
      local_98 = uVar1;
      FUN_00691c44();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_a0 = lVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                 &
                 cf_<msg><appmsgappid___sdkver__0_><title>__<_title><type>1<_type><appattach><cdnthumbaeskey><_cdnthumbaeskey><aeskey><_aeskey><_appattach><forwardflag>1<_forwardflag><wxaInfo><appId><_[CDATA[]]><_appId><nickname><_[CDATA[]]><_nickname><iconUrl><_[CDATA[]]><_iconUrl><_wxaInfo><_appmsg><_msg>
                );
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = local_78;
      local_a8 = puVar7;
      _objc_alloc();
      pcVar5 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_initWithMsgType__0269d3f8,0x31);
      _objc_retainAutoreleasedReturnValue();
      local_b0 = pcVar5;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      if (local_b0 == (char *)0x0) {
        local_21 = 0;
        local_94 = 1;
      }
      else {
        FUN_00691da4(local_b0,&cf_m_nsContent,local_a8);
        FUN_00691da4(local_b0,&cf_m_nsToUsr,local_48);
        FUN_00691da4(local_b0,&cf_m_nsFromUsr,local_70);
        pcVar4 = local_b0;
        puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInt__0269d800,
                   local_98);
        _objc_retainAutoreleasedReturnValue();
        FUN_00691da4(pcVar4,&cf_m_uiCreateTime);
        (*(code *)PTR__objc_release_02578630)(puVar7);
        pcVar4 = local_b0;
        puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0x31);
        _objc_retainAutoreleasedReturnValue();
        FUN_00691da4(pcVar4,&cf_m_uiMessageType);
        (*(code *)PTR__objc_release_02578630)(puVar7);
        pcVar4 = local_b0;
        puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,1);
        _objc_retainAutoreleasedReturnValue();
        FUN_00691da4(pcVar4,&cf_m_uiStatus);
        (*(code *)PTR__objc_release_02578630)(puVar7);
        pcVar4 = local_b0;
        puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
        _objc_retainAutoreleasedReturnValue();
        FUN_00691da4(pcVar4,&cf_m_uiMsgFlag);
        (*(code *)PTR__objc_release_02578630)(puVar7);
        pcVar4 = local_b0;
        puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,1);
        _objc_retainAutoreleasedReturnValue();
        FUN_00691da4(pcVar4,&cf_m_bNew);
        (*(code *)PTR__objc_release_02578630)(puVar7);
        pcVar4 = local_b0;
        puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,1);
        _objc_retainAutoreleasedReturnValue();
        FUN_00691da4(pcVar4,&cf_m_uiImgStatus);
        (*(code *)PTR__objc_release_02578630)(puVar7);
        pcVar4 = local_b0;
        puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
        _objc_retainAutoreleasedReturnValue();
        FUN_00691da4(pcVar4,&cf_m_bForward);
        (*(code *)PTR__objc_release_02578630)(puVar7);
        FUN_00691da4(local_b0,&cf_m_nsRealChatUsr,&cf___);
        pcVar4 = local_b0;
        puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
        _objc_retainAutoreleasedReturnValue();
        FUN_00691da4(pcVar4,&cf_m_uiIsSenderStatus);
        (*(code *)PTR__objc_release_02578630)(puVar7);
        pcVar4 = local_b0;
        puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                   &
                   cf_<msgsource><bizflag>0<_bizflag><alnode><fr>2<_fr><_alnode><weappsourceUsername>_____<_weappsourceUsername><_msgsource>
                  );
        _objc_retainAutoreleasedReturnValue();
        FUN_00691da4(pcVar4,&cf_m_nsMsgSource);
        (*(code *)PTR__objc_release_02578630)(puVar7);
        pcVar6 = &cf_AsyncOnAddMsg_MsgWrap_;
        _NSSelectorFromString();
        DAT_028cbd4a = 1;
        local_b8 = pcVar6;
        FUN_00691f30(&cf_beforeAsyncOnAddMsg,local_48,local_b0);
        pcVar4 = local_88;
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_respondsToSelector__026ca818,local_b8);
        if (((ulong)pcVar4 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_88,local_b8,local_48,local_b0);
        }
        FUN_00691f30(&cf_afterAsyncOnAddMsg,local_48,local_b0);
        pcVar4 = local_b0;
        FUN_00680afc(local_b0,&cf_m_extendInfoWithMsgType);
        _objc_retainAutoreleasedReturnValue();
        local_c0 = pcVar4;
        if ((pcVar4 == (char *)0x0) && (local_80 != (char *)0x0)) {
          pcVar5 = local_80;
          _objc_alloc();
          pcVar8 = pcVar5;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_init_026ca6a8);
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = local_c0;
          local_c0 = pcVar8;
          (*(code *)PTR__objc_release_02578630)(pcVar4);
          (*(code *)PTR__objc_release_02578630)(pcVar5);
          FUN_00691da4(local_b0,&cf_m_extendInfoWithMsgType,local_c0);
        }
        FUN_00691da4(local_c0,&cf_m_nsAppID,&cf___);
        FUN_00691da4(local_c0,&cf_m_nsTitle,local_68);
        FUN_00691da4(local_c0,&cf_m_nsDesc,&cf___);
        FUN_00691da4(local_c0,&cf_m_nsAppName,&cf___);
        pcVar4 = local_c0;
        puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,1);
        _objc_retainAutoreleasedReturnValue();
        FUN_00691da4(pcVar4,&cf_m_uiAppMsgInnerType);
        (*(code *)PTR__objc_release_02578630)(puVar7);
        FUN_00691da4(local_b0,&cf_m_nsContent,&cf___);
        FUN_00691f30(&cf_beforeAddAppMsg,local_48,local_b0);
        lVar2 = local_48;
        pcVar5 = local_88;
        pcVar6 = local_90;
        pcVar4 = local_b0;
        puVar7 = PTR__OBJC_CLASS___NSData_026ce1d0;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_data_0269d850)
        ;
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar5,pcVar6,lVar2,pcVar4,puVar7,3);
        (*(code *)PTR__objc_release_02578630)(puVar7);
        FUN_00691f30(&cf_afterAddAppMsg,local_48,local_b0);
        DAT_028cbd4a = 0;
        local_21 = 1;
        local_94 = 1;
        _objc_storeStrong(&local_c0,0);
      }
      _objc_storeStrong(&local_b0);
      _objc_storeStrong(&local_a8,0);
      _objc_storeStrong(&local_a0,0);
      goto LAB_00691774;
    }
  }
  local_21 = 0;
  local_94 = 1;
LAB_00691774:
  _objc_storeStrong(&local_88);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(local_60,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

