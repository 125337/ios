// FUN_0015f4ac @ 0015f4ac

void FUN_0015f4ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  char *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  char *pcVar6;
  cfstringStruct *local_1d8;
  cfstringStruct *local_1a8;
  cfstringStruct *local_148;
  undefined4 local_118;
  cfstringStruct *local_f0;
  bool local_71;
  cfstringStruct *local_70;
  undefined4 local_60;
  char *local_58;
  char *local_50;
  undefined4 local_48;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  char *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_38,param_2);
  pcVar2 = local_30;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)pcVar2 & 1) == 0) {
    local_28 = (char *)0x0;
    local_48 = 1;
  }
  else {
    pcVar3 = "ChatRoomTopMsgInfo";
    _objc_getClass();
    local_50 = pcVar3;
    if (pcVar3 == (char *)0x0) {
      local_28 = (char *)0x0;
      local_48 = 1;
    }
    else {
      _objc_alloc_init();
      local_58 = pcVar3;
      if (pcVar3 == (char *)0x0) {
        local_28 = (char *)0x0;
      }
      else {
        pcVar2 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_msgSvrID);
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        pcVar3 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_setUserName__0269f680);
        if (((ulong)pcVar3 & 1) != 0) {
          if (local_38 == (cfstringStruct *)0x0) {
            local_f0 = &cf___;
          }
          else {
            local_f0 = local_38;
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setUserName__0269f680,local_f0);
        }
        pcVar3 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_setTopId__0269f688);
        if (((ulong)pcVar3 & 1) != 0) {
          pcVar2 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_topId);
          _objc_retainAutoreleasedReturnValue();
          if (pcVar2 == (cfstringStruct *)0x0) {
            local_60 = SUB84(pcVar4,0);
            local_118 = local_60;
          }
          else {
            local_70 = local_30;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_topId);
            _objc_retainAutoreleasedReturnValue();
            pcVar5 = local_70;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_118 = SUB84(pcVar5,0);
          }
          local_71 = pcVar2 != (cfstringStruct *)0x0;
          if (local_71) {
            (*(code *)PTR__objc_release_02578630)(local_70);
          }
          (*(code *)PTR__objc_release_02578630)(pcVar2);
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setTopId__0269f688,local_118);
        }
        pcVar6 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_setOpUserName__0269f690);
        pcVar3 = local_58;
        puVar1 = PTR_s_setOpUserName__0269f690;
        if (((ulong)pcVar6 & 1) != 0) {
          pcVar2 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_opUserName);
          _objc_retainAutoreleasedReturnValue();
          local_148 = pcVar2;
          if (pcVar2 == (cfstringStruct *)0x0) {
            local_148 = &cf___;
          }
          (*(code *)PTR__objc_msgSend_02578628)(pcVar3,puVar1,local_148);
          (*(code *)PTR__objc_release_02578630)(pcVar2);
        }
        pcVar3 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_setMsgSvrID__0269f698);
        if (((ulong)pcVar3 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setMsgSvrID__0269f698,pcVar4);
        }
        pcVar6 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_setMsgType__0269f6a0);
        pcVar3 = local_58;
        puVar1 = PTR_s_setMsgType__0269f6a0;
        if (((ulong)pcVar6 & 1) != 0) {
          pcVar2 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_msgType);
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = pcVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_msgSend_02578628)(pcVar3,puVar1,(ulong)pcVar4 & 0xffffffff);
          (*(code *)PTR__objc_release_02578630)(pcVar2);
        }
        pcVar6 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_setMsgSummary__0269f6a8);
        pcVar3 = local_58;
        puVar1 = PTR_s_setMsgSummary__0269f6a8;
        if (((ulong)pcVar6 & 1) != 0) {
          pcVar2 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_msgSummary);
          _objc_retainAutoreleasedReturnValue();
          local_1a8 = pcVar2;
          if (pcVar2 == (cfstringStruct *)0x0) {
            local_1a8 = &cf___;
          }
          (*(code *)PTR__objc_msgSend_02578628)(pcVar3,puVar1,local_1a8);
          (*(code *)PTR__objc_release_02578630)(pcVar2);
        }
        pcVar3 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_setStatus__0269f6b0);
        if (((ulong)pcVar3 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setStatus__0269f6b0,0);
        }
        pcVar6 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_setMsgUserName__0269f6b8);
        pcVar3 = local_58;
        puVar1 = PTR_s_setMsgUserName__0269f6b8;
        if (((ulong)pcVar6 & 1) != 0) {
          pcVar2 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_msgUserName);
          _objc_retainAutoreleasedReturnValue();
          local_1d8 = pcVar2;
          if (pcVar2 == (cfstringStruct *)0x0) {
            local_1d8 = &cf___;
          }
          (*(code *)PTR__objc_msgSend_02578628)(pcVar3,puVar1,local_1d8);
          (*(code *)PTR__objc_release_02578630)(pcVar2);
        }
        pcVar3 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_setIsRevoke__0269f6c0);
        if (((ulong)pcVar3 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setIsRevoke__0269f6c0,0);
        }
        pcVar3 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_setExposureTime__0269f6c8);
        if (((ulong)pcVar3 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setExposureTime__0269f6c8,0);
        }
        pcVar3 = local_58;
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = pcVar3;
      }
      local_48 = 1;
      _objc_storeStrong(&local_58,0);
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

