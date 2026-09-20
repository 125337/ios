// FUN_01560624 @ 01560624

void FUN_01560624(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  cfstringStruct *pcVar5;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined4 local_2c;
  undefined8 local_28;
  long local_20;
  cfstringStruct *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_2c = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_38 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_objectForKeyedSubscript__0269d098,
               *(undefined8 *)PTR__NSFileSize_02578028);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_38;
    local_40 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_objectForKeyedSubscript__0269d098,
               *(undefined8 *)PTR__NSFileModificationDate_02578020);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDate_026cdf88;
    local_48 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    if (((ulong)puVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_timeIntervalSince1970_0269cfc8);
    }
    pcVar5 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    uVar4 = local_28;
    FUN_01528c84();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_lastPathComponent_026ca780);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar5,PTR_s_stringWithFormat__0269cca8,&cf_custom________llu___0f);
    _objc_retainAutoreleasedReturnValue();
    local_18 = pcVar5;
    (*(code *)PTR__objc_release_02578630)(lVar1);
    (*(code *)PTR__objc_release_02578630)(uVar4);
    local_2c = 1;
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

