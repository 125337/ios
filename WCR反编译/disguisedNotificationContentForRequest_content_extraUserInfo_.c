// disguisedNotificationContentForRequest:content:extraUserInfo: @ 01123224

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x28 bytes */

ID WCRefinePrivateFriendManager::disguisedNotificationContentForRequest_content_extraUserInfo_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *local_1f0;
  uint local_1d4;
  cfstringStruct *local_1c0;
  cfstringStruct *local_1a8;
  cfstringStruct *local_188;
  bool local_121;
  undefined *local_120;
  undefined *local_118;
  byte local_109;
  cfstringStruct *local_108;
  byte local_f9;
  undefined *local_f8;
  bool local_e9;
  cfstringStruct *local_e8;
  byte local_d9;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  bool local_b1;
  cfstringStruct *local_b0;
  byte local_a1;
  cfstringStruct *local_a0;
  bool local_91;
  cfstringStruct *local_90;
  byte local_81;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  undefined4 local_64;
  undefined8 local_60;
  cfstringStruct *local_58;
  undefined8 local_50;
  SEL local_48;
  ID local_40;
  cfstringStruct *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_50 = 0;
  local_48 = param_2;
  local_40 = param_1;
  _objc_storeStrong(&local_50,param_3);
  local_58 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_58,param_4);
  local_60 = 0;
  _objc_storeStrong(&local_60,param_5);
  pcVar2 = local_58;
  puVar1 = PTR__OBJC_CLASS___UNNotificationContent_026ce808;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UNNotificationContent_026ce808,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  pcVar3 = local_58;
  if (((ulong)pcVar2 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = pcVar3;
    local_64 = 1;
  }
  else {
    FUN_0112263c();
    _objc_retainAutoreleasedReturnValue();
    local_70 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_objectForKeyedSubscript__0269d098,&cf_enabled);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_58;
    if (((ulong)pcVar3 & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_38 = pcVar2;
      local_64 = 1;
    }
    else {
      pcVar3 = local_70;
      FUN_01122a04(local_70,local_50,local_58,local_60);
      pcVar2 = local_58;
      if (((ulong)pcVar3 & 1) == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_38 = pcVar2;
        local_64 = 1;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_mutableCopy_0269d8a0);
        pcVar3 = local_70;
        local_78 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_70,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = pcVar3;
        FUN_0110d24c();
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_81 = 0;
        local_91 = false;
        if (pcVar4 == (cfstringStruct *)0x0) {
          local_188 = &cf__OR;
        }
        else {
          local_188 = local_70;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_70,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
          _objc_retainAutoreleasedReturnValue();
          local_81 = 1;
          local_80 = local_188;
          FUN_0110d24c();
          _objc_retainAutoreleasedReturnValue();
          local_90 = local_188;
        }
        local_91 = pcVar4 != (cfstringStruct *)0x0;
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setTitle__0269cef0,local_188);
        if ((local_91 & 1U) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_90);
        }
        if ((local_81 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_80);
        }
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setSubtitle__026a6678,&::cf___);
        pcVar2 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_70,PTR_s_objectForKeyedSubscript__0269d098,&cf_body);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = pcVar2;
        FUN_0110d24c();
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_a1 = 0;
        local_b1 = false;
        if (pcVar4 == (cfstringStruct *)0x0) {
          local_1a8 = &cf__Og;
        }
        else {
          local_1a8 = local_70;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_70,PTR_s_objectForKeyedSubscript__0269d098,&cf_body);
          _objc_retainAutoreleasedReturnValue();
          local_a1 = 1;
          local_a0 = local_1a8;
          FUN_0110d24c();
          _objc_retainAutoreleasedReturnValue();
          local_b0 = local_1a8;
        }
        local_b1 = pcVar4 != (cfstringStruct *)0x0;
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setBody__026a6680,local_1a8);
        if ((local_b1 & 1U) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_b0);
        }
        if ((local_a1 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_a0);
        }
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        pcVar2 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_70,PTR_s_objectForKeyedSubscript__0269d098,&cf_avatarFile);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = pcVar2;
        FUN_0110d24c();
        _objc_retainAutoreleasedReturnValue();
        local_c0 = pcVar3;
        (*(code *)PTR__objc_release_02578630)();
        FUN_01119e60();
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = local_c0;
        local_c8 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0);
        local_d9 = 0;
        local_e9 = false;
        if (pcVar3 == (cfstringStruct *)0x0) {
          local_1c0 = (cfstringStruct *)0x0;
        }
        else {
          local_1c0 = local_c8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_c8,PTR_s_URLByDeletingLastPathComponent_026af050);
          _objc_retainAutoreleasedReturnValue();
          local_d9 = 1;
          local_d8 = local_1c0;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          local_e8 = local_1c0;
        }
        local_e9 = pcVar3 != (cfstringStruct *)0x0;
        (*(code *)PTR__objc_retain_02578638)();
        local_d0 = local_1c0;
        if ((local_e9 & 1U) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_e8);
        }
        if ((local_d9 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_d8);
        }
        local_f9 = 0;
        local_109 = 0;
        local_1d4 = 0;
        if (local_d0 != (cfstringStruct *)0x0) {
          puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
          _objc_retainAutoreleasedReturnValue();
          local_f9 = 1;
          pcVar2 = local_d0;
          local_f8 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_path_0269d4d8);
          _objc_retainAutoreleasedReturnValue();
          local_109 = 1;
          local_108 = pcVar2;
          (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_fileExistsAtPath__026ca630);
          local_1d4 = (uint)puVar1;
        }
        if ((local_109 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_108);
        }
        if ((local_f9 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_f8);
        }
        if ((local_1d4 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_78,PTR_s_setAttachments__026a6690,
                     *(undefined8 *)PTR____NSArray0___02578280);
        }
        else {
          puVar1 = PTR__OBJC_CLASS___UNNotificationAttachment_026cecf0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UNNotificationAttachment_026cecf0,
                     PTR_s_attachmentWithIdentifier_URL_opt_026af130,&cf_wcr_private_friend,local_d0
                     ,0);
          _objc_retainAutoreleasedReturnValue();
          local_118 = puVar1;
          if (puVar1 == (undefined *)0x0) {
            local_1f0 = *(undefined **)PTR____NSArray0___02578280;
          }
          else {
            local_1f0 = PTR__OBJC_CLASS___NSArray_026cdfe0;
            local_30 = puVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                       &local_30,1);
            _objc_retainAutoreleasedReturnValue();
            local_120 = local_1f0;
          }
          local_121 = puVar1 != (undefined *)0x0;
          (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setAttachments__026a6690,local_1f0);
          if (local_121) {
            (*(code *)PTR__objc_release_02578630)(local_120);
          }
          _objc_storeStrong(&local_118,0);
        }
        pcVar2 = local_78;
        (*(code *)PTR__objc_retain_02578638)();
        local_38 = pcVar2;
        local_64 = 1;
        _objc_storeStrong(&local_d0);
        _objc_storeStrong(&local_c8,0);
        _objc_storeStrong(&local_c0,0);
        _objc_storeStrong(&local_78,0);
      }
    }
    _objc_storeStrong(&local_70,0);
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_38;
}

