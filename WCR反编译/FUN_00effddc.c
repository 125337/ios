// FUN_00effddc @ 00effddc

byte FUN_00effddc(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  char *pcVar3;
  char *local_58;
  char *local_50;
  ulong local_48;
  ulong local_40;
  undefined4 local_34;
  ulong local_30;
  undefined8 local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  uVar1 = local_20;
  FUN_00effae8(local_20,local_28);
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_handleDeleteAllMessage_026ab9c8);
  if ((uVar1 & 1) == 0) {
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_deleteAllMessage_026ab9d0);
    if ((uVar1 & 1) == 0) {
      uVar1 = local_20;
      FUN_00eff88c();
      _objc_retainAutoreleasedReturnValue();
      local_40 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
      if ((uVar1 == 0) &&
         (uVar1 = local_30,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_getChatUserName_0269e7a0),
         (uVar1 & 1) != 0)) {
        uVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_getChatUserName_0269e7a0);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_48 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
        if ((uVar1 & 1) != 0) {
          _objc_storeStrong(&local_40,local_48);
        }
        _objc_storeStrong(&local_48,0);
      }
      uVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
      if (uVar1 == 0) {
        local_11 = 0;
        local_34 = 1;
      }
      else {
        pcVar3 = "MMNewSessionMgr";
        _objc_getClass();
        FUN_00ef5980();
        _objc_retainAutoreleasedReturnValue();
        local_50 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_DeleteMsgButKeepSession__026ab9d8
                  );
        if (((ulong)pcVar3 & 1) == 0) {
          pcVar3 = "CMessageMgr";
          _objc_getClass();
          FUN_00ef5980();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR_s_DelMsg_MsgList_DelAll__026ab9f0;
          local_58 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_DelMsg_MsgList_DelAll__026ab9f0
                    );
          if (((ulong)pcVar3 & 1) == 0) {
            local_11 = 0;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_58,puVar2,local_40,0,1);
            uVar1 = local_30;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_30,PTR_s_respondsToSelector__026ca818,
                       PTR_s_handleAfterDeleteAllMessage_026ab9e0);
            if ((uVar1 & 1) != 0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_30,PTR_s_handleAfterDeleteAllMessage_026ab9e0);
            }
            local_11 = 1;
          }
          local_34 = 1;
          _objc_storeStrong(&local_58,0);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_50,PTR_s_DeleteMsgButKeepSession__026ab9d8,local_40);
          uVar1 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,PTR_s_respondsToSelector__026ca818,
                     PTR_s_handleAfterDeleteAllMessage_026ab9e0);
          if ((uVar1 & 1) == 0) {
            uVar1 = local_30;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_ReloadView_026ab9e8);
            if ((uVar1 & 1) != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_ReloadView_026ab9e8);
            }
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_30,PTR_s_handleAfterDeleteAllMessage_026ab9e0);
          }
          local_11 = 1;
          local_34 = 1;
        }
        _objc_storeStrong(&local_50,0);
      }
      _objc_storeStrong(&local_40,0);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_deleteAllMessage_026ab9d0);
      local_11 = 1;
      local_34 = 1;
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_handleDeleteAllMessage_026ab9c8);
    local_11 = 1;
    local_34 = 1;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

