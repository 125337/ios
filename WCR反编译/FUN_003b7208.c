// FUN_003b7208 @ 003b7208

void FUN_003b7208(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  long lVar4;
  cfstringStruct *local_e0;
  ulong local_68 [4];
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined4 local_34;
  cfstringStruct *local_30;
  long local_28;
  long local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_4);
  if ((local_18 == 0) || (local_20 == 0)) {
    local_34 = 1;
  }
  else {
    pcVar1 = &cf_logicUpdateSession_;
    _NSSelectorFromString();
    pcVar2 = &cf_updateSession_;
    local_40 = pcVar1;
    _NSSelectorFromString();
    uVar3 = local_18;
    local_48 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_respondsToSelector__026ca818,local_40);
    if ((uVar3 & 1) == 0) {
      uVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_respondsToSelector__026ca818,local_48);
      if ((uVar3 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,local_48,local_20);
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,local_40,local_20);
    }
    uVar3 = local_18;
    FUN_003612b8(local_18,&cf_m_mainFrameLogicController);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = &cf_callUpdateSession_;
    local_68[0] = uVar3;
    _NSSelectorFromString();
    uVar3 = local_68[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_68[0],PTR_s_respondsToSelector__026ca818,pcVar1);
    if ((uVar3 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_68[0],pcVar1,local_20);
    }
    pcVar1 = &cf_callUpdateSessionByName_;
    _NSSelectorFromString();
    lVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
    if ((lVar4 != 0) &&
       (uVar3 = local_68[0],
       (*(code *)PTR__objc_msgSend_02578628)(local_68[0],PTR_s_respondsToSelector__026ca818,pcVar1),
       (uVar3 & 1) != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_68[0],pcVar1,local_28);
    }
    if (local_30 == (cfstringStruct *)0x0) {
      local_e0 = &cf_sessionUpdated;
    }
    else {
      local_e0 = local_30;
    }
    FUN_00368c14(local_18,local_e0);
    _objc_storeStrong(local_68,0);
    local_34 = 0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

