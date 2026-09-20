// FUN_006a3b78 @ 006a3b78

void FUN_006a3b78(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong local_b8;
  ulong local_30;
  undefined4 local_24;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  if (local_20 == 0) {
    local_18 = 0;
    local_24 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = uVar2;
    bVar1 = false;
    uVar2 = DAT_028cbdc8;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028cbdc8,PTR_s_length_0269cca0);
    if ((uVar2 == 0) ||
       (uVar3 = local_20,
       (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isEqualToString__0269ccc8,&cf__O__NecN),
       uVar2 = DAT_028cbdc8, (uVar3 & 1) == 0)) {
      lVar4 = DAT_028cbdd8;
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028cbdd8,PTR_s_length_0269cca0);
      if ((lVar4 != 0) &&
         (uVar2 = local_30,
         (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_containsString__0269d0b0,&cf___),
         (uVar2 & 1) != 0)) {
        uVar3 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf___,DAT_028cbdd8);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_30;
        local_30 = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar2);
        bVar1 = true;
      }
      lVar4 = DAT_028cbde0;
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028cbde0,PTR_s_length_0269cca0);
      if (lVar4 != 0) {
        uVar2 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_containsString__0269d0b0,&cf__N_O_ucN_v);
        if ((uVar2 & 1) == 0) {
          uVar2 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,PTR_s_containsString__0269d0b0,&cf__N_O_ucN_v);
          if ((uVar2 & 1) != 0) {
            uVar3 = local_30;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_30,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__N_O_ucN_v,
                       DAT_028cbde0);
            _objc_retainAutoreleasedReturnValue();
            uVar2 = local_30;
            local_30 = uVar3;
            (*(code *)PTR__objc_release_02578630)(uVar2);
            bVar1 = true;
          }
        }
        else {
          uVar3 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__N_O_ucN_v,
                     DAT_028cbde0);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = local_30;
          local_30 = uVar3;
          (*(code *)PTR__objc_release_02578630)(uVar2);
          bVar1 = true;
        }
      }
      if (bVar1) {
        local_b8 = local_30;
      }
      else {
        local_b8 = 0;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = local_b8;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar2;
    }
    local_24 = 1;
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

