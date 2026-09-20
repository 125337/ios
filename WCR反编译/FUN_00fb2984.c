// FUN_00fb2984 @ 00fb2984

void FUN_00fb2984(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_2d0;
  cfstringStruct *local_2b8;
  cfstringStruct *local_2a0;
  cfstringStruct *local_288;
  cfstringStruct *local_270;
  uint local_214;
  cfstringStruct *local_1c0;
  uint local_164;
  bool local_151;
  cfstringStruct *local_150;
  cfstringStruct *local_148;
  bool local_139;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  bool local_121;
  cfstringStruct *local_120;
  cfstringStruct *local_118;
  bool local_109;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  byte local_f1;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0 [2];
  byte local_c9;
  undefined *local_c8;
  cfstringStruct *local_c0 [2];
  undefined *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  undefined4 local_54;
  cfstringStruct *local_50;
  int local_48;
  byte local_41;
  undefined *local_40;
  undefined8 local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  pcVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  local_41 = 0;
  local_164 = 1;
  if (pcVar2 != (cfstringStruct *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_41 = 1;
    local_40 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_164 = (uint)puVar3 ^ 1;
  }
  if ((local_41 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  if ((local_164 & 1) != 0) {
    local_28 = (cfstringStruct *)0x0;
    local_48 = 1;
    goto LAB_00fb3848;
  }
  pcVar2 = local_30;
  FUN_00fc8a48();
  pcVar4 = local_30;
  local_50 = pcVar2;
  FUN_00fc8bc4();
  local_54 = SUB84(pcVar4,0);
  pcVar2 = &cf_WAForwardUtility;
  _NSClassFromString();
  pcVar4 = &cf_ConvertWeAppVideo2MsgWrapWithVideoPath_thumbImage_;
  local_60 = pcVar2;
  _NSSelectorFromString();
  local_70 = (cfstringStruct *)0x0;
  local_68 = pcVar4;
  if ((local_60 != (cfstringStruct *)0x0) &&
     (pcVar2 = local_60,
     (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_respondsToSelector__026ca818,pcVar4),
     ((ulong)pcVar2 & 1) != 0)) {
    pcVar4 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,local_68,local_30,local_38);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_70;
    local_70 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  local_78 = (cfstringStruct *)0x0;
  if (local_70 != (cfstringStruct *)0x0) {
    pcVar2 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_70,PTR_s_valueForKey__0269d128,&cf_m_dicForwardParas);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_80 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    if (((ulong)pcVar2 & 1) != 0) {
      pcVar4 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_80,PTR_s_objectForKeyedSubscript__0269d098,&cf_CaptureVideoInfo);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_78;
      local_78 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    _objc_storeStrong(&local_80,0);
  }
  if ((local_70 == (cfstringStruct *)0x0) || (local_78 == (cfstringStruct *)0x0)) {
    pcVar4 = local_30;
    FUN_00fc8f14(local_30,local_38);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_78;
    local_78 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = &cf_CMessageWrap;
    _NSClassFromString();
    local_a0 = pcVar2;
    if ((local_78 == (cfstringStruct *)0x0) || (pcVar2 == (cfstringStruct *)0x0)) {
      local_28 = (cfstringStruct *)0x0;
      local_48 = 1;
    }
    else {
      pcVar2 = (cfstringStruct *)PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_getCurrentUserWxid_0269e148);
      _objc_retainAutoreleasedReturnValue();
      local_1c0 = pcVar2;
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_1c0 = &cf___;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_a8 = local_1c0;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = local_a0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_a0,PTR_s_instancesRespondToSelector__0269da90,PTR_s_initWithMsgType__0269d3f8
                );
      if (((ulong)pcVar2 & 1) != 0) {
        pcVar4 = local_a0;
        _objc_alloc();
        pcVar5 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = local_70;
        local_70 = pcVar5;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        (*(code *)PTR__objc_release_02578630)(pcVar4);
      }
      if (local_70 == (cfstringStruct *)0x0) {
        local_28 = (cfstringStruct *)0x0;
        local_48 = 1;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_70,PTR_s_setValue_forKey__0269d300,local_a8,&cf_m_nsFromUsr);
        pcVar2 = local_70;
        puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInt__0269d800,1);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_setValue_forKey__0269d300,puVar3,&cf_m_uiStatus);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
        _objc_retainAutoreleasedReturnValue();
        local_b0 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_setObject_forKeyedSubscript__0269d248,local_78,&cf_CaptureVideoInfo)
        ;
        pcVar2 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_70,PTR_s_respondsToSelector__026ca818,PTR_s_setM_dicForwardParas__026a4180)
        ;
        if (((ulong)pcVar2 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_70,PTR_s_setValue_forKey__0269d300,local_b0,&cf_m_dicForwardParas);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_70,PTR_s_setM_dicForwardParas__026a4180,local_b0);
        }
        _objc_storeStrong(&local_b0,0);
        local_48 = 0;
      }
      _objc_storeStrong(&local_a8,0);
      if (local_48 == 0) goto LAB_00fb331c;
    }
  }
  else {
    pcVar2 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_valueForKey__0269d128,&cf_video_path);
    _objc_retainAutoreleasedReturnValue();
    local_c9 = 0;
    local_c0[0] = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
    local_214 = 1;
    if (pcVar2 != (cfstringStruct *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      local_c9 = 1;
      local_c8 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_214 = (uint)puVar3 ^ 1;
    }
    if ((local_c9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_c8);
    }
    if ((local_214 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_78,PTR_s_setValue_forKey__0269d300,local_30,&cf_video_path);
    }
    pcVar2 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_78,PTR_s_respondsToSelector__026ca818,PTR_s_setVideo_time__026ad0e0);
    if (((ulong)pcVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setVideo_time__026ad0e0,local_54);
    }
    pcVar2 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_78,PTR_s_respondsToSelector__026ca818,PTR_s_setBRawVideo__026ad0e8);
    if (((ulong)pcVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setBRawVideo__026ad0e8,0);
    }
    pcVar2 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_78,PTR_s_respondsToSelector__026ca818,PTR_s_setM_bForward__026a9b00);
    if (((ulong)pcVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setM_bForward__026a9b00,1);
    }
    _objc_storeStrong(local_c0,0);
