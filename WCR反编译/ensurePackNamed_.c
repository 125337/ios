// ensurePackNamed: @ 0108a800

/* WARNING: Removing unreachable block (ram,0x0108a974) */
/* Function Stack Size: 0x18 bytes */

ID WCRefineLocalEmoticonStore::ensurePackNamed_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *local_48;
  undefined4 local_3c;
  ulong local_38;
  ulong local_30;
  SEL local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar1 = local_30;
  FUN_0108688c();
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if (((uVar1 == 0) || (uVar1 = local_38, FUN_01085b64(), (uVar1 & 1) != 0)) ||
     (uVar1 = local_38,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_38,PTR_s_isEqualToString__0269ccc8,&cf___ungrouped__), (uVar1 & 1) != 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___ungrouped__;
    local_3c = 1;
  }
  else {
    pcVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_absolutePathFromRelative__026ae2c0,local_38);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    local_48 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    pcVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_createPackNamed_error__026a3e00,local_38,0)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_3c = 1;
    local_18 = pcVar2;
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

