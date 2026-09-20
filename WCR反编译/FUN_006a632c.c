// FUN_006a632c @ 006a632c

void FUN_006a632c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_e0;
  uint local_9c;
  undefined *local_78;
  undefined *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  byte local_51;
  cfstringStruct *local_50;
  undefined4 local_44;
  long local_40;
  cfstringStruct *local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_2;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  if (DAT_028cbe78 == (code *)0x0) {
    local_44 = 1;
  }
  else {
    puVar1 = PTR_WCRefinePrivateFriendManager_026ce160;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefinePrivateFriendManager_026ce160,
               PTR_s_isNotificationSuppressSnapshotEn_026a6660);
    pcVar4 = local_38;
    puVar3 = PTR_WCRefinePrivateFriendManager_026ce160;
    local_51 = 0;
    local_9c = 0;
    if ((((ulong)puVar1 & 1) != 0) && (local_9c = 0, local_38 != (cfstringStruct *)0x0)) {
      pcVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_content_026a4a90);
      _objc_retainAutoreleasedReturnValue();
      local_51 = 1;
      local_50 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_shouldSuppressNotificationReques_026a6668,pcVar4,pcVar2,0);
      local_9c = (uint)puVar3;
    }
    if ((local_51 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    if ((local_9c & 1) == 0) {
      puVar3 = PTR_WCRefinePrivateFriendManager_026ce160;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefinePrivateFriendManager_026ce160,
                 PTR_s_isNotificationDisguiseSnapshotEn_026a6658);
      if ((((ulong)puVar3 & 1) != 0) && (local_38 != (cfstringStruct *)0x0)) {
        pcVar4 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_content_026a4a90);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = (cfstringStruct *)PTR_WCRefinePrivateFriendManager_026ce160;
        local_60 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefinePrivateFriendManager_026ce160,
                   PTR_s_disguisedNotificationContentForR_026a6670,local_38,pcVar4,0);
        _objc_retainAutoreleasedReturnValue();
        local_68 = pcVar2;
        if ((pcVar2 != (cfstringStruct *)0x0) && (pcVar2 != local_60)) {
          puVar3 = PTR__OBJC_CLASS___UNNotificationContent_026ce808;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UNNotificationContent_026ce808,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
          if (((ulong)pcVar2 & 1) != 0) {
            local_70 = PTR_s_requestWithIdentifier_content_tr_026a6698;
            puVar1 = PTR__OBJC_CLASS___UNNotificationRequest_026ce818;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UNNotificationRequest_026ce818,PTR_s_class_0269cd60);
            puVar3 = local_70;
            pcVar2 = local_38;
            (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_identifier_026a4a88);
            _objc_retainAutoreleasedReturnValue();
            pcVar4 = local_68;
            local_e0 = pcVar2;
            if (pcVar2 == (cfstringStruct *)0x0) {
              local_e0 = &cf___;
            }
            pcVar5 = local_38;
            (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_trigger_026a66a0);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar1,puVar3,local_e0,pcVar4);
            _objc_retainAutoreleasedReturnValue();
            local_78 = puVar1;
            (*(code *)PTR__objc_release_02578630)(pcVar5);
            (*(code *)PTR__objc_release_02578630)(pcVar2);
            if (local_78 != (undefined *)0x0) {
              _objc_storeStrong(&local_38,local_78);
            }
            _objc_storeStrong(&local_78,0);
          }
        }
        _objc_storeStrong(&local_68);
        _objc_storeStrong(&local_60,0);
      }
      (*DAT_028cbe78)(local_28,local_30,local_38,local_40);
      local_44 = 0;
    }
    else {
      if (local_40 != 0) {
        (**(code **)(local_40 + 0x10))(local_40,0);
      }
      local_44 = 1;
    }
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  return;
}

