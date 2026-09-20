// wcr_isAtAllSentinel: @ 009db308

/* Function Stack Size: 0x18 bytes */

bool WCRefineAnonymousAtHelper::wcr_isAtAllSentinel_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  uint local_2c;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,&cf_notify_all);
  local_2c = 1;
  if ((uVar1 & 1) == 0) {
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,&cf__all);
    local_2c = (uint)uVar1;
  }
  _objc_storeStrong(&local_28,0);
  return local_2c & 1;
}

