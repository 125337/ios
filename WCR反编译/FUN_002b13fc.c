// FUN_002b13fc @ 002b13fc

byte FUN_002b13fc(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = 0xd;
  FUN_002b0a2c();
  if ((uVar1 & 1) == 0) {
    local_11 = 0;
  }
  else {
    lVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_traitCollection_026caba8);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_11 = lVar3 == 2;
    (*(code *)PTR__objc_release_02578630)(lVar2);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

