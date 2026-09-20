// FUN_00078a1c @ 00078a1c

byte FUN_00078a1c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long local_48;
  long local_40 [3];
  undefined4 local_24;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    lVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_tag_026cab98);
    if ((lVar1 == 0x7f19a) ||
       (lVar1 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_tag_026cab98),
       lVar1 == 0x7f199)) {
      local_11 = 1;
      local_24 = 1;
    }
    else {
      lVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      local_48 = 0;
      local_40[0] = lVar1;
      while( true ) {
        lVar1 = local_48;
        if (local_40[0] != 0) {
          local_48 = local_48 + 1;
        }
        if (local_40[0] == 0 || 0xb < lVar1) {
          local_11 = 0;
          goto LAB_00078c74;
        }
        lVar1 = local_40[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_tag_026cab98);
        if ((lVar1 == 0x7f199) ||
           (lVar1 = local_40[0],
           (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_tag_026cab98), lVar1 == 0x7f19a))
        break;
        lVar2 = local_40[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_superview_026cab50);
        _objc_retainAutoreleasedReturnValue();
        lVar1 = local_40[0];
        local_40[0] = lVar2;
        (*(code *)PTR__objc_release_02578630)(lVar1);
      }
      local_11 = 1;
LAB_00078c74:
      local_24 = 1;
      _objc_storeStrong(local_40,0);
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

