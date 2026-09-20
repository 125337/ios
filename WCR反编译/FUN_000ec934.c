// FUN_000ec934 @ 000ec934

void FUN_000ec934(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong local_160;
  undefined *local_138;
  undefined4 local_130;
  undefined4 local_12c;
  code *local_128;
  undefined *local_120;
  ulong local_118;
  ulong local_110;
  undefined1 local_108;
  undefined1 local_101;
  ulong local_100;
  undefined *local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  code *local_e8;
  undefined *local_e0;
  ulong local_d8;
  ulong local_d0;
  ulong local_c8;
  byte local_c0;
  byte local_b9;
  ulong local_b8;
  ulong local_b0;
  ulong local_a8;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  undefined *local_88;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  undefined4 local_54;
  ulong local_50;
  ulong local_48 [3];
  ulong local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  uVar3 = local_28;
  _objc_getAssociatedObject(local_28,&DAT_028c83a6);
  _objc_retainAutoreleasedReturnValue();
  local_160 = local_28;
  local_30 = uVar3;
  _objc_getAssociatedObject(local_28,&DAT_028c83a7);
  _objc_retainAutoreleasedReturnValue();
  local_48[0] = local_160;
  if (local_160 == 0) {
    local_160 = 0x7fffffffffffffff;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_integerValue_026ca750);
  }
  local_50 = local_160;
  if (((local_160 == 0x7fffffffffffffff) || ((long)local_160 < 0)) ||
     (uVar3 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0),
     (long)uVar3 <= (long)local_160)) {
    FUN_000eb8bc(local_28,1);
    local_54 = 1;
  }
  else {
    uVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectAtIndexedSubscript__0269cc78,local_50);
    _objc_retainAutoreleasedReturnValue();
    local_60 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_objectForKeyedSubscript__0269d098,&cf_kind);
    _objc_retainAutoreleasedReturnValue();
    local_68 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isEqualToString__0269ccc8,&cf_groupPicker);
    if ((uVar3 & 1) == 0) {
      uVar3 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_isEqualToString__0269ccc8,&cf_group);
      if ((uVar3 & 1) == 0) {
        uVar3 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,PTR_s_objectForKeyedSubscript__0269d098,&cf_action);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar3);
        uVar3 = local_28;
        local_108 = uVar5 == 2;
        bVar1 = !(bool)local_108;
        local_138 = PTR___NSConcreteStackBlock_02578660;
        local_130 = 0xc2000000;
        local_12c = 0;
        local_128 = FUN_000f2f5c;
        local_120 = &DAT_0257a120;
        local_101 = local_108;
        local_100 = uVar5;
        (*(code *)PTR__objc_retain_02578638)();
        local_118 = uVar3;
        local_110 = local_100;
        FUN_000eb948(uVar3,bVar1,&local_138);
        _objc_storeStrong(&local_118,0);
        local_54 = 0;
      }
      else {
        uVar3 = local_28;
        FUN_000f2598();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = local_60;
        local_a8 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,PTR_s_objectForKeyedSubscript__0269d098,&cf_groupId);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = local_60;
        local_b0 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,PTR_s_objectForKeyedSubscript__0269d098,&cf_groupName);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = local_60;
        local_b8 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,PTR_s_objectForKeyedSubscript__0269d098,&cf_alreadyAdded);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar5);
        uVar2 = local_28;
        uVar3 = local_a8;
        local_b9 = (byte)uVar4;
        local_f8 = PTR___NSConcreteStackBlock_02578660;
        local_f0 = 0xc2000000;
        local_ec = 0;
        local_e8 = FUN_000f2ba4;
        local_e0 = &DAT_0257a0f0;
        local_c0 = local_b9 & 1;
        (*(code *)PTR__objc_retain_02578638)();
        uVar5 = local_b0;
        local_d8 = uVar3;
        (*(code *)PTR__objc_retain_02578638)();
        uVar3 = local_b8;
        local_d0 = uVar5;
        (*(code *)PTR__objc_retain_02578638)();
        local_c8 = uVar3;
        FUN_000eb948(uVar2,1,&local_f8);
        local_54 = 1;
        _objc_storeStrong(&local_c8);
        _objc_storeStrong(&local_d0,0);
        _objc_storeStrong(&local_d8,0);
        _objc_storeStrong(&local_b8,0);
        _objc_storeStrong(&local_b0,0);
        _objc_storeStrong(&local_a8,0);
      }
    }
    else {
      uVar3 = local_28;
      _objc_getAssociatedObject(local_28,&DAT_028c839d);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = local_28;
      local_a0 = PTR___NSConcreteStackBlock_02578660;
      local_98 = 0xc2000000;
      local_94 = 0;
      local_90 = FUN_000f2330;
      local_88 = &DAT_02578e60;
      local_70 = uVar3;
      (*(code *)PTR__objc_retain_02578638)();
      uVar3 = local_70;
      local_80 = uVar5;
      (*(code *)PTR__objc_retain_02578638)();
      local_78 = uVar3;
      FUN_000eb948(uVar5,1,&local_a0);
      local_54 = 1;
      _objc_storeStrong(&local_78);
      _objc_storeStrong(&local_80,0);
      _objc_storeStrong(&local_70,0);
    }
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(local_48);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

