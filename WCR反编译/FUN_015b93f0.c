// FUN_015b93f0 @ 015b93f0

long FUN_015b93f0(undefined8 param_1,undefined8 param_2,byte param_3)

{
  long lVar1;
  long lVar2;
  long local_68;
  long local_40;
  byte local_23;
  byte local_22;
  byte local_21;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_22 = 0;
  local_23 = 0;
  lVar1 = local_18;
  local_21 = param_3;
  FUN_015c0040(local_18,&local_22);
  lVar2 = local_20;
  FUN_015c0040(local_20,&local_23);
  local_40 = local_18;
  if (((local_22 & 1) == 0) || ((local_23 & 1) == 0)) {
    if (((local_22 & 1) == 0) || ((local_23 & 1) != 0)) {
      if (((local_22 & 1) == 0) && ((local_23 & 1) != 0)) {
        local_40 = 1;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_localizedStandardCompare__0269e098,local_20);
      }
    }
    else {
      local_40 = -1;
    }
  }
  else if (lVar1 < lVar2) {
    local_40 = -1;
  }
  else if (lVar2 < lVar1) {
    local_40 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_localizedStandardCompare__0269e098,local_20);
  }
  if ((local_21 & 1) == 0) {
    local_68 = -local_40;
  }
  else {
    local_68 = local_40;
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return local_68;
}

