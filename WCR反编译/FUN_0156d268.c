// FUN_0156d268 @ 0156d268

byte FUN_0156d268(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  char *pcVar4;
  char *local_48;
  char *local_40;
  long local_38;
  undefined4 local_2c;
  long local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  uVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_handleDeleteAllMessage_026ab9c8);
  if ((uVar2 & 1) == 0) {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_deleteAllMessage_026ab9d0);
    if ((uVar2 & 1) == 0) {
      lVar3 = local_28;
      FUN_01528c84();
      _objc_retainAutoreleasedReturnValue();
      local_38 = lVar3;
      (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_length_0269cca0);
      if (lVar3 == 0) {
        local_11 = 0;
        local_2c = 1;
      }
      else {
        pcVar4 = "MMNewSessionMgr";
        _objc_getClass();
        FUN_01578300();
        _objc_retainAutoreleasedReturnValue();
        local_40 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar4,PTR_s_respondsToSelector__026ca818,PTR_s_DeleteMsgButKeepSession__026ab9d8
                  );
        if (((ulong)pcVar4 & 1) == 0) {
          pcVar4 = "CMessageMgr";
          _objc_getClass();
          FUN_01578300();
          _objc_retainAutoreleasedReturnValue();
          puVar1 = PTR_s_DelMsg_MsgList_DelAll__026ab9f0;
          local_48 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar4,PTR_s_respondsToSelector__026ca818,PTR_s_DelMsg_MsgList_DelAll__026ab9f0
                    );
          if (((ulong)pcVar4 & 1) == 0) {
            local_11 = 0;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_48,puVar1,local_38,0,1);
            uVar2 = local_20;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_20,PTR_s_respondsToSelector__026ca818,
                       PTR_s_handleAfterDeleteAllMessage_026ab9e0);
            if ((uVar2 & 1) != 0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_20,PTR_s_handleAfterDeleteAllMessage_026ab9e0);
            }
            local_11 = 1;
          }
          local_2c = 1;
          _objc_storeStrong(&local_48,0);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40,PTR_s_DeleteMsgButKeepSession__026ab9d8,local_38);
          uVar2 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_20,PTR_s_respondsToSelector__026ca818,
                     PTR_s_handleAfterDeleteAllMessage_026ab9e0);
          if ((uVar2 & 1) == 0) {
            uVar2 = local_20;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_ReloadView_026ab9e8);
            if ((uVar2 & 1) != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_ReloadView_026ab9e8);
            }
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_20,PTR_s_handleAfterDeleteAllMessage_026ab9e0);
          }
          local_11 = 1;
          local_2c = 1;
        }
        _objc_storeStrong(&local_40,0);
      }
      _objc_storeStrong(&local_38,0);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_deleteAllMessage_026ab9d0);
      local_11 = 1;
      local_2c = 1;
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_handleDeleteAllMessage_026ab9c8);
    local_11 = 1;
    local_2c = 1;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

