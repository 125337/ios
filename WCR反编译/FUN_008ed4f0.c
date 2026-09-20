// FUN_008ed4f0 @ 008ed4f0

byte FUN_008ed4f0(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  int local_3c;
  ulong local_38;
  byte local_29;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_38 = 0;
  _objc_storeStrong(&local_38,param_1);
  if (local_38 == 0) {
    local_29 = 0;
    local_3c = 1;
  }
  else {
    uVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_IsVideoMsg_0269da40);
    if (((uVar1 & 1) == 0) ||
       (uVar1 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_IsVideoMsg_0269da40),
       (uVar1 & 1) == 0)) {
      uVar1 = local_38;
      FUN_008eb36c(local_38,PTR_s_m_uiMessageType_0269d0a8,0x7fffffffffffffff);
      local_60 = uVar1;
      if (uVar1 == 0x2b) {
        local_29 = 1;
        local_3c = 1;
      }
      else {
        if (uVar1 == 0x31) {
          uVar2 = local_38;
          FUN_008eb36c(local_38,PTR_s_m_uiAppMsgInnerType_026a14f0,0x7fffffffffffffff);
          uVar1 = local_38;
          local_68 = uVar2;
          if (((uVar2 == 0x2b) || (uVar2 == 0x2c)) || (uVar2 == 0x2d)) {
            local_29 = 1;
            local_3c = 1;
            goto LAB_008ed8b0;
          }
          local_28 = &cf_m_nsContent;
          local_20 = &cf_content;
          puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                     &local_28,2);
          _objc_retainAutoreleasedReturnValue();
          FUN_008eb4dc();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar1;
          FUN_008e5574();
          _objc_retainAutoreleasedReturnValue();
          local_70 = uVar2;
          (*(code *)PTR__objc_release_02578630)(uVar1);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          uVar1 = local_70;
          FUN_008eb9ec();
          if (((uVar1 == 0x2b) || (uVar1 == 0x2c)) || (lVar4 = uVar1 - 0x2d, lVar4 == 0)) {
            lVar4 = 1;
            local_29 = 1;
            local_3c = 1;
          }
          else {
            local_3c = 0;
          }
          _objc_storeStrong(lVar4,&local_70,0);
          if (local_3c != 0) goto LAB_008ed8b0;
        }
        local_29 = 0;
        local_3c = 1;
      }
    }
    else {
      local_29 = 1;
      local_3c = 1;
    }
  }
LAB_008ed8b0:
  _objc_storeStrong(&local_38,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 == 0) {
    return local_29 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
}

