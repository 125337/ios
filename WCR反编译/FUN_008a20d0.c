// FUN_008a20d0 @ 008a20d0

byte FUN_008a20d0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long local_40;
  undefined4 local_34;
  long local_30;
  byte local_21;
  undefined8 local_20;
  long *local_18;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  if (local_30 == 0) {
    local_21 = 0;
    local_34 = 1;
  }
  else {
    lVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_scheme_026a1dd8);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_40 = lVar2;
    (*(code *)PTR__objc_release_02578630)(lVar1);
    lVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    if (lVar1 == 0) {
      local_21 = 0;
    }
    else {
      local_18 = &DAT_028cddb8;
      local_20 = 0;
      _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_02580c40);
      if (*local_18 + 1 != 0) {
        _dispatch_once(*local_18 + 1,local_18,local_20);
      }
      _objc_storeStrong(&local_20,0);
      uVar3 = DAT_028cddb0;
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028cddb0,PTR_s_containsObject__0269cbb8,local_40);
      local_21 = (byte)uVar3 & 1;
    }
    local_34 = 1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

