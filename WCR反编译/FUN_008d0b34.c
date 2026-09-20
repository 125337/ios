// FUN_008d0b34 @ 008d0b34

void FUN_008d0b34(undefined8 param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong local_30;
  uint local_28;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if ((local_18 == 0) || (uVar2 = local_18, FUN_008d0cf4(), (uVar2 & 1) != 0)) {
    local_28 = 1;
  }
  else {
    uVar3 = local_18;
    FUN_008ce8a8();
    _objc_retainAutoreleasedReturnValue();
    local_30 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_length_0269cca0);
    uVar2 = local_18;
    uVar1 = DAT_026f4ab8;
    if (uVar3 != 0) {
      puVar4 = PTR__OBJC_CLASS___NSDate_026cdf88;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(uVar2,uVar1,puVar4,1);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      FUN_008cb7ec(local_30);
    }
    local_28 = (uint)(uVar3 == 0);
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

