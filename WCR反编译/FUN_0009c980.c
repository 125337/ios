// FUN_0009c980 @ 0009c980

byte FUN_0009c980(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long local_28;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  do {
    if (local_20 == 0 || 0xb < local_28) {
      local_11 = 0;
LAB_0009caf0:
      _objc_storeStrong(&local_20,0);
      return local_11 & 1;
    }
    lVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_tag_026cab98);
    if ((lVar1 == 0x7f199) ||
       (lVar1 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_tag_026cab98),
       lVar1 == 0x7f19a)) {
      local_11 = 1;
      goto LAB_0009caf0;
    }
    local_28 = local_28 + 1;
    lVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_20;
    local_20 = lVar2;
    (*(code *)PTR__objc_release_02578630)(lVar1);
  } while( true );
}

