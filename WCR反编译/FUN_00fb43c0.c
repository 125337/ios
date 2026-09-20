// FUN_00fb43c0 @ 00fb43c0

void FUN_00fb43c0(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  double dVar9;
  cfstringStruct *local_180;
  cfstringStruct *local_c8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0 [2];
  byte local_89;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  undefined *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  long local_40;
  uint local_34;
  long local_30;
  cfstringStruct *local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  if (local_30 == 0) {
    local_28 = (cfstringStruct *)0x0;
    local_34 = 1;
  }
  else {
    dVar9 = 0.95;
    lVar2 = local_30;
    _UIImageJPEGRepresentation();
    _objc_retainAutoreleasedReturnValue();
    local_40 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
    if (lVar2 == 0) {
      lVar3 = local_30;
      _UIImagePNGRepresentation();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = local_40;
      local_40 = lVar3;
      (*(code *)PTR__objc_release_02578630)(lVar2);
    }
    lVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    if (lVar2 == 0) {
      local_28 = (cfstringStruct *)0x0;
      local_34 = 1;
    }
    else {
      pcVar4 = (cfstringStruct *)PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_getCurrentUserWxid_0269e148);
      _objc_retainAutoreleasedReturnValue();
      local_c8 = pcVar4;
      if (pcVar4 == (cfstringStruct *)0x0) {
        local_c8 = &cf___;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_48 = local_c8;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      pcVar4 = &cf_CMessageWrap;
      _NSClassFromString();
      local_50 = pcVar4;
      if (pcVar4 == (cfstringStruct *)0x0) {
        local_28 = (cfstringStruct *)0x0;
        local_34 = 1;
      }
      else {
        local_58 = (cfstringStruct *)0x0;
        local_60 = PTR_s_initWithMsgType_nsFromUsr__026a9ae8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar4,PTR_s_instancesRespondToSelector__0269da90,
                   PTR_s_initWithMsgType_nsFromUsr__026a9ae8);
        if (((ulong)pcVar4 & 1) == 0) {
          pcVar4 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_50,PTR_s_instancesRespondToSelector__0269da90,
                     PTR_s_initWithMsgType__0269d3f8);
          if (((ulong)pcVar4 & 1) != 0) {
            pcVar5 = local_50;
            _objc_alloc();
            pcVar6 = pcVar5;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            pcVar4 = local_58;
            local_58 = pcVar6;
            (*(code *)PTR__objc_release_02578630)(pcVar4);
            (*(code *)PTR__objc_release_02578630)(pcVar5);
          }
        }
        else {
          pcVar5 = local_50;
          _objc_alloc();
          pcVar6 = pcVar5;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = local_58;
          local_58 = pcVar6;
          (*(code *)PTR__objc_release_02578630)(pcVar4);
          (*(code *)PTR__objc_release_02578630)(pcVar5);
        }
        pcVar4 = local_58;
        if (local_58 == (cfstringStruct *)0x0) {
          local_28 = (cfstringStruct *)0x0;
          local_34 = 1;
        }
        else {
          puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInt__0269d800,3);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar4,PTR_s_setValue_forKey__0269d300,puVar7,&cf_m_uiMessageType);
          (*(code *)PTR__objc_release_02578630)(puVar7);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_setValue_forKey__0269d300,local_48,&cf_m_nsFromUsr);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_setValue_forKey__0269d300,local_48,&cf_m_nsToUsr);
          pcVar4 = local_58;
          puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
          puVar8 = PTR__OBJC_CLASS___NSDate_026cdf88;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar7,PTR_s_numberWithUnsignedInt__0269d800,(int)dVar9);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar4,PTR_s_setValue_forKey__0269d300,puVar7,&cf_m_uiCreateTime);
          (*(code *)PTR__objc_release_02578630)(puVar7);
          (*(code *)PTR__objc_release_02578630)(puVar8);
          pcVar4 = local_58;
          puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInt__0269d800,1);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar4,PTR_s_setValue_forKey__0269d300,puVar7,&cf_m_uiStatus);
          (*(code *)PTR__objc_release_02578630)(puVar7);
          pcVar4 = local_58;
          puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar4,PTR_s_setValue_forKey__0269d300,puVar7,&cf_m_bForward);
          (*(code *)PTR__objc_release_02578630)(puVar7);
          pcVar4 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_setM_bForward__026a9b00);
          if (((ulong)pcVar4 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setM_bForward__026a9b00,1);
          }
          pcVar4 = &cf_setImage_withData_isOriginImage_;
          _NSSelectorFromString();
          local_89 = 0;
          pcVar5 = local_58;
          local_78 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_respondsToSelector__026ca818,pcVar4);
          if (((ulong)pcVar5 & 1) == 0) {
            local_180 = local_58;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_58,PTR_s_valueForKey__0269d128,&cf_m_extendInfoWithMsgType);
            _objc_retainAutoreleasedReturnValue();
            local_89 = 1;
            local_88 = local_180;
          }
          else {
            local_180 = local_58;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_80 = local_180;
          if ((local_89 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_88);
          }
          pcVar4 = local_80;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_80,PTR_s_respondsToSelector__026ca818,local_78);
          bVar1 = ((ulong)pcVar4 & 1) != 0;
          if (bVar1) {
            (*(code *)PTR__objc_msgSend_02578628)(local_80,local_78,local_30,local_40,0);
          }
          else {
            local_28 = (cfstringStruct *)0x0;
          }
          local_34 = (uint)!bVar1;
          _objc_storeStrong(&local_80,0);
          if (local_34 == 0) {
            local_a0[0] = (cfstringStruct *)0x0;
            local_a8 = (cfstringStruct *)0x0;
            pcVar5 = local_58;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_58,PTR_s_valueForKey__0269d128,&cf_m_extendInfoWithMsgType);
            _objc_retainAutoreleasedReturnValue();
            local_b0 = pcVar5;
            (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_valueForKey__0269d128,&cf_m_dtImg);
            _objc_retainAutoreleasedReturnValue();
            pcVar4 = local_a0[0];
            local_a0[0] = pcVar5;
            (*(code *)PTR__objc_release_02578630)(pcVar4);
            pcVar5 = local_58;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_58,PTR_s_valueForKey__0269d128,&cf_m_dtThumbnail);
            _objc_retainAutoreleasedReturnValue();
            pcVar4 = local_a8;
            local_a8 = pcVar5;
            (*(code *)PTR__objc_release_02578630)(pcVar4);
            _objc_storeStrong(&local_b0,0);
            pcVar4 = local_a0[0];
            (*(code *)PTR__objc_msgSend_02578628)(local_a0[0],PTR_s_length_0269cca0);
            if ((pcVar4 == (cfstringStruct *)0x0) ||
               (pcVar5 = local_a8,
               (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_length_0269cca0),
               pcVar4 = local_58, pcVar5 == (cfstringStruct *)0x0)) {
              local_28 = (cfstringStruct *)0x0;
            }
            else {
              (*(code *)PTR__objc_retain_02578638)();
              local_28 = pcVar4;
            }
            local_34 = 1;
            _objc_storeStrong(&local_a8);
            _objc_storeStrong(local_a0,0);
          }
        }
        _objc_storeStrong(&local_58,0);
      }
      _objc_storeStrong(&local_48,0);
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

