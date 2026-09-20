// FUN_014fdf60 @ 014fdf60

ulong FUN_014fdf60(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_e0;
  ulong local_d0;
  bool local_81;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  undefined *local_60;
  undefined4 local_54;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  undefined *local_38;
  undefined *local_30;
  ulong local_28;
  
  local_50 = 0;
  _objc_storeStrong(&local_50,param_1);
  uVar2 = local_50;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) == 0) ||
     (uVar2 = local_50, (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0),
     uVar2 < 8)) {
    local_48 = 0xffffffffffffffff;
    local_54 = 1;
    goto LAB_014fe2c4;
  }
  uVar2 = local_50;
  puVar1 = PTR_s_rangeOfString_options__0269d118;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_50,PTR_s_rangeOfString_options__0269d118,&cf_<appmsg,1);
  local_d0 = uVar2;
  if (uVar2 == 0x7fffffffffffffff) {
    local_d0 = 0;
  }
  local_70 = local_d0;
  uVar3 = local_50;
  local_68 = uVar2;
  local_60 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
  if (uVar3 <= local_d0) {
    local_e0 = local_50;
  }
  else {
    local_e0 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_substringFromIndex__0269d120,local_70);
    _objc_retainAutoreleasedReturnValue();
    local_80 = local_e0;
  }
  local_81 = uVar3 > local_d0;
  (*(code *)PTR__objc_retain_02578638)();
  local_78 = local_e0;
  if (local_81) {
    (*(code *)PTR__objc_release_02578630)(local_80);
  }
  uVar2 = local_78;
  puVar1 = PTR_s_rangeOfString_options__0269d118;
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_rangeOfString_options__0269d118,&cf_<type>);
  uVar3 = local_78;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_78,PTR_s_rangeOfString_options__0269d118,&cf_<_type>,1);
  local_48 = 0;
  if (((uVar2 == 0x7fffffffffffffff) || (local_48 = 0, uVar3 == 0x7fffffffffffffff)) ||
     (local_48 = uVar3 - uVar2, uVar3 < uVar2 || local_48 == 0)) {
LAB_014fe29c:
    uVar2 = local_50;
    FUN_014ff8b4(local_48);
    local_48 = uVar2;
  }
  else {
    local_38 = puVar1 + uVar2;
    local_40 = (uVar3 - uVar2) - (long)puVar1;
    local_48 = local_40 - 0x40;
    local_30 = local_38;
    local_28 = local_40;
    if (0x3f < local_40 && local_48 != 0) goto LAB_014fe29c;
    uVar2 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_78,PTR_s_substringWithRange__0269d138,local_38,local_40);
    _objc_retainAutoreleasedReturnValue();
    local_48 = uVar2;
    FUN_014ff400();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if ((long)local_48 < 1) goto LAB_014fe29c;
  }
  local_54 = 1;
  _objc_storeStrong(&local_78,0);
LAB_014fe2c4:
  _objc_storeStrong(&local_50,0);
  return local_48;
}

