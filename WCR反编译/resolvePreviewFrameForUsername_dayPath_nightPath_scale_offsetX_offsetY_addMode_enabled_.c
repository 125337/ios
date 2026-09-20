// resolvePreviewFrameForUsername:dayPath:nightPath:scale:offsetX:offsetY:addMode:enabled: @ 018457d8

/* Function Stack Size: 0x50 bytes */

void WCRefineAvatarFrameSpecialUsersViewController::
     resolvePreviewFrameForUsername_dayPath_nightPath_scale_offsetX_offsetY_addMode_enabled_
               (ID param_1,SEL param_2,ID param_3,ID *param_4,ID *param_5,double *param_6,
               double *param_7,double *param_8,long_long *param_9,bool *param_10)

{
  double dVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  double dVar5;
  cfstringStruct *local_198;
  cfstringStruct *local_188;
  cfstringStruct *local_140;
  cfstringStruct *local_130;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  byte local_81;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  bool *local_70;
  long_long *local_68;
  double *local_60;
  double *local_58;
  double *local_50;
  ID *local_48;
  ID *local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  dVar1 = DAT_02323ca0;
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_68 = param_9;
  local_70 = param_10;
  pcVar2 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  local_60 = param_8;
  local_58 = param_7;
  local_50 = param_6;
  local_48 = param_5;
  local_40 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_78 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar2,PTR_s_avatarFrameSpecialUserConfigForU_026ab200,local_38);
  _objc_retainAutoreleasedReturnValue();
  local_81 = 0;
  local_80 = pcVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_90 = &::cf___;
  (*(code *)PTR__objc_retain_02578638)();
  local_98 = &::cf___;
  local_a0 = 1.5;
  dVar5 = 0.0;
  local_a8 = 0.0;
  local_b0 = 0.0;
  local_b8 = (cfstringStruct *)0x0;
  if (local_80 == (cfstringStruct *)0x0) {
    pcVar2 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_avatarFrameChatListEnabled_0269def0);
    local_81 = (byte)pcVar2;
    pcVar2 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_avatarFrameChatListPath_0269df10);
    _objc_retainAutoreleasedReturnValue();
    local_188 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_188 = &::cf___;
    }
    _objc_storeStrong(&local_90,local_188);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_avatarFrameChatListNightPath_0269df18);
    _objc_retainAutoreleasedReturnValue();
    local_198 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_198 = &::cf___;
    }
    _objc_storeStrong(&local_98,local_198);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_avatarFrameChatListScale_0269df80);
    local_a0 = dVar5;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_avatarFrameChatListOffsetX_0269df70);
    local_a8 = dVar5;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_avatarFrameChatListOffsetY_0269df78);
    pcVar2 = local_78;
    local_b0 = dVar5;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_avatarFrameChatListAddMode_0269df58);
    local_b8 = pcVar2;
  }
  else {
    pcVar2 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_objectForKey__0269e048,&cf_chatListEnabled)
    ;
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_81 = (byte)pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_80,PTR_s_objectForKeyedSubscript__0269d098,&cf_chatListPath);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_80;
    local_c0 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_80,PTR_s_objectForKeyedSubscript__0269d098,&cf_chatListNightPath);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_c0;
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_c8 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
    if (((ulong)pcVar2 & 1) == 0) {
      local_130 = &::cf___;
    }
    else {
      local_130 = local_c0;
    }
    _objc_storeStrong(&local_90,local_130);
    pcVar2 = local_c8;
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
    if (((ulong)pcVar2 & 1) == 0) {
      local_140 = &::cf___;
    }
    else {
      local_140 = local_c8;
    }
    _objc_storeStrong(&local_98,local_140);
    pcVar2 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_objectForKey__0269e048,&cf_chatListScale);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_a0 = dVar5;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_objectForKey__0269e048,&cf_chatListOffsetX)
    ;
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_a8 = dVar5;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_objectForKey__0269e048,&cf_chatListOffsetY)
    ;
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_b0 = dVar5;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_objectForKey__0269e048,&cf_chatListAddMode)
    ;
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_b8 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    _objc_storeStrong(&local_c8);
    _objc_storeStrong(&local_c0,0);
  }
  pcVar2 = local_90;
  if ((local_a0 <= 0.0) || (5.0 < local_a0)) {
    local_a0 = 1.5;
  }
  if (local_a0 < dVar1) {
    local_a0 = dVar1;
  }
  if (local_40 != (ID *)0x0) {
    _objc_retainAutorelease();
    *local_40 = (ID)pcVar2;
  }
  pcVar2 = local_98;
  if (local_48 != (ID *)0x0) {
    _objc_retainAutorelease();
    *local_48 = (ID)pcVar2;
  }
  if (local_50 != (double *)0x0) {
    *local_50 = local_a0;
  }
  if (local_58 != (double *)0x0) {
    *local_58 = local_a8;
  }
  if (local_60 != (double *)0x0) {
    *local_60 = local_b0;
  }
  if (local_68 != (long_long *)0x0) {
    *local_68 = (long_long)local_b8;
  }
  if (local_70 != (bool *)0x0) {
    *(byte *)local_70 = local_81 & 1;
  }
  _objc_storeStrong(&local_98);
  _objc_storeStrong(&local_90,0);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_38,0);
  return;
}

