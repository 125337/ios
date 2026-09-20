// FUN_0039b250 @ 0039b250

long FUN_0039b250(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = 0;
  }
  else {
    lVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_preservedOriginalRows_026a2ce0);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    lVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_entries_026a25d0);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    lVar5 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_trailingOriginalRows_026a2cd8);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar5);
    (*(code *)PTR__objc_release_02578630)(lVar3);
    (*(code *)PTR__objc_release_02578630)(lVar1);
    local_18 = lVar2 + lVar4 + lVar6;
  }
  _objc_storeStrong(&local_20,0);
  return local_18;
}

