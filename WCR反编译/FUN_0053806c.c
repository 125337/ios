// FUN_0053806c @ 0053806c

void FUN_0053806c(undefined8 param_1,byte param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar4;
  ulong uVar5;
  uint local_bc;
  ulong local_58;
  byte local_4d;
  int local_4c;
  ulong local_48;
  undefined4 local_40;
  byte local_29;
  ulong local_28;
  undefined8 local_20;
  long *local_18;
  ulong *puVar3;
  
  puVar3 = &local_28;
  local_28 = 0;
  _objc_storeStrong(puVar3,param_1);
  uVar1 = (uint)puVar3;
  local_29 = param_2;
  FUN_005384f8();
  if (((uVar1 & 1) == 0) || (local_28 == 0)) {
    local_40 = 1;
  }
  else {
    local_48 = 0;
    uVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_m_timeLabel_026a4c20);
    if ((uVar5 & 1) != 0) {
      uVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_m_timeLabel_026a4c20);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = local_48;
      local_48 = uVar4;
      (*(code *)PTR__objc_release_02578630)(uVar5);
    }
    local_18 = &DAT_028cb248;
    local_20 = 0;
    _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0257dcb8);
    if (*local_18 + 1 != 0) {
      _dispatch_once(*local_18 + 1,local_18,local_20);
    }
    _objc_storeStrong(&local_20,0);
    uVar5 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isKindOfClass__0269cd68,DAT_028cb240);
    if ((uVar5 & 1) == 0) {
      local_40 = 1;
    }
    else {
      uVar5 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_m_dataItem_026a4670);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar5;
      FUN_0053860c();
      iVar2 = (int)uVar4;
      (*(code *)PTR__objc_release_02578630)(uVar5);
      local_4d = 0;
      local_4c = iVar2;
      if (iVar2 != 0) {
        uVar5 = uVar4 & 0xffffffff;
        FUN_005386fc(uVar4 & 0xffffffff);
        _objc_retainAutoreleasedReturnValue();
        local_58 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_length_0269cca0);
        local_bc = 0;
        if (uVar5 != 0) {
          uVar5 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_text_0269ce68);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_bc = (uint)uVar4 ^ 1;
          (*(code *)PTR__objc_release_02578630)(uVar5);
        }
        if ((local_bc & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setText__026caa88,local_58);
          local_4d = 1;
        }
        _objc_storeStrong(&local_58,0);
      }
      FUN_00538b24(local_48);
      if ((((local_29 & 1) != 0) && ((local_4d & 1) != 0)) &&
         (uVar5 = local_28,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_28,PTR_s_respondsToSelector__026ca818,
                    PTR_s_fitTimeLableLineElements_026a4c28), (uVar5 & 1) != 0)) {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_fitTimeLableLineElements_026a4c28);
      }
      local_40 = 0;
    }
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

