// FUN_00339034 @ 00339034

long FUN_00339034(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  long local_60;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  int local_40;
  ulong local_30;
  long local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  uVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0);
  if (uVar1 == 0) {
    local_28 = 0;
    local_40 = 1;
  }
  else {
    for (local_48 = 0; uVar1 = local_48, uVar2 = local_30,
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0), uVar1 < uVar2;
        local_48 = local_48 + 1) {
      uVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_objectAtIndexedSubscript__0269cc78,local_48);
      _objc_retainAutoreleasedReturnValue();
      local_50 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_valueForKey__0269d128,&cf_title);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_58 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
      if (((uVar1 & 1) == 0) ||
         ((uVar1 = local_58,
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_containsString__0269d0b0,&cf___),
          (uVar1 & 1) == 0 &&
          (uVar1 = local_58,
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_containsString__0269d0b0,&cf___),
          (uVar1 & 1) == 0)))) {
        local_40 = 0;
      }
      else {
        local_28 = local_48 + 1;
        local_40 = 1;
      }
      _objc_storeStrong(&local_58);
      _objc_storeStrong(&local_50,0);
      if (local_40 != 0) goto LAB_003394dc;
    }
    local_60 = 0;
    for (local_68 = 0; uVar1 = local_68, uVar2 = local_30,
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0), uVar1 < uVar2;
        local_68 = local_68 + 1) {
      uVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_objectAtIndexedSubscript__0269cc78,local_68);
      _objc_retainAutoreleasedReturnValue();
      local_70 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_valueForKey__0269d128,&cf_title);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_78 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
      if (((uVar1 & 1) == 0) ||
         ((uVar1 = local_78,
          (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_containsString__0269d0b0,&cf___N),
          (uVar1 & 1) == 0 &&
          (uVar1 = local_78,
          (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_containsString__0269d0b0,&cf__t),
          (uVar1 & 1) == 0)))) {
        local_40 = 5;
      }
      else {
        local_60 = local_68 + 1;
        local_40 = 0;
      }
      _objc_storeStrong(&local_78);
      _objc_storeStrong(&local_70,0);
      if (local_40 != 0) break;
    }
    local_28 = local_60;
    local_40 = 1;
  }
LAB_003394dc:
  _objc_storeStrong(&local_30,0);
  return local_28;
}

