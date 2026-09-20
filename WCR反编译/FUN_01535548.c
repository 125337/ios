// FUN_01535548 @ 01535548

void FUN_01535548(undefined8 param_1)

{
  ulong uVar1;
  char *pcVar2;
  char *local_40;
  char *local_38;
  undefined4 local_2c;
  ulong local_28;
  ulong local_20;
  char *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  FUN_01528c84();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_18 = (char *)0x0;
    local_2c = 1;
  }
  else {
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hasSuffix__0269d018,&cf__chatroom_);
    if ((uVar1 & 1) == 0) {
      local_18 = (char *)0x0;
      local_2c = 1;
    }
    else {
      pcVar2 = "CContact";
      _objc_getClass();
      local_38 = pcVar2;
      if (pcVar2 == (char *)0x0) {
        local_18 = (char *)0x0;
        local_2c = 1;
      }
      else {
        _objc_alloc_init();
        local_40 = pcVar2;
        if (pcVar2 == (char *)0x0) {
          local_18 = (char *)0x0;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_setM_nsUsrName__026a7f80);
          if (((ulong)pcVar2 & 1) == 0) {
            FUN_01563e1c(local_40,&cf_m_nsUsrName,local_28);
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setM_nsUsrName__026a7f80,local_28);
          }
          pcVar2 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_setM_nsAliasName__026b0608);
          if (((ulong)pcVar2 & 1) == 0) {
            FUN_01563e1c(local_40,&cf_m_nsAliasName,local_28);
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_40,PTR_s_setM_nsAliasName__026b0608,local_28);
          }
          pcVar2 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_setM_nsNickName__026b0610);
          if (((ulong)pcVar2 & 1) == 0) {
            FUN_01563e1c(local_40,&cf_m_nsNickName,local_28);
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setM_nsNickName__026b0610,local_28)
            ;
          }
          pcVar2 = local_40;
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = pcVar2;
        }
        local_2c = 1;
        _objc_storeStrong(&local_40,0);
      }
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

