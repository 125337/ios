// FUN_00318874 @ 00318874

byte FUN_00318874(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long local_68;
  long local_58;
  long local_48;
  long local_28;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  lVar4 = local_28;
  if ((local_20 == 0) || (local_28 == 0)) {
    local_11 = 1;
  }
  else {
    bVar3 = false;
    bVar2 = false;
    bVar1 = false;
    lVar6 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = local_28;
    local_11 = true;
    if (lVar4 != lVar6) {
      local_48 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_selectedBackgroundView_0269e620);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = local_28;
      bVar3 = true;
      local_11 = true;
      if (lVar5 != local_48) {
        local_58 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_backgroundView_026a0320);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = local_28;
        bVar2 = true;
        local_11 = true;
        if (lVar4 != local_58) {
          local_68 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_20,PTR_s_multipleSelectionBackgroundView_026a2010);
          _objc_retainAutoreleasedReturnValue();
          bVar1 = true;
          local_11 = lVar5 == local_68;
        }
      }
    }
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    if (bVar2) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    if (bVar3) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    (*(code *)PTR__objc_release_02578630)(lVar6);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

