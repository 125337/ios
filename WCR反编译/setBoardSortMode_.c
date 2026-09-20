// setBoardSortMode: @ 0107ae74

/* Function Stack Size: 0x18 bytes */

void WCRefineLocalEmoticonStore::setBoardSortMode_(ID param_1,SEL param_2,long_long param_3)

{
  undefined *puVar1;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_boardSortMode_026a3de0);
  if (param_1 != (long)(int)(uint)(param_3 == 1)) {
    puVar1 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    FUN_0107ad08();
  }
  return;
}

