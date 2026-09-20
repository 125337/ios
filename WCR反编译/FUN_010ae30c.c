// FUN_010ae30c @ 010ae30c

ulong FUN_010ae30c(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong local_c0;
  ulong local_b0;
  bool local_71;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  undefined *local_50;
  undefined4 local_44;
  ulong local_40;
  ulong local_38;
  ulong local_30;
  undefined *local_28;
  undefined *local_20;
  ulong local_18;
  
  local_40 = 0;
  _objc_storeStrong(&local_40,param_1);
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if (uVar1 < 8) {
    local_38 = 0xffffffffffffffff;
    local_44 = 1;
  }
  else {
    uVar1 = local_40;
    puVar4 = PTR_s_rangeOfString__0269d838;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_rangeOfString__0269d838,&cf_<appmsg);
    local_b0 = uVar1;
    if (uVar1 == 0x7fffffffffffffff) {
      local_b0 = 0;
    }
    local_60 = local_b0;
    uVar2 = local_40;
    local_58 = uVar1;
    local_50 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    if (uVar2 <= local_b0) {
      local_c0 = local_40;
    }
    else {
      local_c0 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_substringFromIndex__0269d120,local_60);
      _objc_retainAutoreleasedReturnValue();
      local_70 = local_c0;
    }
    local_71 = uVar2 > local_b0;
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = local_c0;
    if (local_71) {
      (*(code *)PTR__objc_release_02578630)(local_70);
    }
    uVar1 = local_68;
    puVar4 = PTR_s_rangeOfString__0269d838;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_rangeOfString__0269d838,&cf_<type>);
    uVar2 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_rangeOfString__0269d838,&cf_<_type>);
    if (((uVar1 == 0x7fffffffffffffff) || (uVar2 == 0x7fffffffffffffff)) || (uVar2 <= uVar1)) {
      local_38 = 0xffffffffffffffff;
    }
    else {
      local_28 = puVar4 + uVar1;
      local_30 = (uVar2 - uVar1) - (long)puVar4;
      local_20 = local_28;
      local_18 = local_30;
      if (local_30 < 0x41) {
        uVar1 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_68,PTR_s_substringWithRange__0269d138,local_28,local_30);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        FUN_010aaf58();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_38 = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar2);
        (*(code *)PTR__objc_release_02578630)(uVar1);
      }
      else {
        local_38 = 0xffffffffffffffff;
      }
    }
    local_44 = 1;
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_40,0);
  return local_38;
}

