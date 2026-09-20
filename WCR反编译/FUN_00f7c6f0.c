// FUN_00f7c6f0 @ 00f7c6f0

byte FUN_00f7c6f0(undefined8 param_1)

{
  char *pcVar1;
  char *pcVar2;
  cfstringStruct *pcVar3;
  ulong uVar4;
  cfstringStruct *pcVar5;
  ulong local_80;
  ulong local_48;
  byte local_39;
  cfstringStruct *local_38 [4];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_48 = 0;
  _objc_storeStrong(&local_48,param_1);
  if (local_48 == 0) {
    local_39 = 0;
  }
  else {
    pcVar1 = "CContact";
    _objc_getClass();
    pcVar5 = &cf_isYuanBao_;
    _NSSelectorFromString();
    if (((pcVar1 == (char *)0x0) ||
        (pcVar2 = pcVar1,
        (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_respondsToSelector__026ca818,pcVar5),
        ((ulong)pcVar2 & 1) == 0)) ||
       ((*(code *)PTR__objc_msgSend_02578628)(pcVar1,pcVar5,local_48), ((ulong)pcVar1 & 1) == 0)) {
      pcVar5 = &cf_isChatBoxContact;
      _NSSelectorFromString();
      pcVar3 = &cf_isBrandSessionHolder;
      local_38[0] = pcVar5;
      _NSSelectorFromString();
      pcVar5 = &cf_isBrandServiceBoxSession;
      local_38[1] = pcVar3;
      _NSSelectorFromString();
      pcVar3 = &cf_isTemplateMsgHolder;
      local_38[2] = pcVar5;
      _NSSelectorFromString();
      local_38[3] = pcVar3;
      for (local_80 = 0; local_80 < 4; local_80 = local_80 + 1) {
        pcVar5 = local_38[local_80];
        if (((pcVar5 != (cfstringStruct *)0x0) &&
            (uVar4 = local_48,
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_48,PTR_s_respondsToSelector__026ca818,pcVar5), (uVar4 & 1) != 0)) &&
           (uVar4 = local_48, (*(code *)PTR__objc_msgSend_02578628)(local_48,pcVar5),
           (uVar4 & 1) != 0)) {
          local_39 = 1;
          goto LAB_00f7c998;
        }
      }
      local_39 = 0;
    }
    else {
      local_39 = 1;
    }
  }
LAB_00f7c998:
  _objc_storeStrong(&local_48,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 == 0) {
    return local_39 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
}

