// FUN_0018d2ec @ 0018d2ec

byte FUN_0018d2ec(long param_1)

{
  long lVar1;
  long local_28;
  long local_20;
  byte local_11;
  
  local_28 = 0;
  local_20 = param_1;
  _objc_storeStrong(&local_28);
  if (local_28 == 0) {
    local_11 = 0;
  }
  else if (local_20 == 2) {
    lVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hideContactsOfficialAccountsEnab_0269fc78);
    local_11 = (byte)lVar1 & 1;
  }
  else if (local_20 == 3) {
    lVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hideContactsServiceAccountsEnabl_0269fc80);
    local_11 = (byte)lVar1 & 1;
  }
  else if (local_20 == 5) {
    lVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hideContactsWeComContactsEnabled_0269fc88);
    local_11 = (byte)lVar1 & 1;
  }
  else {
    local_11 = 0;
  }
  _objc_storeStrong(&local_28,0);
  return local_11 & 1;
}

