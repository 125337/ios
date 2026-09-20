// FUN_0069ac5c @ 0069ac5c

void FUN_0069ac5c(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  ulong local_30;
  uint local_24;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar4 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_getSectionCount_026a0b70);
  if (((uVar4 & 1) == 0) ||
     (uVar4 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_getSectionAt__026a0a78),
     (uVar4 & 1) == 0)) {
    local_18 = 0;
    iVar3 = 1;
    local_24 = 1;
  }
  else {
    uVar4 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_getSectionCount_026a0b70);
    local_30 = uVar4;
    for (local_38 = 0; local_38 < local_30; local_38 = local_38 + 1) {
      uVar4 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_getSectionAt__026a0a78,local_38);
      _objc_retainAutoreleasedReturnValue();
      local_40 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar4,PTR_s_respondsToSelector__026ca818,PTR_s_getCellCount_026a0b78);
      if (((uVar4 & 1) == 0) ||
         (uVar4 = local_40,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_getCellAt__026a0b80),
         (uVar4 & 1) == 0)) {
        uVar4 = 4;
        local_24 = 4;
      }
      else {
        uVar4 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_getCellCount_026a0b78);
        local_48 = uVar4;
        for (local_50 = 0; uVar4 = local_50 - local_48, local_50 < local_48; local_50 = local_50 + 1
            ) {
          uVar2 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_getCellAt__026a0b80,local_50);
          _objc_retainAutoreleasedReturnValue();
          local_58 = uVar2;
          FUN_0069c4b4();
          uVar4 = local_58;
          bVar1 = (uVar2 & 1) != 0;
          if (bVar1) {
            (*(code *)PTR__objc_retain_02578638)();
            local_18 = uVar4;
          }
          local_24 = (uint)bVar1;
          _objc_storeStrong(&local_58,0);
          uVar4 = (ulong)local_24;
          if (local_24 != 0) goto LAB_0069ae68;
        }
        local_24 = 0;
      }
LAB_0069ae68:
      _objc_storeStrong(uVar4,&local_40,0);
      if ((local_24 != 0) && (iVar3 = local_24 - 4, iVar3 != 0)) goto LAB_0069aeb8;
    }
    local_18 = 0;
    iVar3 = 1;
    local_24 = 1;
  }
LAB_0069aeb8:
  _objc_storeStrong(iVar3,&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

