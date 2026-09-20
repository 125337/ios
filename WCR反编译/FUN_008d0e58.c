// FUN_008d0e58 @ 008d0e58

double FUN_008d0e58(double param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  undefined *puVar5;
  double local_b8;
  ulong local_80;
  ulong local_48;
  ulong local_30;
  double local_28;
  ulong local_20;
  double local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  bVar1 = false;
  uVar4 = local_20;
  local_28 = param_1;
  FUN_008d10ec();
  uVar3 = (uint)uVar4;
  if (((uVar4 & 1) == 0) && (FUN_008d11c4(), (uVar3 & 1) != 0)) {
    local_80 = local_20;
    _objc_getAssociatedObject(local_20,DAT_026f4ac0);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = true;
    local_48 = local_80;
  }
  else {
    local_80 = 0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_80;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  uVar4 = local_20;
  uVar2 = DAT_026f4ac8;
  if (local_30 == 0) {
    local_18 = local_28;
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_b8 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(uVar4,uVar2,puVar5,1);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_doubleValue_026ca608);
    if (local_b8 - 0.5 <= local_28) {
      local_b8 = local_28;
    }
    local_18 = local_b8;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_20,0);
  return local_18;
}

