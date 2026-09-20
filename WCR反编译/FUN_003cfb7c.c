// FUN_003cfb7c @ 003cfb7c

/* WARNING: Type propagation algorithm not settling */

byte FUN_003cfb7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long local_e0;
  long local_80;
  long local_70;
  long local_68;
  undefined4 local_5c;
  long local_58 [6];
  byte local_21;
  
  local_58[5] = 0;
  _objc_storeStrong(local_58 + 5,param_1);
  local_58[4] = 0;
  _objc_storeStrong(local_58 + 4,param_2);
  local_58[3] = 0;
  _objc_storeStrong(local_58 + 3,param_3);
  local_58[2] = 0;
  _objc_storeStrong(local_58 + 2,param_4);
  local_58[1] = 0;
  _objc_storeStrong(local_58 + 1,param_5);
  lVar1 = local_58[5];
  (*(code *)PTR__objc_msgSend_02578628)
            (local_58[5],PTR_s_wcrGrouping_currentItemMatchingI_026a27f0,local_58[4]);
  _objc_retainAutoreleasedReturnValue();
  local_58[0] = lVar1;
  if (((local_58[5] == 0) || (lVar1 == 0)) ||
     (uVar2 = local_58[3], (*(code *)PTR__objc_msgSend_02578628)(local_58[3],PTR_s_length_0269cca0),
     uVar2 == 0)) {
    local_21 = 0;
    local_5c = 1;
  }
  else {
    lVar1 = local_58[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_username_026a2238);
    _objc_retainAutoreleasedReturnValue();
    local_e0 = lVar1;
    if (lVar1 == 0) {
      local_70 = local_58[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_session_0269d000);
      _objc_retainAutoreleasedReturnValue();
      local_80 = local_70;
      FUN_00366324();
      _objc_retainAutoreleasedReturnValue();
      local_e0 = local_80;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = local_e0;
    if (lVar1 == 0) {
      (*(code *)PTR__objc_release_02578630)(local_80);
      (*(code *)PTR__objc_release_02578630)(local_70);
    }
    (*(code *)PTR__objc_release_02578630)(lVar1);
    lVar1 = local_68;
    lVar3 = local_58[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_session_0269d000);
    _objc_retainAutoreleasedReturnValue();
    FUN_003668c8();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_setSession__0269d2e0);
    (*(code *)PTR__objc_release_02578630)(lVar1);
    (*(code *)PTR__objc_release_02578630)(lVar3);
    uVar2 = local_58[3];
    FUN_003cf9fc();
    if ((uVar2 & 1) == 0) {
      uVar2 = local_58[3];
      FUN_003d0fc4();
      if ((uVar2 & 1) == 0) {
        uVar2 = local_58[3];
        (*(code *)PTR__objc_msgSend_02578628)(local_58[3],PTR_s_rangeOfString__0269d838,&cf__g);
        if ((uVar2 == 0x7fffffffffffffff) &&
           (uVar2 = local_58[3],
           (*(code *)PTR__objc_msgSend_02578628)(local_58[3],PTR_s_rangeOfString__0269d838,&cf__),
           uVar2 == 0x7fffffffffffffff)) {
          local_21 = 0;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58[5],PTR_s_wcrGrouping_toggleReadForItem__026a30a8,local_58[0]);
          local_21 = 1;
        }
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58[5],PTR_s_wcrGrouping_hideItem__026a30a0,local_58[0]);
        local_21 = 1;
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58[5],PTR_s_wcrGrouping_confirmDeleteItem_co_026a3098,local_58[0],0);
      local_21 = 1;
    }
    local_5c = 1;
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(local_58);
  _objc_storeStrong(local_58 + 1,0);
  _objc_storeStrong(local_58 + 2,0);
  _objc_storeStrong(local_58 + 3,0);
  _objc_storeStrong(local_58 + 4,0);
  _objc_storeStrong(local_58 + 5,0);
  return local_21 & 1;
}

