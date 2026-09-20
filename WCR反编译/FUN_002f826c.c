// FUN_002f826c @ 002f826c

byte FUN_002f826c(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long local_30;
  byte local_21;
  undefined8 local_20;
  long *local_18;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  lVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_21 = 0;
  }
  else {
    local_18 = &DAT_028c9ab0;
    local_20 = 0;
    _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0257bd98);
    if (*local_18 + 1 != 0) {
      _dispatch_once(*local_18 + 1,local_18,local_20);
    }
    _objc_storeStrong(&local_20,0);
    uVar2 = DAT_028c9aa8;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028c9aa8,PTR_s_containsObject__0269cbb8,local_30);
    local_21 = (byte)uVar2 & 1;
  }
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

