// FUN_00216878 @ 00216878

undefined8 FUN_00216878(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined8 local_70;
  ulong local_50;
  ulong local_38;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_2);
  bVar1 = local_18 == 0;
  if (bVar1) {
    local_50 = 0;
  }
  else {
    local_50 = local_18;
    _objc_getAssociatedObject(local_18,&DAT_028c919c);
    _objc_retainAutoreleasedReturnValue();
    local_38 = local_50;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_20 = local_50;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  uVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_doubleValue_026ca608);
  if ((uVar2 & 1) == 0) {
    local_70 = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_doubleValue_026ca608);
    local_70 = param_1;
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return local_70;
}

