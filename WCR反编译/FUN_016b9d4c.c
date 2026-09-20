// FUN_016b9d4c @ 016b9d4c

void FUN_016b9d4c(undefined8 param_1)

{
  undefined1 uVar1;
  bool bVar2;
  long lVar3;
  long local_50;
  undefined4 local_48;
  undefined1 local_41;
  long local_40;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar3 = local_20;
  _objc_getAssociatedObject(local_20,&DAT_028e3ee9);
  _objc_retainAutoreleasedReturnValue();
  local_41 = 0;
  bVar2 = false;
  uVar1 = lVar3 != 0;
  local_28 = lVar3;
  if ((bool)uVar1) {
    (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = lVar3 != 0;
    local_41 = uVar1;
    local_40 = lVar3;
    (*(code *)PTR__objc_release_02578630)(lVar3);
    uVar1 = local_41;
  }
  local_41 = uVar1;
  lVar3 = local_28;
  if (bVar2) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = lVar3;
    local_48 = 1;
  }
  else {
    if (local_28 != 0) {
      _objc_setAssociatedObject(local_20,&DAT_028e3ee9,0,1);
    }
    lVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_valueForKey__0269d128,&cf_m_contentView);
    _objc_retainAutoreleasedReturnValue();
    local_50 = lVar3;
    if (lVar3 != 0) {
      _objc_setAssociatedObject(local_20,&DAT_028e3ee9,lVar3,1);
    }
    lVar3 = local_50;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = lVar3;
    local_48 = 1;
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

