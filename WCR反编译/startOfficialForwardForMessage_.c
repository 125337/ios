// startOfficialForwardForMessage: @ 019aa8fc

/* Function Stack Size: 0x18 bytes */

bool WCRefineFileManagerViewController::startOfficialForwardForMessage_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  ID local_b8;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  ID local_50;
  undefined4 local_44;
  long local_40;
  SEL local_38;
  ID local_30;
  byte local_21;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  if (local_40 == 0) {
    local_21 = 0;
    local_44 = 1;
  }
  else {
    IVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    local_b8 = IVar1;
    if (IVar1 == 0) {
      local_b8 = local_30;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = local_b8;
    (*(code *)PTR__objc_release_02578630)(IVar1);
    pcVar2 = &cf_ForwardMessageMgr;
    _NSClassFromString();
    pcVar3 = &cf_MMContext;
    local_58 = pcVar2;
    _NSClassFromString();
    local_60 = pcVar3;
    if (((local_58 == (cfstringStruct *)0x0) || (pcVar3 == (cfstringStruct *)0x0)) ||
       (local_50 == 0)) {
      local_21 = 0;
      local_44 = 1;
    }
    else {
      local_68 = (cfstringStruct *)0x0;
      local_70 = (cfstringStruct *)0x0;
      pcVar2 = &cf_currentContext;
      _NSSelectorFromString();
      pcVar3 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_respondsToSelector__026ca818,pcVar2);
      if (((ulong)pcVar3 & 1) != 0) {
        pcVar3 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,pcVar2);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = local_68;
        local_68 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
      }
      pcVar2 = &cf_getService_;
      _NSSelectorFromString();
      if ((local_68 != (cfstringStruct *)0x0) &&
         (pcVar3 = local_68,
         (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_respondsToSelector__026ca818,pcVar2),
         ((ulong)pcVar3 & 1) != 0)) {
        pcVar3 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,pcVar2,local_58);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = local_70;
        local_70 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
      }
      pcVar2 = &cf_forwardMessage_fromViewController_forwardType_;
      _NSSelectorFromString();
      if ((local_70 == (cfstringStruct *)0x0) ||
         (pcVar3 = local_70,
         (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_respondsToSelector__026ca818,pcVar2),
         ((ulong)pcVar3 & 1) == 0)) {
        local_21 = 0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_setActiveForwardController__026ba790,local_70);
        (*(code *)PTR__objc_msgSend_02578628)(local_70,pcVar2,local_40,local_50,4);
        local_21 = 1;
      }
      local_44 = 1;
      _objc_storeStrong(&local_70);
      _objc_storeStrong(&local_68,0);
    }
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_40,0);
  return local_21 & 1;
}

