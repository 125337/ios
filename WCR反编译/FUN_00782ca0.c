// FUN_00782ca0 @ 00782ca0

void FUN_00782ca0(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  dispatch_time_t dVar5;
  uint local_f8;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  code *local_b8;
  undefined *local_b0;
  ulong local_a8;
  byte local_99;
  undefined *local_98;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  ulong local_70;
  undefined4 local_68;
  ulong local_58;
  undefined8 local_50;
  ulong local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_50 = param_2;
  local_48 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = param_1;
  FUN_0077b5c0();
  if ((param_1 & 1) == 0) {
    local_68 = 1;
  }
  else {
    uVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_onShowMsgReplyMenuItem__026a4380);
    puVar3 = PTR___dispatch_main_q_02578680;
    if ((uVar1 & 1) == 0) {
      local_99 = 0;
      uVar2 = local_58;
      FUN_0078b914(local_58,PTR_s_onShowMsgReplyMenuItem__026a4380);
      uVar1 = local_58;
      local_f8 = 1;
      if ((uVar2 & 1) == 0) {
        local_40 = &cf___u;
        local_38 = &cf_VY;
        local_30 = &cf_Reply;
        puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_40,3);
        _objc_retainAutoreleasedReturnValue();
        local_99 = 1;
        local_98 = puVar3;
        FUN_0078c210();
        local_f8 = (uint)uVar1;
      }
      if ((local_99 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_98);
      }
      if ((local_f8 & 1) == 0) {
        local_68 = 0;
      }
      else {
        puVar3 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar3);
        if (((ulong)puVar4 & 1) != 0) {
          dVar5 = _dispatch_time(0,50000000);
          puVar3 = PTR___dispatch_main_q_02578680;
          _objc_retainAutoreleaseReturnValue();
          _objc_retainAutoreleasedReturnValue();
          local_c8 = PTR___NSConcreteStackBlock_02578660;
          local_c0 = 0xc0000000;
          local_bc = 0;
          local_b8 = FUN_00790e64;
          local_b0 = &DAT_025797b0;
          local_a8 = local_48;
          _dispatch_after(dVar5,puVar3,&local_c8);
          (*(code *)PTR__objc_release_02578630)(puVar3);
        }
        local_68 = 1;
      }
    }
    else {
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      local_90 = PTR___NSConcreteStackBlock_02578660;
      local_88 = 0xc0000000;
      local_84 = 0;
      local_80 = FUN_00790d78;
      local_78 = &DAT_025797b0;
      local_70 = local_48;
      _dispatch_async();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      local_68 = 1;
    }
  }
  _objc_storeStrong(&local_58,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

