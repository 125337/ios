// FUN_0206f178 @ 0206f178

void FUN_0206f178(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  cfstringStruct *local_60;
  long local_38;
  undefined8 local_30;
  cfstringStruct *local_28;
  undefined8 local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_20;
  FUN_0206e96c();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_18;
  local_30 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_objectForKey__0269e048,uVar1);
  _objc_retainAutoreleasedReturnValue();
  local_38 = lVar2;
  if (lVar2 == 0) {
    if (local_28 == (cfstringStruct *)0x0) {
      local_60 = &cf___;
    }
    else {
      local_60 = local_28;
    }
    _objc_storeStrong(&local_38,local_60);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_setObject_forKey__026ca9e8,local_38,local_30);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineConfig_026cdf58,PTR_s_saveConfigDictionary__0269f960,local_18);
  }
  lVar2 = local_38;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(lVar2);
  return;
}

