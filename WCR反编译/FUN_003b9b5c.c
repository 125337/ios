// FUN_003b9b5c @ 003b9b5c

byte FUN_003b9b5c(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  byte local_38;
  long local_30;
  long local_28;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  lVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  bVar1 = false;
  local_38 = 0;
  if (lVar2 != 0) {
    lVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
    local_38 = 0;
    if (lVar2 != 0) {
      local_30 = local_28;
      FUN_003b4688(lVar2);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      lVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_38 = (byte)lVar2;
    }
  }
  local_11 = local_38 & 1;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

