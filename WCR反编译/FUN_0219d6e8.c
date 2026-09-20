// FUN_0219d6e8 @ 0219d6e8

bool FUN_0219d6e8(void)

{
  bool bVar1;
  undefined *puVar2;
  undefined1 *local_20;
  undefined1 *local_18;
  
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_configDictionary_0269f958)
  ;
  _objc_retainAutoreleasedReturnValue();
  local_18 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_objectForKey__0269e048,&cf_toDoCardSourceMode);
  _objc_retainAutoreleasedReturnValue();
  bVar1 = false;
  local_20 = puVar2;
  if (puVar2 != (undefined1 *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_integerValue_026ca750);
    bVar1 = puVar2 == (undefined1 *)((long)&MACH_HEADER.magic + 2);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return bVar1;
}

