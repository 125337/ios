// FUN_0039d120 @ 0039d120

byte FUN_0039d120(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long local_28;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  if (local_28 != 0) {
    lVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_section_0269e988);
    lVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_targetSection_026a2d68);
    if (lVar1 == lVar2) {
      lVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_preservedOriginalRows_026a2ce0);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(lVar1);
      lVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_row_0269e210);
      local_11 = 0;
      if (lVar2 <= lVar1) {
        lVar1 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_row_0269e210);
        lVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_entries_026a25d0);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_11 = lVar1 < lVar2 + lVar4;
        (*(code *)PTR__objc_release_02578630)(lVar3);
      }
      goto LAB_0039d32c;
    }
  }
  local_11 = 0;
LAB_0039d32c:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

