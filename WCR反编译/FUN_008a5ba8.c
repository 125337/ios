// FUN_008a5ba8 @ 008a5ba8

byte FUN_008a5ba8(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long local_38;
  long local_30;
  byte local_21;
  undefined8 local_20;
  long *local_18;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_18 = &DAT_028cddc8;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_02580c60);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  lVar1 = local_30;
  FUN_008a5fb4();
  _objc_retainAutoreleasedReturnValue();
  local_38 = lVar1;
  if ((lVar1 == 0) ||
     (uVar2 = DAT_028cddc0,
     (*(code *)PTR__objc_msgSend_02578628)(DAT_028cddc0,PTR_s_containsObject__0269cbb8,lVar1),
     (uVar2 & 1) != 0)) {
    local_21 = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028cddc0,PTR_s_addObject__0269d180,local_38);
    local_21 = 1;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

