// FUN_006a3624 @ 006a3624

byte FUN_006a3624(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  ulong local_20;
  bool local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_11 = false;
  }
  else {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isEqualToString__0269ccc8,&cf__O__NecN);
    if ((uVar1 & 1) == 0) {
      lVar2 = DAT_028cbdd8;
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028cbdd8,PTR_s_length_0269cca0);
      if ((lVar2 == 0) ||
         (uVar1 = local_20,
         (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_containsString__0269d0b0,&cf___),
         (uVar1 & 1) == 0)) {
        lVar2 = DAT_028cbde0;
        (*(code *)PTR__objc_msgSend_02578628)(DAT_028cbde0,PTR_s_length_0269cca0);
        if ((lVar2 == 0) ||
           ((uVar1 = local_20,
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_20,PTR_s_containsString__0269d0b0,&cf__N_O_ucN_v), (uVar1 & 1) == 0 &&
            (uVar1 = local_20,
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_20,PTR_s_containsString__0269d0b0,&cf__N_O_ucN_v), (uVar1 & 1) == 0))))
        {
          local_11 = false;
        }
        else {
          local_11 = true;
        }
      }
      else {
        local_11 = true;
      }
    }
    else {
      lVar2 = DAT_028cbdc8;
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028cbdc8,PTR_s_length_0269cca0);
      local_11 = lVar2 != 0;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

