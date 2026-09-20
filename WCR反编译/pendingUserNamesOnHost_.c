// pendingUserNamesOnHost: @ 00168750

/* Function Stack Size: 0x18 bytes */

ID WCRefineClearSessionHook::pendingUserNamesOnHost_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_60;
  ulong local_48;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  bVar1 = local_28 == 0;
  if (bVar1) {
    local_48 = 0;
  }
  else {
    local_48 = local_28;
    _objc_getAssociatedObject(local_28,&DAT_028c8868);
    _objc_retainAutoreleasedReturnValue();
    local_38 = local_48;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_48;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  uVar3 = local_30;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar3 & 1) == 0) {
    local_60 = *(ulong *)PTR____NSArray0___02578280;
  }
  else {
    local_60 = local_30;
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return local_60;
}

