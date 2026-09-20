// wcr_buildImageMessageWrapForSend:data:toUsr: @ 01672b84

/* Function Stack Size: 0x28 bytes */

ID __thiscall
WCRSuperFloatCropViewController::wcr_buildImageMessageWrapForSend_data_toUsr_
          (WCRSuperFloatCropViewController *this,ID param_1,SEL param_2,ID param_3,ID param_4,
          ID param_5)

{
  bool bVar1;
  char *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  char *pcVar8;
  double in_d0;
  cfstringStruct *local_1a0;
  cfstringStruct *local_e8;
  cfstringStruct *local_d8;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  undefined *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  int local_54;
  cfstringStruct *local_50;
  char *local_48;
  long local_40;
  SEL local_38;
  ID local_30;
  cfstringStruct *local_28;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  local_48 = (char *)0x0;
  _objc_storeStrong(&local_48,param_4);
  local_50 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_50,param_5);
  if ((local_40 == 0) ||
     (pcVar2 = local_48, (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0),
     pcVar2 == (char *)0x0)) {
    local_28 = (cfstringStruct *)0x0;
    local_54 = 1;
  }
  else {
    pcVar3 = (cfstringStruct *)PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_getCurrentUserWxid_0269e148);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_d8 = &::cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = local_d8;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_e8 = local_60;
    }
    else {
      local_e8 = local_50;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = local_e8;
    pcVar3 = &cf_CMessageWrap;
    _NSClassFromString();
    local_70 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_28 = (cfstringStruct *)0x0;
      local_54 = 1;
    }
    else {
      local_78 = (cfstringStruct *)0x0;
      local_80 = PTR_s_initWithMsgType_nsFromUsr__026a9ae8;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar3,PTR_s_instancesRespondToSelector__0269da90,
                 PTR_s_initWithMsgType_nsFromUsr__026a9ae8);
      if (((ulong)pcVar3 & 1) == 0) {
        pcVar3 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_70,PTR_s_instancesRespondToSelector__0269da90,
                   PTR_s_initWithMsgType__0269d3f8);
        if (((ulong)pcVar3 & 1) != 0) {
          pcVar4 = local_70;
          _objc_alloc();
          pcVar5 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          pcVar3 = local_78;
          local_78 = pcVar5;
          (*(code *)PTR__objc_release_02578630)(pcVar3);
          (*(code *)PTR__objc_release_02578630)(pcVar4);
        }
      }
      else {
        pcVar4 = local_70;
        _objc_alloc();
        pcVar5 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = local_78;
        local_78 = pcVar5;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        (*(code *)PTR__objc_release_02578630)(pcVar4);
      }
      pcVar3 = local_78;
      if (local_78 == (cfstringStruct *)0x0) {
        local_28 = (cfstringStruct *)0x0;
        local_54 = 1;
      }
      else {
        puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInt__0269d800,3);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar3,PTR_s_setValue_forKey__0269d300,puVar6,&cf_m_uiMessageType);
        (*(code *)PTR__objc_release_02578630)(puVar6);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_78,PTR_s_setValue_forKey__0269d300,local_60,&cf_m_nsFromUsr);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_78,PTR_s_setValue_forKey__0269d300,local_68,&cf_m_nsToUsr);
        pcVar3 = local_78;
        puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
        puVar7 = PTR__OBJC_CLASS___NSDate_026cdf88;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48)
        ;
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar6,PTR_s_numberWithUnsignedInt__0269d800,(int)in_d0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar3,PTR_s_setValue_forKey__0269d300,puVar6,&cf_m_uiCreateTime);
        (*(code *)PTR__objc_release_02578630)(puVar6);
        (*(code *)PTR__objc_release_02578630)(puVar7);
        pcVar3 = local_78;
        puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInt__0269d800,1);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar3,PTR_s_setValue_forKey__0269d300,puVar6,&cf_m_uiStatus);
        (*(code *)PTR__objc_release_02578630)(puVar6);
        pcVar3 = local_78;
        puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar3,PTR_s_setValue_forKey__0269d300,puVar6,&cf_m_bForward);
        (*(code *)PTR__objc_release_02578630)(puVar6);
        pcVar3 = local_78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_78,PTR_s_respondsToSelector__026ca818,PTR_s_setM_bForward__026a9b00);
        if (((ulong)pcVar3 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setM_bForward__026a9b00,1);
        }
        pcVar3 = &cf_setImage_withData_isOriginImage_;
        _NSSelectorFromString();
        pcVar4 = local_78;
        local_98 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_respondsToSelector__026ca818,pcVar3);
        bVar1 = ((ulong)pcVar4 & 1) == 0;
        if (bVar1) {
          local_1a0 = local_78;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_78,PTR_s_valueForKey__0269d128,&cf_m_extendInfoWithMsgType);
          _objc_retainAutoreleasedReturnValue();
          local_a8 = local_1a0;
        }
        else {
          local_1a0 = local_78;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_a0 = local_1a0;
        if (bVar1) {
          (*(code *)PTR__objc_release_02578630)(local_a8);
        }
        pcVar3 = local_a0;
        (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_respondsToSelector__026ca818,local_98);
        if (((ulong)pcVar3 & 1) == 0) {
          local_28 = (cfstringStruct *)0x0;
          local_54 = 1;
        }
        else {
          pcVar8 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
          pcVar2 = local_48;
          bVar1 = false;
          if ((char *)((long)&MACH_HEADER.cputype + 3) < pcVar8) {
            _objc_retainAutorelease();
            (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_bytes_026a9630);
            bVar1 = *pcVar2 == -0x77;
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_a0,local_98,local_40,local_48,bVar1);
          local_54 = 0;
        }
        _objc_storeStrong(&local_a0,0);
        pcVar3 = local_78;
        if (local_54 == 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = pcVar3;
          local_54 = 1;
        }
      }
      _objc_storeStrong(&local_78,0);
    }
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

