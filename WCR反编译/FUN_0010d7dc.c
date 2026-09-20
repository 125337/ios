// FUN_0010d7dc @ 0010d7dc

void FUN_0010d7dc(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *local_108;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  undefined4 local_50;
  ulong local_40;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  uVar1 = local_38;
  FUN_0010ee50();
  _objc_retainAutoreleasedReturnValue();
  local_40 = uVar1;
  FUN_0010dc1c();
  uVar3 = local_40;
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = uVar3;
    local_50 = 1;
    goto LAB_0010dba8;
  }
  if (local_30 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = uVar3;
    local_50 = 1;
    goto LAB_0010dba8;
  }
  uVar3 = local_30;
  FUN_0010dca0(local_30,&cf_m_nsFromUsr);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_30;
  local_58 = uVar3;
  FUN_0010dca0(local_30,&cf_m_nsToUsr);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_58;
  local_60 = uVar1;
  FUN_0010dc1c();
  uVar3 = local_58;
  if ((uVar2 & 1) == 0) {
    uVar1 = local_60;
    FUN_0010dc1c();
    uVar3 = local_60;
    if ((uVar1 & 1) == 0) {
      FUN_0010ef9c();
      _objc_retainAutoreleasedReturnValue();
      local_68 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
      if (uVar1 == 0) {
LAB_0010dae4:
        uVar3 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
        if (uVar3 == 0) {
          local_108 = &local_60;
        }
        else {
          local_108 = &local_58;
        }
        uVar3 = *local_108;
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = uVar3;
      }
      else {
        uVar1 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_isEqualToString__0269ccc8,local_68);
        uVar3 = local_60;
        if ((uVar1 & 1) == 0) {
          uVar1 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_isEqualToString__0269ccc8,local_68);
          uVar3 = local_58;
          if ((uVar1 & 1) == 0) goto LAB_0010dae4;
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = uVar3;
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = uVar3;
        }
      }
      local_50 = 1;
      _objc_storeStrong(&local_68,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = uVar3;
      local_50 = 1;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = uVar3;
    local_50 = 1;
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
LAB_0010dba8:
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

