// FUN_0109bb5c @ 0109bb5c

ulong FUN_0109bb5c(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong local_c8;
  ulong local_b8;
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
    goto LAB_0109be74;
  }
  uVar1 = local_40;
  puVar3 = PTR_s_rangeOfString_options__0269d118;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_rangeOfString_options__0269d118,&cf_<appmsg,1);
  local_b8 = uVar1;
  if (uVar1 == 0x7fffffffffffffff) {
    local_b8 = 0;
  }
  local_60 = local_b8;
  uVar2 = local_40;
  local_58 = uVar1;
  local_50 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if (uVar2 <= local_b8) {
    local_c8 = local_40;
  }
  else {
    local_c8 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_substringFromIndex__0269d120,local_60);
    _objc_retainAutoreleasedReturnValue();
    local_70 = local_c8;
  }
  local_71 = uVar2 > local_b8;
  (*(code *)PTR__objc_retain_02578638)();
  local_68 = local_c8;
  if (local_71) {
    (*(code *)PTR__objc_release_02578630)(local_70);
  }
  uVar1 = local_68;
  puVar3 = PTR_s_rangeOfString_options__0269d118;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_rangeOfString_options__0269d118,&cf_<type>);
  uVar2 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_68,PTR_s_rangeOfString_options__0269d118,&cf_<_type>,1);
  local_38 = 0;
  if (((uVar1 == 0x7fffffffffffffff) || (local_38 = 0, uVar2 == 0x7fffffffffffffff)) ||
     (local_38 = uVar2 - uVar1, uVar2 < uVar1 || local_38 == 0)) {
LAB_0109be4c:
    uVar1 = local_40;
    FUN_0109f2f8(local_38);
    local_38 = uVar1;
  }
  else {
    local_28 = puVar3 + uVar1;
    local_30 = (uVar2 - uVar1) - (long)puVar3;
    local_38 = local_30 - 0x40;
    local_20 = local_28;
    local_18 = local_30;
    if (0x3f < local_30 && local_38 != 0) goto LAB_0109be4c;
    uVar1 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_68,PTR_s_substringWithRange__0269d138,local_28,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar1;
    FUN_0109ef34();
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if ((long)local_38 < 1) goto LAB_0109be4c;
  }
  local_44 = 1;
  _objc_storeStrong(&local_68,0);
LAB_0109be74:
  _objc_storeStrong(&local_40,0);
  return local_38;
}

