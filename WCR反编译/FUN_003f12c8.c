// FUN_003f12c8 @ 003f12c8

bool FUN_003f12c8(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  bVar1 = false;
  if (local_18 != 0) {
    lVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_state_026cab20);
    bVar1 = true;
    if (lVar2 != 1) {
      lVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_state_026cab20);
      bVar1 = lVar2 == 2;
    }
  }
  _objc_storeStrong(&local_18,0);
  return bVar1;
}