LAB_00fb331c:
    pcVar2 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_70,PTR_s_valueForKey__0269d128,&cf_m_dicForwardParas);
    _objc_retainAutoreleasedReturnValue();
    local_f1 = 0;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_e0[0] = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    if (((ulong)pcVar2 & 1) == 0) {
      local_270 = (cfstringStruct *)0x0;
    }
    else {
      local_270 = local_e0[0];
      (*(code *)PTR__objc_msgSend_02578628)
                (local_e0[0],PTR_s_objectForKeyedSubscript__0269d098,&cf_CaptureVideoInfo);
      _objc_retainAutoreleasedReturnValue();
      local_f1 = 1;
      local_f0 = local_270;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_e8 = local_270;
    if ((local_f1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_f0);
    }
    local_109 = false;
    bVar1 = local_e8 == (cfstringStruct *)0x0;
    if (bVar1) {
      local_288 = (cfstringStruct *)0x0;
    }
    else {
      local_288 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_valueForKey__0269d128,&cf_video_path);
      _objc_retainAutoreleasedReturnValue();
      local_108 = local_288;
    }
    local_109 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_100 = local_288;
    if ((local_109 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_108);
    }
    local_121 = false;
    bVar1 = local_e8 == (cfstringStruct *)0x0;
    if (bVar1) {
      local_2a0 = (cfstringStruct *)0x0;
    }
    else {
      local_2a0 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_valueForKey__0269d128,&cf_thumb_path);
      _objc_retainAutoreleasedReturnValue();
      local_120 = local_2a0;
    }
    local_121 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_118 = local_2a0;
    if ((local_121 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_120);
    }
    local_139 = false;
    bVar1 = local_e8 == (cfstringStruct *)0x0;
    if (bVar1) {
      local_2b8 = (cfstringStruct *)0x0;
    }
    else {
      local_2b8 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_valueForKey__0269d128,&cf_video_time);
      _objc_retainAutoreleasedReturnValue();
      local_138 = local_2b8;
    }
    local_139 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_130 = local_2b8;
    if ((local_139 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_138);
    }
    local_151 = local_e8 == (cfstringStruct *)0x0;
    if (local_151) {
      local_2d0 = (cfstringStruct *)0x0;
    }
    else {
      local_2d0 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_valueForKey__0269d128,&cf_video_size);
      _objc_retainAutoreleasedReturnValue();
      local_150 = local_2d0;
    }
    local_151 = !local_151;
    (*(code *)PTR__objc_retain_02578638)();
    local_148 = local_2d0;
    if (local_151) {
      (*(code *)PTR__objc_release_02578630)(local_150);
    }
    FUN_00fc8a48();
    _objc_storeStrong(&local_148);
    _objc_storeStrong(&local_130,0);
    _objc_storeStrong(&local_118,0);
    _objc_storeStrong(&local_100,0);
    _objc_storeStrong(&local_e8,0);
    _objc_storeStrong(local_e0,0);
    pcVar2 = local_70;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = pcVar2;
    local_48 = 1;
  }
  _objc_storeStrong(&local_78);
  _objc_storeStrong(&local_70,0);
LAB_00fb3848:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

