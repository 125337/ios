// setSelectedFilterPackRel: @ 01088074

/* Function Stack Size: 0x18 bytes */

void WCRefineLocalEmoticonStore::setSelectedFilterPackRel_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  pcVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_38 = &cf___all__;
  }
  else {
    local_38 = local_28;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_38;
  FUN_01085b64();
  if (((ulong)local_38 & 1) != 0) {
    _objc_storeStrong(&local_30,&cf___ungrouped__);
  }
  puVar2 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&DAT_028e3230);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

