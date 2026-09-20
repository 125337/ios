// FUN_008a1fd0 @ 008a1fd0

uint FUN_008a1fd0(void)

{
  undefined *puVar1;
  uint local_34;
  undefined *local_18;
  
  puVar1 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_getCurrentUserWxid_0269e148);
  _objc_retainAutoreleasedReturnValue();
  local_18 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_length_0269cca0);
  local_34 = 0;
  if (puVar1 != (undefined *)0x0) {
    puVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_isEqualToString__0269ccc8,&cf_wxid_919w3ffmhln712);
    local_34 = (uint)puVar1;
  }
  _objc_storeStrong(&local_18,0);
  return local_34 & 1;
}

