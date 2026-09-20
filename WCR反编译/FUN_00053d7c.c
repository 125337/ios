// FUN_00053d7c @ 00053d7c

void FUN_00053d7c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  char *pcVar3;
  ulong local_70;
  int local_64;
  undefined *local_60;
  ulong local_58;
  ulong local_50;
  undefined4 local_48;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  if ((local_38 == 0) ||
     (uVar1 = local_38,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_m_uiMesLocalID_0269d238),
     (uVar1 & 1) == 0)) {
    uVar1 = local_38;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = uVar1;
    local_48 = 1;
  }
  else {
    uVar1 = local_30;
    FUN_0004fa34();
    _objc_retainAutoreleasedReturnValue();
    local_50 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
    if (uVar1 == 0) {
      uVar2 = 0;
      FUN_00052874(0,local_38);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_50;
      local_50 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    uVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
    uVar1 = local_38;
    if (uVar2 == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = uVar1;
      local_48 = 1;
    }
    else {
      FUN_00051280();
      _objc_retainAutoreleasedReturnValue();
      local_60 = PTR_s_GetMsg_LocalID__0269d5e8;
      local_58 = uVar2;
      if ((uVar2 == 0) ||
         ((*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_respondsToSelector__026ca818,PTR_s_GetMsg_LocalID__0269d5e8),
         (uVar2 & 1) == 0)) {
        uVar1 = local_38;
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = uVar1;
        local_48 = 1;
      }
      else {
        uVar2 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_m_uiMesLocalID_0269d238);
        uVar1 = local_38;
        local_64 = (int)uVar2;
        if (local_64 == 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = uVar1;
          local_48 = 1;
        }
        else {
          uVar1 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,local_60,local_50,uVar2 & 0xffffffff);
          _objc_retainAutoreleasedReturnValue();
          pcVar3 = "CMessageWrap";
          local_70 = uVar1;
          _objc_getClass();
          if (((local_70 == 0) || (pcVar3 == (char *)0x0)) ||
             (uVar2 = local_70,
             (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_isKindOfClass__0269cd68,pcVar3),
             uVar1 = local_70, (uVar2 & 1) == 0)) {
            uVar1 = local_38;
            (*(code *)PTR__objc_retain_02578638)();
            local_28 = uVar1;
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_28 = uVar1;
          }
          local_48 = 1;
          _objc_storeStrong(&local_70,0);
        }
      }
      _objc_storeStrong(&local_58,0);
    }
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

