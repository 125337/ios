// FUN_0078f224 @ 0078f224

void FUN_0078f224(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  char *pcVar3;
  char *pcVar4;
  ulong uVar5;
  ulong local_80;
  char *local_78;
  char *local_70;
  char *local_68;
  char *local_60;
  ulong local_48;
  undefined4 local_3c;
  ulong local_38;
  long local_30;
  long local_28;
  
  uVar2 = *(ulong *)(param_1 + 0x28);
  local_30 = param_1;
  local_28 = param_1;
  FUN_0078d968();
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar2;
  if (uVar2 == 0) {
    local_3c = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_getChatContact_0269d630);
    _objc_retainAutoreleasedReturnValue();
    local_48 = uVar2;
    FUN_0078f80c();
    if ((uVar2 & 1) == 0) {
      local_3c = 1;
    }
    else {
      pcVar3 = "MMServiceCenter";
      _objc_getClass();
      local_60 = pcVar3;
      if (pcVar3 == (char *)0x0) {
        local_3c = 1;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_defaultCenter_026ca5e0);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR_s_getService__0269d170;
        local_68 = pcVar3;
        if (pcVar3 == (char *)0x0) {
          local_3c = 1;
        }
        else {
          if (DAT_028cca60 == (char *)0x0) {
            pcVar4 = "CContactMgr";
            _objc_getClass();
            DAT_028cca60 = pcVar4;
          }
          pcVar4 = DAT_028cca60;
          _objc_retainAutoreleaseReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(pcVar3,puVar1,pcVar4);
          _objc_retainAutoreleasedReturnValue();
          local_70 = pcVar3;
          if (pcVar3 == (char *)0x0) {
            local_3c = 1;
          }
          else {
            local_78 = (char *)0x0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178);
            if (((ulong)pcVar3 & 1) != 0) {
              pcVar4 = local_70;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_70,PTR_s_getContactByName__0269d178,*(undefined8 *)(param_1 + 0x20));
              _objc_retainAutoreleasedReturnValue();
              pcVar3 = local_78;
              local_78 = pcVar4;
              (*(code *)PTR__objc_release_02578630)(pcVar3);
            }
            if (local_78 == (char *)0x0) {
              local_3c = 1;
            }
            else {
              local_80 = 0;
              uVar2 = local_38;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_m_delegate_0269d0e0);
              if ((uVar2 & 1) != 0) {
                uVar5 = local_38;
                (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_m_delegate_0269d0e0);
                _objc_retainAutoreleasedReturnValue();
                uVar2 = local_80;
                local_80 = uVar5;
                (*(code *)PTR__objc_release_02578630)(uVar2);
              }
              if (local_80 == 0) {
                uVar2 = local_38;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_delegate_0269e808);
                if ((uVar2 & 1) != 0) {
                  uVar5 = local_38;
                  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_delegate_0269e808);
                  _objc_retainAutoreleasedReturnValue();
                  uVar2 = local_80;
                  local_80 = uVar5;
                  (*(code *)PTR__objc_release_02578630)(uVar2);
                }
              }
              if (local_80 == 0) {
                local_3c = 1;
              }
              else {
                uVar2 = local_80;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_80,PTR_s_respondsToSelector__026ca818,
                           PTR_s_onSelectContact__026a4388);
                if ((uVar2 & 1) == 0) {
                  uVar2 = local_80;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_80,PTR_s_respondsToSelector__026ca818,
                             PTR_s_didSelectContact__026a4390);
                  if ((uVar2 & 1) == 0) {
                    uVar2 = local_80;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_80,PTR_s_respondsToSelector__026ca818,PTR_s_AddAtUser__026a4398
                              );
                    if ((uVar2 & 1) == 0) {
                      local_3c = 0;
                    }
                    else {
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_80,PTR_s_AddAtUser__026a4398,local_78);
                      local_3c = 1;
                    }
                  }
                  else {
                    FUN_0078f9fc(local_80);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_80,PTR_s_didSelectContact__026a4390,local_78);
                    local_3c = 1;
                  }
                }
                else {
                  FUN_0078f9fc(local_80);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_80,PTR_s_onSelectContact__026a4388,local_78);
                  local_3c = 1;
                }
              }
              _objc_storeStrong(&local_80,0);
            }
            _objc_storeStrong(&local_78,0);
          }
          _objc_storeStrong(&local_70,0);
        }
        _objc_storeStrong(&local_68,0);
      }
    }
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

