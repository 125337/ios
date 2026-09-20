// FUN_0032b128 @ 0032b128

ulong FUN_0032b128(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong local_120;
  ulong local_a0;
  ulong local_98;
  undefined *puStack_90;
  undefined8 local_88;
  ulong local_80;
  ulong local_78;
  undefined4 local_70;
  ulong local_60;
  ulong local_58;
  undefined8 local_50;
  long *local_48;
  ulong local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulong local_28;
  
  local_60 = 0;
  _objc_storeStrong(&local_60,param_1);
  uVar2 = local_60;
  FUN_0032af00();
  if ((uVar2 & 1) == 0) {
    local_58 = 0xffffffffffffffff;
    local_70 = 1;
  }
  else {
    local_48 = &DAT_028c9dd8;
    local_50 = 0;
    _objc_storeStrong(&local_50,&PTR___NSConcreteGlobalBlock_0257c2a8);
    if (*local_48 + 1 != 0) {
      _dispatch_once(*local_48 + 1,local_48,local_50);
    }
    _objc_storeStrong(&local_50,0);
    uVar1 = local_60;
    uVar2 = DAT_028c9dd0;
    uVar3 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
    local_38 = 0;
    local_30 = 0;
    local_88 = 0;
    local_80 = uVar3;
    local_40 = uVar3;
    local_28 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_firstMatchInString_options_range_0269ef48,uVar1,0,0,uVar3);
    _objc_retainAutoreleasedReturnValue();
    local_78 = uVar2;
    if ((uVar2 == 0) ||
       ((*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_numberOfRanges_0269ef18), uVar2 < 2)) {
      local_58 = 0xffffffffffffffff;
      local_70 = 1;
    }
    else {
      uVar2 = local_78;
      puVar4 = PTR_s_rangeAtIndex__0269ef20;
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_rangeAtIndex__0269ef20,1);
      local_98 = uVar2;
      puStack_90 = puVar4;
      if ((uVar2 == 0x7fffffffffffffff) || (puVar4 == (undefined *)0x0)) {
        local_58 = 0xffffffffffffffff;
        local_70 = 1;
      }
      else {
        local_120 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,PTR_s_substringWithRange__0269d138,uVar2,puVar4);
        _objc_retainAutoreleasedReturnValue();
        local_a0 = local_120;
        (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_integerValue_026ca750);
        if ((long)local_120 < 0) {
          local_120 = 0xffffffffffffffff;
        }
        local_58 = local_120;
        local_70 = 1;
        _objc_storeStrong(&local_a0,0);
      }
    }
    _objc_storeStrong(&local_78,0);
  }
  _objc_storeStrong(&local_60,0);
  return local_58;
}

