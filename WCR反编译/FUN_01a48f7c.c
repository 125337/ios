// FUN_01a48f7c @ 01a48f7c

void FUN_01a48f7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long local_38;
  long local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  lVar1 = param_1 + 0x20;
  local_30 = param_1;
  local_28 = param_3;
  _objc_loadWeakRetained();
  local_38 = lVar1;
  if (lVar1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (lVar1,PTR_s_handleBottomBarOptionSelected_bu_026bca40,local_20,local_28);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_20,0);
  return;
}

