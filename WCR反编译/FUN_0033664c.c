// FUN_0033664c @ 0033664c

long FUN_0033664c(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  int iVar4;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  long local_50;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  int local_30;
  ulong local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_count_0269cfe0);
  if (uVar1 == 0) {
    local_18 = 0;
    iVar4 = 1;
    local_30 = 1;
  }
  else {
    for (local_38 = 0; uVar1 = local_38, uVar2 = local_20,
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_count_0269cfe0), uVar1 < uVar2;
        local_38 = local_38 + 1) {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_objectAtIndexedSubscript__0269cc78,local_38);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_40 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
      uVar1 = local_40;
      if ((uVar2 & 1) == 0) {
        local_30 = 4;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_48 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_containsString__0269d0b0,&cf___);
        if (((uVar1 & 1) == 0) &&
           (uVar1 = local_48,
           (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_containsString__0269d0b0,&cf___),
           (uVar1 & 1) == 0)) {
          local_30 = 0;
        }
        else {
          local_18 = local_38 + 1;
          local_30 = 1;
        }
        _objc_storeStrong(&local_48,0);
      }
      _objc_storeStrong(&local_40,0);
      if ((local_30 != 0) && (iVar4 = local_30 + -4, iVar4 != 0)) goto LAB_00336ae0;
    }
    local_50 = 0;
    for (local_58 = 0; uVar1 = local_58, uVar2 = local_20,
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_count_0269cfe0), uVar1 < uVar2;
        local_58 = local_58 + 1) {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_objectAtIndexedSubscript__0269cc78,local_58);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_60 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
      uVar1 = local_60;
      if ((uVar2 & 1) == 0) {
        local_30 = 5;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_68 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_containsString__0269d0b0,&cf___N);
        if (((uVar1 & 1) == 0) &&
           (uVar1 = local_68,
           (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_containsString__0269d0b0,&cf__t),
           (uVar1 & 1) == 0)) {
          local_30 = 5;
        }
        else {
          local_50 = local_58 + 1;
          local_30 = 0;
        }
        _objc_storeStrong(&local_68,0);
      }
      _objc_storeStrong(&local_60,0);
      if (local_30 != 0) break;
    }
    local_18 = local_50;
    iVar4 = 1;
    local_30 = 1;
  }
LAB_00336ae0:
  _objc_storeStrong(iVar4,&local_20,0);
  return local_18;
}

