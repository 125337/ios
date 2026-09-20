// setUngroupedDisplayName: @ 01086584

/* Function Stack Size: 0x18 bytes */

void WCRefineLocalEmoticonStore::setUngroupedDisplayName_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong local_80;
  ulong local_58;
  ulong local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_loadUngroupedNameIfNeeded_026ae288);
  uVar2 = local_28;
  FUN_0108688c();
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isEqualToString__0269ccc8,&cf__g_TT);
  uVar4 = local_28;
  bVar1 = false;
  if ((uVar2 & 1) != 0) {
    puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = uVar2 == 0;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  if (bVar1) {
    _objc_storeStrong(&local_30,&cf__gR_);
  }
  uVar4 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,&cf___ungrouped__);
  if (((uVar4 & 1) != 0) ||
     (uVar4 = local_30,
     (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,&cf___all__),
     (uVar4 & 1) != 0)) {
    _objc_storeStrong(&local_30,&cf__gR_);
  }
  uVar4 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,&cf__gR_);
  bVar1 = (uVar4 & 1) == 0;
  if (bVar1) {
    local_80 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_copy_0269d150);
    local_58 = local_80;
  }
  else {
    local_80 = 0;
  }
  _objc_storeStrong(&DAT_028e3280,local_80);
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_saveIndex_026ae268);
  FUN_0107ad08();
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

