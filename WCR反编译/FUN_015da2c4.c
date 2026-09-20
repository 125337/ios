// FUN_015da2c4 @ 015da2c4

void FUN_015da2c4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *local_78;
  cfstringStruct *local_50;
  byte local_41;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  undefined *local_20;
  long local_18;
  
  local_20 = (undefined *)0x0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  puVar1 = local_20;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_scenes)
  ;
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_objectForKeyedSubscript__0269d098,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_41 = 0;
  local_78 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    local_78 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    local_40 = local_78;
  }
  local_41 = puVar2 == (undefined *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_78;
  if ((local_41 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_50 = &cf_night;
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    local_50 = &cf_day;
  }
  (*(code *)PTR__objc_retain_02578638)();
  lVar3 = *(long *)(param_1 + 0x28);
  (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_length_0269cca0);
  if (lVar3 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_removeObjectForKey__0269d700,local_50);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_setObject_forKeyedSubscript__0269d248,*(undefined8 *)(param_1 + 0x28),
               local_50);
  }
  puVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
  if (puVar1 == (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_removeObjectForKey__0269d700,*(undefined8 *)(param_1 + 0x20));
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_setObject_forKeyedSubscript__0269d248,local_38,
               *(undefined8 *)(param_1 + 0x20));
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  return;
}

