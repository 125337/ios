// FUN_0030fef4 @ 0030fef4

uint FUN_0030fef4(undefined8 param_1,long param_2)

{
  long lVar1;
  uint local_30;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_30 = 0;
  if ((local_18 != 0) && (local_30 = 0, param_2 != 0)) {
    lVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isKindOfClass__0269cd68,param_2);
    local_30 = (uint)lVar1;
  }
  _objc_storeStrong(&local_18,0);
  return local_30 & 1;
}

