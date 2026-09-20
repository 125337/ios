// FUN_0039d550 @ 0039d550

byte FUN_0039d550(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long local_28;
  long local_20;
  bool local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  if ((local_20 != 0) && (local_28 != 0)) {
    lVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_section_0269e988);
    lVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_targetSection_026a2d68);
    if (lVar1 == lVar2) {
      lVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_row_0269e210);
      local_11 = true;
      if (-1 < lVar1) {
        lVar1 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_row_0269e210);
        lVar2 = local_28;
        FUN_0039b250();
        local_11 = lVar2 <= lVar1;
      }
      goto LAB_0039d684;
    }
  }
  local_11 = false;
LAB_0039d684:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

