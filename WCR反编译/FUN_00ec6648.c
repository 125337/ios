// FUN_00ec6648 @ 00ec6648

byte FUN_00ec6648(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_38;
  int local_2c;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  uVar1 = local_20;
  FUN_00ec96fc();
  if ((uVar1 & 1) == 0) {
    local_11 = 0;
    local_2c = 1;
  }
  else {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_isEqualToString__0269ccc8,&cf_wcr_attach_plugin_small_signal);
    if ((uVar1 & 1) != 0) {
      uVar1 = local_28;
      FUN_00ec4b28(local_28,&cf_m_chatName);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      FUN_00ebd790();
      _objc_retainAutoreleasedReturnValue();
      local_38 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
      uVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
      if (uVar1 == 0) {
        local_11 = 0;
        local_2c = 1;
      }
      else {
        uVar1 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_rangeOfString__0269d838,&cf__chatroom);
        if (uVar1 == 0x7fffffffffffffff) {
          uVar1 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_hasSuffix__0269d018,&cf__im_chatroom)
          ;
          if ((uVar1 & 1) == 0) {
            local_2c = 0;
          }
          else {
            local_11 = 0;
            local_2c = 1;
          }
        }
        else {
          local_11 = 0;
          local_2c = 1;
        }
      }
      _objc_storeStrong(&local_38,0);
      if (local_2c != 0) goto LAB_00ec6828;
    }
    local_11 = 1;
    local_2c = 1;
  }
LAB_00ec6828:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

