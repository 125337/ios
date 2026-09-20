// FUN_01be3c24 @ 01be3c24

void FUN_01be3c24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *local_78;
  undefined *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  undefined8 local_30;
  undefined8 local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  pcVar2 = (cfstringStruct *)PTR_WCRefineMomentsMonitor_026ce718;
  local_30 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineMomentsMonitor_026ce718,PTR_s_archivedMediaPathForMediaItem_ki_026a4b48,
             local_20,local_28);
  _objc_retainAutoreleasedReturnValue();
  local_38 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    pcVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,local_30);
    if (((ulong)pcVar2 & 1) != 0) {
      pcVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,local_30);
      _objc_retainAutoreleasedReturnValue();
      local_40 = pcVar3;
      FUN_01be33a4();
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_38;
      local_38 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      _objc_storeStrong(&local_40,0);
    }
  }
  pcVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  bVar1 = false;
  if (pcVar2 != (cfstringStruct *)0x0) {
    local_48 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = true;
    puVar4 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (((ulong)puVar4 & 1) != 0) {
      local_78 = local_38;
      goto LAB_01be3de8;
    }
  }
  local_78 = &cf___;
LAB_01be3de8:
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_78;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

