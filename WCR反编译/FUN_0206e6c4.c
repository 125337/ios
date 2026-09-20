// FUN_0206e6c4 @ 0206e6c4

undefined8 FUN_0206e6c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined *local_18;
  
  local_18 = (undefined *)0x0;
  _objc_storeStrong(&local_18,param_2);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_3);
  uVar1 = local_20;
  local_28 = param_1;
  FUN_0206e96c();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_18;
  local_30 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_objectForKey__0269e048,uVar1);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    param_1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_38;
    local_38 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_setObject_forKey__026ca9e8,local_38,local_30);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineConfig_026cdf58,PTR_s_saveConfigDictionary__0269f960,local_18);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_doubleValue_026ca608);
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return param_1;
}

