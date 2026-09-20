// FUN_00fc7a94 @ 00fc7a94

void FUN_00fc7a94(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  long local_28;
  uint local_1c;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  bVar1 = local_18 != 0;
  if (bVar1) {
    lVar2 = local_18;
    _objc_getAssociatedObject(local_18,&DAT_028e2fe4);
    _objc_retainAutoreleasedReturnValue();
    local_28 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_prepareDismiss_026ad0a0);
    _objc_storeStrong(&local_28,0);
  }
  local_1c = (uint)!bVar1;
  _objc_storeStrong(&local_18,0);
  return;
}

