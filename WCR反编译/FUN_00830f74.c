// FUN_00830f74 @ 00830f74

void FUN_00830f74(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_38;
  undefined4 local_30;
  undefined *local_20;
  undefined *local_18;
  
  local_18 = (undefined *)0x0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = (undefined *)0x0;
  _objc_storeStrong(&local_20,param_2);
  if (((local_18 == (undefined *)0x0) ||
      (puVar1 = local_18, (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_tag_026cab98),
      puVar1 != &UNK_0000271a)) || (local_20 == (undefined *)0x0)) {
    local_30 = 1;
  }
  else {
    puVar1 = local_20;
    _objc_getAssociatedObject(local_20,&DAT_028cd1f8);
    _objc_retainAutoreleasedReturnValue();
    local_38 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSMapTable_026ce9c0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMapTable_026ce9c0,
                 PTR_s_mapTableWithKeyOptions_valueOpti_026a8c58,5,0);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = local_38;
      local_38 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar1);
      _objc_setAssociatedObject(local_20,&DAT_028cd1f8,local_38,1);
    }
    puVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_objectForKey__0269e048,local_18);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    puVar2 = local_38;
    puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
    if (puVar3 == (undefined *)0x0) {
      puVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isHidden_026ca768);
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_numberWithBool__0269ce60,(ulong)puVar3 & 0xffffffff);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setObject_forKey__026ca9e8,puVar1,local_18)
      ;
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setHidden__026ca970,1);
    _objc_storeStrong(&local_38,0);
    local_30 = 0;
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

