// FUN_001b86c8 @ 001b86c8

byte FUN_001b86c8(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  ulong local_68;
  undefined *local_60;
  undefined *local_58;
  char *local_50 [3];
  char *local_38;
  undefined4 local_2c;
  ulong local_28;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  if ((local_20 == 0) || (local_28 == 0)) {
    local_11 = 0;
    local_2c = 1;
  }
  else {
    pcVar1 = "NewRemarkViewController";
    _objc_getClass();
    local_38 = pcVar1;
    if (pcVar1 == (char *)0x0) {
      local_11 = 0;
      local_2c = 1;
    }
    else {
      _objc_alloc_init();
      local_58 = PTR_s_setNeedEditState__0269ffe8;
      local_60 = PTR_s_setM_contact__0269fff0;
      local_50[0] = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_setNeedEditState__0269ffe8);
      if (((ulong)pcVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_50[0],local_58,1);
      }
      pcVar1 = local_50[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_respondsToSelector__026ca818,local_60)
      ;
      if (((ulong)pcVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_50[0],local_60,local_20);
      }
      uVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      local_68 = uVar2;
      if (uVar2 == 0) {
        local_11 = 0;
      }
      else {
        pcVar3 = &cf_PushViewController_animated_;
        _NSSelectorFromString();
        uVar2 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_respondsToSelector__026ca818,pcVar3);
        if ((uVar2 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_68,PTR_s_pushViewController_animated__0269d590,local_50[0],1);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_68,pcVar3,local_50[0],1);
        }
        local_11 = 1;
      }
      local_2c = 1;
      _objc_storeStrong(&local_68);
      _objc_storeStrong(local_50,0);
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

