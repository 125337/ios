// FUN_00396ad8 @ 00396ad8

byte FUN_00396ad8(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  byte local_44;
  byte local_34;
  ulong local_30;
  undefined4 local_24;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if ((local_20 == 0) ||
     (uVar1 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_scope_0269ea90),
     uVar1 != 2)) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_kind_026a27e8);
    if (uVar1 == 3) {
      local_11 = 1;
      local_24 = 1;
    }
    else {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_name_0269d828);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      FUN_003aa040();
      _objc_retainAutoreleasedReturnValue();
      local_30 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_kind_026a27e8);
      local_34 = 0;
      if (uVar1 == 0) {
        uVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,&cf_bSv_J);
        local_44 = 1;
        if ((uVar1 & 1) == 0) {
          uVar1 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,&cf_bSvJ_Y)
          ;
          local_44 = (byte)uVar1;
        }
        local_34 = local_44;
      }
      local_11 = local_34 & 1;
      local_24 = 1;
      _objc_storeStrong(&local_30,0);
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

