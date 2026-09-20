// FUN_00f16778 @ 00f16778

void FUN_00f16778(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong *local_d8;
  ulong local_90;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  undefined *local_70;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  uint local_4c;
  ulong local_48;
  ulong local_40;
  undefined *local_38 [2];
  ulong local_28 [3];
  
  local_28[2] = *(ulong *)PTR____stack_chk_guard_02578670;
  local_48 = 0;
  _objc_storeStrong(&local_48,param_1);
  uVar3 = local_48;
  if (local_48 == 0) {
    local_40 = 0;
    local_4c = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_28[0] = uVar3;
    local_28[1] = 0;
    uVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_getCurrViewController_026abd78);
    if ((uVar3 & 1) != 0) {
      uVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_getCurrViewController_026abd78);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_28[1];
      local_28[1] = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    for (local_58 = 0; local_58 < 2; local_58 = local_58 + 1) {
      uVar3 = local_28[local_58];
      (*(code *)PTR__objc_retain_02578638)();
      local_60 = uVar3;
      if (uVar3 == 0) {
        local_4c = 4;
      }
      else {
        local_38[0] = PTR_s_GetContact_0269d2c0;
        local_38[1] = PTR_s_getChatContact_0269d630;
        for (local_68 = 0; local_68 < 2; local_68 = local_68 + 1) {
          local_70 = local_38[local_68];
          uVar3 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_60,PTR_s_respondsToSelector__026ca818,local_70);
          if ((uVar3 & 1) != 0) {
            uVar2 = local_60;
            (*(code *)PTR__objc_msgSend_02578628)(local_60,local_70);
            _objc_retainAutoreleasedReturnValue();
            local_78 = uVar2;
            FUN_00f16348(uVar2,PTR_s_m_nsUsrName_0269d638);
            _objc_retainAutoreleasedReturnValue();
            local_80 = uVar2;
            (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
            uVar3 = local_80;
            bVar1 = uVar2 != 0;
            if (bVar1) {
              (*(code *)PTR__objc_retain_02578638)();
              local_40 = uVar3;
            }
            local_4c = (uint)bVar1;
            _objc_storeStrong(bVar1,&local_80);
            _objc_storeStrong(&local_78,0);
            if (local_4c != 0) goto LAB_00f16b18;
          }
        }
        uVar4 = local_60;
        FUN_00f16348(local_60,PTR_s_getCurrentChatName_0269ec28);
        _objc_retainAutoreleasedReturnValue();
        local_88 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_length_0269cca0);
        uVar2 = local_60;
        uVar3 = local_88;
        if (uVar4 == 0) {
          puVar5 = PTR__OBJC_CLASS___UIView_026cdfd8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar5);
          if ((uVar2 & 1) != 0) {
            uVar2 = local_60;
            _WCRefineCurrentChatSessionFromView();
            _objc_retainAutoreleasedReturnValue();
            local_90 = uVar2;
            (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
            uVar3 = local_90;
            bVar1 = uVar2 != 0;
            if (bVar1) {
              (*(code *)PTR__objc_retain_02578638)();
              local_40 = uVar3;
            }
            local_4c = (uint)bVar1;
            _objc_storeStrong(bVar1,&local_90,0);
            if (local_4c != 0) goto LAB_00f16b08;
          }
          local_4c = 0;
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_40 = uVar3;
          local_4c = 1;
        }
LAB_00f16b08:
        _objc_storeStrong(&local_88,0);
      }
LAB_00f16b18:
      _objc_storeStrong(&local_60,0);
      if ((local_4c != 0) && (local_4c != 4)) goto LAB_00f16b68;
    }
    local_40 = 0;
    local_4c = 1;
LAB_00f16b68:
    local_d8 = local_28 + 2;
    do {
      local_d8 = local_d8 + -1;
      _objc_storeStrong(local_d8,0);
    } while (local_d8 != local_28);
  }
  _objc_storeStrong(&local_48,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28[2]) {
    _objc_autoreleaseReturnValue(0,local_40);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

