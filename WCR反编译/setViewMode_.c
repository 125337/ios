// setViewMode: @ 019777e4

/* Function Stack Size: 0x18 bytes */

void WCRFileManagerState::setViewMode_(ID param_1,SEL param_2,long_long param_3)

{
  undefined *puVar1;
  
  *(long_long *)(param_1 + 0x28) = param_3;
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  return;
}

