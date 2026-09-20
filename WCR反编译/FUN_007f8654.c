// FUN_007f8654 @ 007f8654

byte FUN_007f8654(void)

{
  undefined *puVar1;
  undefined *local_20;
  byte local_11;
  
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
  _objc_retainAutoreleasedReturnValue();
  local_20 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_objectForKey__0269e048,&cf_CadisEnabled);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (puVar1 == (undefined *)0x0) {
    local_11 = 0;
  }
  else {
    puVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_boolForKey__0269f3d8,&cf_CadisEnabled);
    local_11 = (byte)puVar1 & 1;
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

