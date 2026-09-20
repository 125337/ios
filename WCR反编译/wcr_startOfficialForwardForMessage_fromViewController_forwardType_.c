// wcr_startOfficialForwardForMessage:fromViewController:forwardType: @ 00fae3d4

/* Function Stack Size: 0x28 bytes */

bool WCRefineHelper::wcr_startOfficialForwardForMessage_fromViewController_forwardType_
               (ID param_1,SEL param_2,ID param_3,ID param_4,long_long param_5)

{
  undefined8 ***pppuVar1;
  undefined8 ****ppppuVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined8 ***local_e0;
  cfstringStruct *local_98 [3];
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  undefined8 ***local_60;
  undefined4 local_54;
  long_long local_50;
  undefined8 ***local_48;
  long local_40;
  SEL local_38;
  ID local_30;
  byte local_21;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  ppppuVar2 = &local_48;
  local_48 = (undefined8 ****)0x0;
  _objc_storeStrong(ppppuVar2,param_4);
  local_50 = param_5;
  if (local_40 == 0) {
    local_21 = 0;
    local_54 = 1;
    goto LAB_00fae8e0;
  }
  FUN_00fae91c();
  _objc_retainAutoreleasedReturnValue();
  local_e0 = ppppuVar2;
  if (ppppuVar2 == (undefined8 ****)0x0) {
    local_e0 = local_48;
  }
  local_60 = ppppuVar2;
  FUN_00faec6c();
  _objc_retainAutoreleasedReturnValue();
  pppuVar1 = local_48;
  local_48 = local_e0;
  (*(code *)PTR__objc_release_02578630)(pppuVar1);
  if ((undefined8 ****)local_48 == (undefined8 ****)0x0) {
    local_21 = 0;
    local_54 = 1;
  }
  else {
    pcVar3 = &cf_ForwardMessageMgr;
    _NSClassFromString();
    pcVar4 = &cf_MMContext;
    local_68 = pcVar3;
    _NSClassFromString();
    local_70 = pcVar4;
    if ((local_68 == (cfstringStruct *)0x0) || (pcVar4 == (cfstringStruct *)0x0)) {
      local_21 = 0;
      local_54 = 1;
    }
    else {
      local_78 = (cfstringStruct *)0x0;
      pcVar3 = &cf_currentContext;
      _NSSelectorFromString();
      pcVar4 = local_70;
      local_80 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_respondsToSelector__026ca818,pcVar3);
      if (((ulong)pcVar4 & 1) != 0) {
        pcVar4 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,local_80);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = &cf_getService_;
        local_98[0] = pcVar4;
        _NSSelectorFromString();
        if ((local_98[0] != (cfstringStruct *)0x0) &&
           (pcVar4 = local_98[0],
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_98[0],PTR_s_respondsToSelector__026ca818,pcVar3),
           ((ulong)pcVar4 & 1) != 0)) {
          pcVar4 = local_98[0];
          (*(code *)PTR__objc_msgSend_02578628)(local_98[0],pcVar3,local_68);
          _objc_retainAutoreleasedReturnValue();
          pcVar3 = local_78;
          local_78 = pcVar4;
          (*(code *)PTR__objc_release_02578630)(pcVar3);
        }
        _objc_storeStrong(local_98,0);
      }
      if (local_78 == (cfstringStruct *)0x0) {
        local_21 = 0;
      }
      else {
        FUN_00faf094(local_78,local_48);
        if ((long)local_50 < 0) {
          pcVar3 = &cf_forwardMessage_fromViewController_;
          _NSSelectorFromString();
          pcVar4 = local_78;
          (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_respondsToSelector__026ca818,pcVar3);
          if (((ulong)pcVar4 & 1) == 0) {
            local_21 = 0;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_78,pcVar3,local_40,local_48);
LAB_00fae84c:
            FUN_00faf094(local_78,local_48);
            local_21 = 1;
          }
        }
        else {
          pcVar3 = &cf_forwardMessage_fromViewController_forwardType_;
          _NSSelectorFromString();
          pcVar4 = local_78;
          (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_respondsToSelector__026ca818,pcVar3);
          if (((ulong)pcVar4 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_78,pcVar3,local_40,local_48,local_50);
            goto LAB_00fae84c;
          }
          local_21 = 0;
        }
      }
      local_54 = 1;
      _objc_storeStrong(&local_78,0);
    }
  }
  _objc_storeStrong(&local_60,0);
LAB_00fae8e0:
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  return local_21 & 1;
}

