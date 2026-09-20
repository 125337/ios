// FUN_00fe415c @ 00fe415c

byte FUN_00fe415c(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long local_38;
  uint local_2c;
  long local_28;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar2 = local_20;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = lVar2;
  while (local_28 != 0) {
    lVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_class_0269cd60);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    local_38 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (lVar2,PTR_s_rangeOfString_options__0269d118,&cf_ScrollActionSheet,1);
    bVar1 = lVar2 != 0x7fffffffffffffff;
    if (bVar1) {
      local_11 = 1;
    }
    local_2c = (uint)bVar1;
    _objc_storeStrong(bVar1,&local_38,0);
    if (local_2c != 0) goto LAB_00fe4290;
    lVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_28;
    local_28 = lVar3;
    (*(code *)PTR__objc_release_02578630)(lVar2);
  }
  local_2c = 2;
LAB_00fe4290:
  _objc_storeStrong(&local_28,0);
  iVar4 = local_2c - 2;
  if (iVar4 == 0) {
    iVar4 = 1;
    local_11 = 0;
    local_2c = 1;
  }
  _objc_storeStrong(iVar4,&local_20,0);
  return local_11 & 1;
}

