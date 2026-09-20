// FUN_01a97410 @ 01a97410

void FUN_01a97410(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong local_68;
  ulong local_38;
  undefined4 local_2c;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  pcVar1 = &cf_allTopSessions;
  _NSSelectorFromString(&cf_allTopSessions);
  FUN_01a91e98(uVar2,pcVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_28 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  if ((uVar2 & 1) != 0) {
    uVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_count_0269cfe0);
    uVar2 = local_28;
    if (uVar4 != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar2;
      local_2c = 1;
      goto LAB_01a975b4;
    }
  }
  uVar2 = local_20;
  pcVar1 = &cf_topSessions;
  _NSSelectorFromString(&cf_topSessions);
  FUN_01a91e98(uVar2,pcVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_38 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  if ((uVar2 & 1) == 0) {
    local_68 = *(ulong *)PTR____NSArray0___02578280;
  }
  else {
    local_68 = local_38;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_68;
  local_2c = 1;
  _objc_storeStrong(&local_38,0);
LAB_01a975b4:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

