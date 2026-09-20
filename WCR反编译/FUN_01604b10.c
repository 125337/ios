// FUN_01604b10 @ 01604b10

void FUN_01604b10(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_30;
  ulong local_20;
  ulong local_18;
  
  FUN_016036c4();
  _objc_retainAutoreleasedReturnValue();
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_viewControllers_0269e348);
  _objc_retainAutoreleasedReturnValue();
  local_30 = param_1;
  if (param_1 == 0) {
    local_30 = *(ulong *)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_20 = local_30;
  (*(code *)PTR__objc_release_02578630)(param_1);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_count_0269cfe0);
  uVar2 = local_20;
  if (uVar1 < 2) {
    FUN_01603fbc(uVar1 - 2);
  }
  else {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_objectAtIndexedSubscript__0269cc78,uVar1 - 2);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeWeak(&DAT_028e3bc0);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    _objc_storeWeak(&DAT_028e3bc8,local_18);
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_lastObject_0269d200);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeWeak(&DAT_028e3bd0);
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

