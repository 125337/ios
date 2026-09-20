// FUN_008c4410 @ 008c4410

/* WARNING: Type propagation algorithm not settling */

void FUN_008c4410(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  cfstringStruct *pcVar8;
  char *local_80;
  char *local_78;
  undefined8 local_70;
  ulong local_68 [3];
  long local_50;
  undefined4 local_48;
  long local_38;
  ulong local_30;
  char *local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  uVar2 = local_30;
  FUN_008b50d8();
  if ((uVar2 & 1) == 0) {
    local_28 = (char *)0x0;
    local_48 = 1;
  }
  else {
    lVar3 = local_38;
    FUN_008bbaac();
    _objc_retainAutoreleasedReturnValue();
    local_50 = lVar3;
    FUN_008bd834();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = local_50;
    local_68[2] = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
    if ((lVar4 == 0) ||
       (uVar2 = local_68[2],
       (*(code *)PTR__objc_msgSend_02578628)(local_68[2],PTR_s_length_0269cca0), uVar2 == 0)) {
      local_28 = (char *)0x0;
      local_48 = 1;
    }
    else {
      local_68[1] = 0;
      local_70 = 0;
      uVar2 = local_30;
      FUN_008b6dec(local_30,&local_70);
      _objc_retainAutoreleasedReturnValue();
      _objc_storeStrong(local_68 + 1,local_70);
      local_68[0] = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
      if (uVar2 == 0) {
        local_28 = (char *)0x0;
        local_48 = 1;
      }
      else {
        pcVar5 = "CMessageWrap";
        _objc_getClass();
        puVar1 = PTR_s_initWithMsgType_nsFromUsr__026a9ae8;
        local_78 = pcVar5;
        if (pcVar5 == (char *)0x0) {
          local_28 = (char *)0x0;
          local_48 = 1;
        }
        else {
          local_80 = (char *)0x0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar5,PTR_s_instancesRespondToSelector__0269da90,
                     PTR_s_initWithMsgType_nsFromUsr__026a9ae8);
          if (((ulong)pcVar5 & 1) != 0) {
            pcVar6 = local_78;
            _objc_alloc();
            pcVar7 = pcVar6;
            (*(code *)PTR__objc_msgSend_02578628)(pcVar6,puVar1,0x22,local_68[2]);
            _objc_retainAutoreleasedReturnValue();
            pcVar5 = local_80;
            local_80 = pcVar7;
            (*(code *)PTR__objc_release_02578630)(pcVar5);
            (*(code *)PTR__objc_release_02578630)(pcVar6);
          }
          if ((local_80 == (char *)0x0) &&
             (pcVar5 = local_78,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_78,PTR_s_instancesRespondToSelector__0269da90,
                        PTR_s_initWithMsgType__0269d3f8), ((ulong)pcVar5 & 1) != 0)) {
            pcVar6 = local_78;
            _objc_alloc();
            pcVar7 = pcVar6;
            (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_initWithMsgType__0269d3f8,0x22);
            _objc_retainAutoreleasedReturnValue();
            pcVar5 = local_80;
            local_80 = pcVar7;
            (*(code *)PTR__objc_release_02578630)(pcVar5);
            (*(code *)PTR__objc_release_02578630)(pcVar6);
          }
          if (local_80 == (char *)0x0) {
            local_28 = (char *)0x0;
          }
          else {
            uVar2 = local_30;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_copyToMsg__026a9b68);
            if ((uVar2 & 1) != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_copyToMsg__026a9b68,local_80);
            }
            FUN_008c4a90(local_80,local_68[2],local_50);
            (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setM_uiMessageType__026a9af0,0x22);
            (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setM_bForward__026a9b00,1);
            (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setM_uiStatus__0269d418,1);
            (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setM_uiDownloadStatus__026a9af8,0);
            pcVar5 = local_80;
            pcVar8 = &cf_setM_bForward_;
            _NSSelectorFromString();
            FUN_008bdfc8(pcVar5,pcVar8,1);
            FUN_008c4d5c(local_30,local_80,local_68[0]);
            pcVar5 = local_80;
            (*(code *)PTR__objc_retain_02578638)();
            local_28 = pcVar5;
          }
          local_48 = 1;
          _objc_storeStrong(&local_80,0);
        }
      }
      _objc_storeStrong(local_68);
      _objc_storeStrong(local_68 + 1,0);
    }
    _objc_storeStrong(local_68 + 2);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

