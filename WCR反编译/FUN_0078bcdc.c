// FUN_0078bcdc @ 0078bcdc

byte FUN_0078bcdc(undefined8 param_1,byte param_2)

{
  undefined **ppuVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *local_120;
  undefined4 local_118;
  undefined4 local_114;
  code *local_110;
  undefined *local_108;
  undefined **local_100;
  undefined *local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  code *local_e8;
  undefined *local_e0;
  undefined **local_d8;
  undefined *local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  code *local_c0;
  undefined *local_b8;
  ulong local_b0;
  undefined **local_a8 [3];
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  ulong local_70;
  byte local_68;
  undefined **local_60;
  undefined4 local_58;
  byte local_51;
  ulong local_50;
  byte local_41;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_50 = 0;
  _objc_storeStrong(&local_50,param_1);
  uVar2 = local_50;
  local_51 = param_2;
  if (local_50 == 0) {
    local_41 = 0;
    local_58 = 1;
  }
  else {
    ppuVar1 = &local_90;
    local_90 = PTR___NSConcreteStackBlock_02578660;
    local_88 = 0xc2000000;
    local_84 = 0;
    local_80 = FUN_0078e498;
    local_78 = &DAT_0257b488;
    local_68 = param_2 & 1;
    (*(code *)PTR__objc_retain_02578638)();
    local_70 = uVar2;
    _objc_retainBlock();
    uVar2 = local_50;
    local_60 = ppuVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_onShowMsgReplyMenuItem__026a4380);
    puVar4 = PTR___dispatch_main_q_02578680;
    if ((uVar2 & 1) == 0) {
      uVar3 = local_50;
      FUN_0078b914(local_50,PTR_s_onShowMsgReplyMenuItem__026a4380);
      uVar2 = local_50;
      puVar4 = PTR___dispatch_main_q_02578680;
      if ((uVar3 & 1) == 0) {
        local_40 = &cf___u;
        local_38 = &cf_VY;
        local_30 = &cf_Reply;
        puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_40,3);
        _objc_retainAutoreleasedReturnValue();
        FUN_0078c210();
        (*(code *)PTR__objc_release_02578630)(puVar4);
        puVar4 = PTR___dispatch_main_q_02578680;
        if ((uVar2 & 1) == 0) {
          local_41 = 0;
          local_58 = 1;
        }
        else {
          _objc_retainAutoreleaseReturnValue();
          _objc_retainAutoreleasedReturnValue();
          ppuVar1 = local_60;
          local_120 = PTR___NSConcreteStackBlock_02578660;
          local_118 = 0xc2000000;
          local_114 = 0;
          local_110 = FUN_0078e64c;
          local_108 = &DAT_02579910;
          (*(code *)PTR__objc_retain_02578638)();
          local_100 = ppuVar1;
          _dispatch_async(puVar4,&local_120);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          local_41 = 1;
          local_58 = 1;
          _objc_storeStrong(&local_100,0);
        }
      }
      else {
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        ppuVar1 = local_60;
        local_f8 = PTR___NSConcreteStackBlock_02578660;
        local_f0 = 0xc2000000;
        local_ec = 0;
        local_e8 = FUN_0078e618;
        local_e0 = &DAT_02579910;
        (*(code *)PTR__objc_retain_02578638)();
        local_d8 = ppuVar1;
        _dispatch_async(puVar4,&local_f8);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        local_41 = 1;
        local_58 = 1;
        _objc_storeStrong(&local_d8,0);
      }
    }
    else {
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_50;
      local_d0 = PTR___NSConcreteStackBlock_02578660;
      local_c8 = 0xc2000000;
      local_c4 = 0;
      local_c0 = FUN_0078e5c8;
      local_b8 = &DAT_02579e20;
      (*(code *)PTR__objc_retain_02578638)();
      ppuVar1 = local_60;
      local_b0 = uVar2;
      (*(code *)PTR__objc_retain_02578638)();
      local_a8[0] = ppuVar1;
      _dispatch_async(puVar4,&local_d0);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      local_41 = 1;
      local_58 = 1;
      _objc_storeStrong(local_a8);
      _objc_storeStrong(&local_b0,0);
    }
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_70,0);
  }
  _objc_storeStrong(&local_50,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_41 & 1;
}

