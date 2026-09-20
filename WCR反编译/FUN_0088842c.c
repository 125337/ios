// FUN_0088842c @ 0088842c

void FUN_0088842c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong local_c8;
  long local_c0;
  long lStack_b8;
  ulong local_b0;
  undefined *local_a8;
  long local_a0;
  long lStack_98;
  ulong local_90;
  undefined *local_88;
  undefined4 local_80;
  ulong local_70;
  undefined8 local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  
  local_68 = 0;
  _objc_storeStrong(&local_68,param_1);
  local_70 = 0;
  _objc_storeStrong(&local_70,param_2);
  uVar2 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
  if (uVar2 == 0) {
    local_80 = 1;
  }
  else {
    uVar2 = local_70;
    puVar3 = PTR_s_rangeOfString__0269d838;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_rangeOfString__0269d838,&cf__);
    local_90 = uVar2;
    local_88 = puVar3;
    if (uVar2 == 0x7fffffffffffffff) {
      local_80 = 1;
    }
    else {
      lVar1 = uVar2 + 1;
      uVar2 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
      lStack_b8 = (uVar2 - local_90) + -1;
      uVar2 = local_70;
      puVar3 = PTR_s_rangeOfString_options_range__0269d130;
      local_c0 = lVar1;
      local_a0 = lVar1;
      lStack_98 = lStack_b8;
      local_40 = lStack_b8;
      local_38 = lVar1;
      local_30 = lVar1;
      local_28 = lStack_b8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_70,PTR_s_rangeOfString_options_range__0269d130,&cf__,0,lVar1,lStack_b8);
      local_b0 = uVar2;
      local_a8 = puVar3;
      if ((uVar2 == 0x7fffffffffffffff) || (uVar2 <= local_90 + 1)) {
        local_80 = 1;
      }
      else {
        local_58 = local_90 + 1;
        local_60 = (uVar2 - local_90) + -1;
        uVar2 = local_70;
        local_50 = local_58;
        local_48 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_70,PTR_s_substringWithRange__0269d138,local_58,local_60);
        _objc_retainAutoreleasedReturnValue();
        local_c8 = uVar2;
        FUN_00876528(local_68,uVar2);
        _objc_storeStrong(&local_c8,0);
        local_80 = 0;
      }
    }
  }
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_68,0);
  return;
}

