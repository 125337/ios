// FUN_005242a4 @ 005242a4

void FUN_005242a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar3;
  ulong local_40;
  undefined4 local_38;
  ulong local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uVar2;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar2 = local_18;
  (*DAT_028cb130)(local_18,local_20,local_28);
  uVar1 = (uint)uVar2;
  FUN_0052a1d0();
  if ((uVar1 & 1) == 0) {
    local_38 = 1;
  }
  else if ((local_28 == 0) ||
          (uVar3 = local_28,
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_anyObject_026a4b10),
          (uVar3 & 1) == 0)) {
    local_38 = 1;
  }
  else {
    uVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_anyObject_026a4b10);
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar3;
    if ((uVar3 == 0) ||
       ((*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_respondsToSelector__026ca818,PTR_s_integerValue_026ca750),
       (uVar3 & 1) == 0)) {
      local_38 = 1;
    }
    else {
      uVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_integerValue_026ca750);
      FUN_0052a26c(0x3fd3333333333333,local_18,uVar3);
      local_38 = 0;
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

