// FUN_00050734 @ 00050734

byte FUN_00050734(undefined8 param_1)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  ulong local_b8;
  ulong local_88;
  byte local_79;
  cfstringStruct *local_78 [10];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_88 = 0;
  _objc_storeStrong(&local_88,param_1);
  if (local_88 == 0) {
    local_79 = 0;
  }
  else {
    pcVar3 = &cf_isOpenImContact;
    _NSSelectorFromString();
    if (((pcVar3 == (cfstringStruct *)0x0) ||
        (uVar1 = local_88,
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_respondsToSelector__026ca818,pcVar3),
        (uVar1 & 1) == 0)) ||
       (uVar1 = local_88, (*(code *)PTR__objc_msgSend_02578628)(local_88,pcVar3), (uVar1 & 1) == 0))
    {
      local_78[0] = (cfstringStruct *)PTR_s_isBrandContact_0269d9c8;
      local_78[1] = (cfstringStruct *)PTR_s_isOfficialContact_0269d9d0;
      pcVar3 = &cf_isServiceBrand;
      _NSSelectorFromString();
      pcVar2 = &cf_isSubscriptionBrand;
      local_78[2] = pcVar3;
      _NSSelectorFromString();
      pcVar3 = &cf_isBrandSessionHolder;
      local_78[3] = pcVar2;
      _NSSelectorFromString();
      pcVar2 = &cf_isBrandServiceBoxSession;
      local_78[4] = pcVar3;
      _NSSelectorFromString();
      pcVar3 = &cf_isNormalBrand;
      local_78[5] = pcVar2;
      _NSSelectorFromString();
      pcVar2 = &cf_isWeAppContact;
      local_78[6] = pcVar3;
      _NSSelectorFromString();
      pcVar3 = &cf_isTemplateMsgHolder;
      local_78[7] = pcVar2;
      _NSSelectorFromString();
      pcVar2 = &cf_isChatBoxContact;
      local_78[8] = pcVar3;
      _NSSelectorFromString();
      local_78[9] = pcVar2;
      for (local_b8 = 0; local_b8 < 10; local_b8 = local_b8 + 1) {
        pcVar3 = local_78[local_b8];
        if (((pcVar3 != (cfstringStruct *)0x0) &&
            (uVar1 = local_88,
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_88,PTR_s_respondsToSelector__026ca818,pcVar3), (uVar1 & 1) != 0)) &&
           (uVar1 = local_88, (*(code *)PTR__objc_msgSend_02578628)(local_88,pcVar3),
           (uVar1 & 1) != 0)) {
          local_79 = 1;
          goto LAB_00050abc;
        }
      }
      local_79 = 0;
    }
    else {
      local_79 = 0;
    }
  }
LAB_00050abc:
  _objc_storeStrong(&local_88,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_79 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

