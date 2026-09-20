// unsignedIntValueFromObject:key:fallback: @ 00f4a228

/* Function Stack Size: 0x24 bytes */

unsigned_int
WCRefineEmoticonToolsHelper::unsignedIntValueFromObject_key_fallback_
          (ID param_1,SEL param_2,ID param_3,ID param_4,unsigned_int param_5)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  ulong local_48;
  uint local_40;
  unsigned_int local_3c;
  long local_38;
  ulong local_30;
  SEL local_28;
  ID local_20;
  unsigned_int local_14;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  local_3c = param_5;
  if ((local_30 == 0) ||
     (lVar2 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
     lVar2 == 0)) {
    local_14 = local_3c;
    local_40 = 1;
  }
  else {
    uVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_valueForKey__0269d128,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_48 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,PTR_s_respondsToSelector__026ca818,PTR_s_unsignedIntValue_0269db10);
    bVar1 = (uVar3 & 1) != 0;
    if (bVar1) {
      uVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_unsignedIntValue_0269db10);
      local_14 = (unsigned_int)uVar3;
    }
    local_40 = (uint)bVar1;
    _objc_storeStrong(&local_48,0);
    if (local_40 == 0) {
      local_14 = local_3c;
      local_40 = 1;
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_14;
}

