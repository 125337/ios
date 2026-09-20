// FUN_003d10c4 @ 003d10c4

byte FUN_003d10c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong local_f0;
  ulong local_a8;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  undefined *local_80;
  ulong local_78;
  undefined *local_70;
  undefined4 local_64;
  ulong local_60;
  ulong local_58;
  undefined8 local_50;
  long local_48;
  byte local_39;
  ulong local_38;
  ulong local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_48 = 0;
  _objc_storeStrong(&local_48,param_1);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_2);
  local_58 = 0;
  _objc_storeStrong(&local_58,param_3);
  local_60 = 0;
  _objc_storeStrong(&local_60,param_4);
  if (((local_48 == 0) || (local_58 == 0)) ||
     (uVar2 = local_60, (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0),
     uVar2 == 0)) {
    local_39 = 0;
    local_64 = 1;
  }
  else {
    FUN_003d1618(local_48,local_50);
    uVar2 = local_60;
    FUN_003cf9fc();
    if ((uVar2 & 1) == 0) {
      uVar2 = local_60;
      FUN_003d0fc4();
      lVar1 = local_48;
      if ((uVar2 & 1) == 0) {
        uVar2 = local_60;
        puVar4 = PTR_s_rangeOfString__0269d838;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_rangeOfString__0269d838,&cf__g);
        local_78 = uVar2;
        local_70 = puVar4;
        if ((uVar2 == 0x7fffffffffffffff) &&
           (uVar2 = local_60, puVar4 = PTR_s_rangeOfString__0269d838,
           (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_rangeOfString__0269d838,&cf__),
           local_88 = uVar2, local_80 = puVar4, uVar2 == 0x7fffffffffffffff)) {
          local_39 = 0;
          local_64 = 1;
        }
        else {
          uVar2 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_username_026a2238);
          _objc_retainAutoreleasedReturnValue();
          local_f0 = uVar2;
          if (uVar2 == 0) {
            local_98 = local_58;
            (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_session_0269d000);
            _objc_retainAutoreleasedReturnValue();
            local_a8 = local_98;
            FUN_00366324();
            _objc_retainAutoreleasedReturnValue();
            local_f0 = local_a8;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_90 = local_f0;
          if (uVar2 == 0) {
            (*(code *)PTR__objc_release_02578630)(local_a8);
            (*(code *)PTR__objc_release_02578630)(local_98);
          }
          (*(code *)PTR__objc_release_02578630)(uVar2);
          uVar2 = local_90;
          uVar3 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_session_0269d000);
          _objc_retainAutoreleasedReturnValue();
          FUN_003668c8();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setSession__0269d2e0);
          (*(code *)PTR__objc_release_02578630)(uVar2);
          (*(code *)PTR__objc_release_02578630)(uVar3);
          uVar2 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_session_0269d000);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          FUN_00366ae4();
          (*(code *)PTR__objc_release_02578630)(uVar2);
          lVar1 = local_48;
          if ((uVar3 & 1) == 0) {
            FUN_00368e44(local_48,local_58);
            FUN_00368c14(local_48,&cf_markInlineUnread);
          }
          else {
            local_38 = local_58;
            puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                       &local_38,1);
            _objc_retainAutoreleasedReturnValue();
            FUN_0036820c(lVar1);
            (*(code *)PTR__objc_release_02578630)(puVar4);
            FUN_00368c14(local_48,&cf_markInlineRead);
          }
          local_39 = 1;
          local_64 = 1;
          _objc_storeStrong(&local_90,0);
        }
      }
      else {
        local_30 = local_58;
        puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_30,1);
        _objc_retainAutoreleasedReturnValue();
        FUN_00369a04(lVar1);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        FUN_00368c14(local_48,&cf_hideInlineSession);
        local_39 = 1;
        local_64 = 1;
      }
    }
    else {
      FUN_003d17b8(local_48,local_58);
      local_39 = 1;
      local_64 = 1;
    }
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_39 & 1;
}

