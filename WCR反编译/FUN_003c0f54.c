// FUN_003c0f54 @ 003c0f54

void FUN_003c0f54(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  if ((local_18 != 0) && (local_20 != 0)) {
    lVar1 = local_18;
    FUN_003c1064(local_18,local_20);
    lVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_count_0269cfe0);
    if (lVar1 < lVar2) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_insertObject_atIndex__0269eac0,local_20,lVar1);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_addObject__0269d180,local_20);
    }
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

