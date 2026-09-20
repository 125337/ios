// forceCallKitDiagnosticText @ 01f4e0cc

/* Function Stack Size: 0x10 bytes */

ID WCRefineVersionController::forceCallKitDiagnosticText(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *puVar6;
  ID local_a0;
  undefined *local_98;
  cfstringStruct *local_90;
  undefined1 local_84;
  undefined1 local_83;
  byte local_82;
  undefined1 local_81;
  cfstringStruct *local_80;
  uint local_74;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  undefined1 local_5d;
  undefined1 local_5c;
  byte local_5b;
  undefined1 local_5a;
  undefined1 local_59;
  ID local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  SEL local_30;
  ID local_28;
  
  pcVar1 = &cf_VoIPPushKitNotifyService;
  local_30 = param_2;
  local_28 = param_1;
  _NSClassFromString();
  pcVar2 = &cf_MMContext;
  local_38 = pcVar1;
  _NSClassFromString();
  pcVar1 = &cf_SettingUtil;
  local_40 = pcVar2;
  _NSClassFromString();
  pcVar2 = &cf_DeviceInfo;
  local_48 = pcVar1;
  _NSClassFromString();
  IVar3 = local_28;
  local_50 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_forceCallKitGrayValue_026c9168);
  IVar4 = local_28;
  local_58 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_forceCallKitClassBool_sel__026c9178,local_38,
             PTR_s_isCallkitAvailable_026c9170);
  local_59 = (undefined1)IVar4;
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_forceCallKitClassBool_sel__026c9178,local_38,
             PTR_s_isVoIPLCKAvailable_026a9670);
  local_5a = (undefined1)IVar3;
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_forceCallKitClassBool_sel__026c9178,local_38,
             PTR_s_isDeviceCallkitAvailable_026c9180);
  local_5b = (byte)IVar3;
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_forceCallKitClassBool_sel__026c9178,local_38,
             PTR_s_getCallkitSwitchFromService_026a9668);
  local_5c = (undefined1)IVar3;
  local_5d = 0;
  if (((local_38 != (cfstringStruct *)0x0) && (local_40 != (cfstringStruct *)0x0)) &&
     (pcVar1 = local_40,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_currentContext_0269d5f8),
     ((ulong)pcVar1 & 1) != 0)) {
    pcVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_currentContext_0269d5f8);
    _objc_retainAutoreleasedReturnValue();
    local_68 = pcVar1;
    if ((pcVar1 != (cfstringStruct *)0x0) &&
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
       ((ulong)pcVar1 & 1) != 0)) {
      pcVar1 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_getService__0269d170,local_38);
      _objc_retainAutoreleasedReturnValue();
      local_70 = pcVar1;
      if ((pcVar1 != (cfstringStruct *)0x0) &&
         ((*(code *)PTR__objc_msgSend_02578628)
                    (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_useVoIPLCK_026a9678),
         ((ulong)pcVar1 & 1) != 0)) {
        pcVar1 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_useVoIPLCK_026a9678);
        local_5d = SUB81(pcVar1,0);
      }
      _objc_storeStrong(&local_70,0);
    }
    _objc_storeStrong(&local_68,0);
  }
  local_74 = 0;
  if ((local_48 != (cfstringStruct *)0x0) &&
     (pcVar1 = local_48,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_getMainSetting_026c9188),
     ((ulong)pcVar1 & 1) != 0)) {
    pcVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_getMainSetting_026c9188);
    _objc_retainAutoreleasedReturnValue();
    local_80 = pcVar1;
    if ((pcVar1 != (cfstringStruct *)0x0) &&
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_m_uiExtStatus_026c9190),
       ((ulong)pcVar1 & 1) != 0)) {
      pcVar1 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_m_uiExtStatus_026c9190);
      local_74 = (uint)pcVar1;
    }
    _objc_storeStrong(&local_80,0);
  }
  local_81 = (local_74 & 0x80000) != 0;
  local_82 = (local_74 & 0x1000) != 0;
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_forceCallKitClassBool_sel__026c9178,local_50,PTR_s_isiPad_026a3530);
  local_83 = (undefined1)IVar3;
  local_84 = false;
  if ((((IVar3 & 1) == 0) && (local_84 = false, (local_82 & 1) == 0)) &&
     (local_84 = false, (local_5b & 1) != 0)) {
    local_84 = local_58 != 1;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_90 = &cf__gNS__eg5uN9_;
  if (local_58 == 0) {
    _objc_storeStrong(&local_90,&cf__NS__eg5uS9_);
  }
  else if (local_58 == 2) {
    _objc_storeStrong(0,&local_90,&cf_>f_yFOppc);
  }
  puVar5 = PTR__OBJC_CLASS___NSMutableString_026cdfb0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_string_0269cc38);
  _objc_retainAutoreleasedReturnValue();
  local_98 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_appendFormat__0269d148,&cf_V);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_98,PTR_s_appendFormat__0269d148,
             &cf_getCallkitSwitchFromService___isCallkitAvailable___);
  (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_appendFormat__0269d148,&cf_L);
  (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_appendFormat__0269d148,&cf__e0__5uc_T0_);
  (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_appendFormat__0269d148,&cf_n_u);
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_missingCallKitEntitlements_026c9150);
  _objc_retainAutoreleasedReturnValue();
  local_a0 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_count_0269cfe0);
  puVar5 = local_98;
  if (IVar3 != 0) {
    IVar3 = local_a0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_a0,PTR_s_componentsJoinedByString__0269d140,&::cf_format_s_);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_appendFormat__0269d148,&cf_CgP_);
    (*(code *)PTR__objc_release_02578630)(IVar3);
  }
  puVar5 = local_98;
  puVar6 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_appendFormat__0269d148,&cf_cN__);
  (*(code *)PTR__objc_release_02578630)(puVar6);
  puVar5 = local_98;
  (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_copy_0269d150);
  _objc_storeStrong(&local_a0);
  _objc_storeStrong(&local_98,0);
  _objc_storeStrong(&local_90,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar5;
}

