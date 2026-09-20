// FUN_0014e934 @ 0014e934

void FUN_0014e934(undefined8 param_1)

{
  undefined *puVar1;
  bool bVar2;
  ulong *puVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  ulong uVar7;
  undefined *local_a8;
  uint local_94;
  ulong local_18;
  
  puVar3 = &local_18;
  local_18 = 0;
  _objc_storeStrong(puVar3,param_1);
  bVar2 = true;
  if (local_18 != 0) {
    FUN_00147e08();
    _objc_retainAutoreleasedReturnValue();
    bVar2 = puVar3 == (ulong *)0x0;
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  if (!bVar2) {
    pcVar4 = "ThemeBoxLayout";
    _objc_getClass();
    puVar1 = PTR_s_applyLiquidGlassInputView__0269f3c8;
    local_a8 = PTR_s_applyInputView__0269f3c0;
    if (pcVar4 != (char *)0x0) {
      pcVar5 = "ThemeBoxUtil";
      _objc_getClass();
      local_94 = 0;
      if (pcVar5 != (char *)0x0) {
        pcVar6 = pcVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar5,PTR_s_respondsToSelector__026ca818,PTR_s_enabledNewEngine_0269f4d0);
        local_94 = 0;
        if (((ulong)pcVar6 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_enabledNewEngine_0269f4d0);
          local_94 = (uint)pcVar5;
        }
      }
      if (((local_94 & 1) == 0) ||
         (pcVar5 = pcVar4,
         (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_respondsToSelector__026ca818,puVar1),
         ((ulong)pcVar5 & 1) == 0)) {
      }
      else {
        local_a8 = puVar1;
      }
      pcVar5 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_respondsToSelector__026ca818,local_a8);
      if (((ulong)pcVar5 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(pcVar4,local_a8,local_18);
        if ((DAT_028c87b8 & 1) != 0) {
          FUN_001473c8(local_18);
        }
        if (((DAT_028c87b8 & 1) != 0) || ((DAT_028c87b9 & 1) != 0)) {
          FUN_00147a34(local_18);
        }
        goto LAB_0014ecb4;
      }
    }
    uVar7 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_updateToolViewHeight__0269f4d8);
    if ((uVar7 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_updateToolViewHeight__0269f4d8,0);
    }
    if ((DAT_028c87b8 & 1) != 0) {
      FUN_001473c8(local_18);
    }
    if (((DAT_028c87b8 & 1) != 0) || ((DAT_028c87b9 & 1) != 0)) {
      FUN_00147a34(local_18);
    }
  }
LAB_0014ecb4:
  _objc_storeStrong(&local_18,0);
  return;
}

