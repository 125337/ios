// pinnedFiles @ 01c715a4

/* Function Stack Size: 0x10 bytes */

ID WCRefinePageBackgroundLibraryViewController::pinnedFiles(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_40;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_28;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((ulong)puVar1 & 1) == 0) {
    local_40 = *(undefined **)PTR____NSArray0___02578280;
  }
  else {
    local_40 = local_28;
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_40;
}

