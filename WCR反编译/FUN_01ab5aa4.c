// FUN_01ab5aa4 @ 01ab5aa4

uint FUN_01ab5aa4(undefined8 param_1)

{
  ulong uVar1;
  uint local_1c;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isEqualToString__0269ccc8,&cf_bSvJ_Y);
  local_1c = 1;
  if ((uVar1 & 1) == 0) {
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isEqualToString__0269ccc8,&cf_bSv_J);
    local_1c = (uint)uVar1;
  }
  _objc_storeStrong(&local_18,0);
  return local_1c & 1;
}

