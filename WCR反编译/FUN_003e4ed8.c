// FUN_003e4ed8 @ 003e4ed8

void FUN_003e4ed8(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_length_0269cca0);
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)();
    FUN_003e5ab8();
    lVar1 = local_18;
    if (((ulong)puVar2 & 1) != 0) {
      FUN_003e5978();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (lVar1,PTR_s_writeToFile_atomically_encoding__026a33a8,puVar2,1,4,0);
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    FUN_003e5cec(local_18);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

