// FUN_00eecc44 @ 00eecc44

void FUN_00eecc44(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong local_38 [4];
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar2 = local_18;
  puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_setValue_forKey__0269d300,puVar1,&cf_m_isInSearchState);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  uVar2 = local_18;
  FUN_00eeb684(local_18,&cf_m_searchBar);
  _objc_retainAutoreleasedReturnValue();
  local_38[0] = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_respondsToSelector__026ca818,PTR_s_setText__026caa88);
  if ((uVar2 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_38[0],PTR_s_setText__026caa88,&cf___);
  }
  FUN_00eecba0(local_18);
  _objc_storeStrong(local_38);
  _objc_storeStrong(&local_18,0);
  return;
}

