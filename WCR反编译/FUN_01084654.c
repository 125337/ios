// FUN_01084654 @ 01084654

long FUN_01084654(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long local_c0;
  long local_50;
  byte local_41;
  long local_40;
  long local_38;
  undefined4 local_2c;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  if ((local_20 == 0) ||
     (lVar2 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_count_0269cfe0),
     lVar2 == 0)) {
    local_18 = 0x7fffffffffffffff;
    local_2c = 1;
  }
  else {
    local_38 = 0;
    lVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_md5_026a3da0);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar2);
    lVar2 = local_28;
    if (lVar3 != 0) {
      lVar4 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_md5_026a3da0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_objectForKeyedSubscript__0269d098);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = local_38;
      local_38 = lVar2;
      (*(code *)PTR__objc_release_02578630)(lVar3);
      (*(code *)PTR__objc_release_02578630)(lVar4);
    }
    local_41 = 0;
    bVar1 = false;
    if (local_38 == 0) {
      lVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_relativePath_026ac370);
      _objc_retainAutoreleasedReturnValue();
      local_41 = 1;
      local_40 = lVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = lVar2 != 0;
    }
    if ((local_41 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_40);
    }
    lVar2 = local_28;
    if (bVar1) {
      lVar4 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_relativePath_026ac370);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_objectForKeyedSubscript__0269d098);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = local_38;
      local_38 = lVar2;
      (*(code *)PTR__objc_release_02578630)(lVar3);
      (*(code *)PTR__objc_release_02578630)(lVar4);
    }
    if (local_38 == 0) {
      lVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_relativePath_026ac370);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_50 = lVar4;
      (*(code *)PTR__objc_release_02578630)(lVar3);
      (*(code *)PTR__objc_release_02578630)(lVar2);
      lVar3 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
      lVar2 = local_28;
      if (lVar3 != 0) {
        lVar4 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_lowercaseString_0269d9c0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_objectForKeyedSubscript__0269d098);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = local_38;
        local_38 = lVar2;
        (*(code *)PTR__objc_release_02578630)(lVar3);
        (*(code *)PTR__objc_release_02578630)(lVar4);
        if (local_38 == 0) {
          lVar3 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_objectForKeyedSubscript__0269d098,local_50);
          _objc_retainAutoreleasedReturnValue();
          lVar2 = local_38;
          local_38 = lVar3;
          (*(code *)PTR__objc_release_02578630)(lVar2);
        }
      }
      _objc_storeStrong(&local_50,0);
    }
    if (local_38 == 0) {
      local_c0 = 0x7fffffffffffffff;
    }
    else {
      local_c0 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_integerValue_026ca750);
    }
    local_18 = local_c0;
    local_2c = 1;
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_18;
}

