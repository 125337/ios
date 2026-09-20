// FUN_00148324 @ 00148324

void FUN_00148324(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong local_48 [3];
  long *local_30;
  uint local_24;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = 0;
    local_24 = 1;
  }
  else {
    if ((DAT_028c87d8 & 1) == 0) {
      iVar2 = 0x28c87d8;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        DAT_028c87c0 = PTR_s_inputFullImageView_0269f418;
        DAT_028c87c8 = PTR_s_inputBackgroundImageView_0269f420;
        DAT_028c87d0 = 0;
        ___cxa_guard_release(&DAT_028c87d8);
      }
    }
    for (local_30 = (long *)&DAT_028c87c0; *local_30 != 0; local_30 = local_30 + 1) {
      uVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,*local_30);
      if ((uVar3 & 1) != 0) {
        uVar4 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,*local_30);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
        local_48[0] = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
        uVar3 = local_48[0];
        bVar1 = (uVar4 & 1) != 0;
        if (bVar1) {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = uVar3;
        }
        local_24 = (uint)bVar1;
        _objc_storeStrong(local_48,0);
        if (local_24 != 0) goto LAB_00148538;
      }
    }
    local_18 = 0;
    local_24 = 1;
  }
LAB_00148538:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

