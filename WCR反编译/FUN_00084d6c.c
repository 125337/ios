// FUN_00084d6c @ 00084d6c

void FUN_00084d6c(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong local_48 [3];
  long local_30;
  undefined4 local_24;
  long local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if ((DAT_028c7f30 & 1) == 0) {
    local_18 = 0;
    local_24 = 1;
  }
  else {
    lVar1 = local_20;
    FUN_00071d98();
    _objc_retainAutoreleasedReturnValue();
    local_30 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
    if (lVar1 == 0) {
      local_18 = 0;
      local_24 = 1;
    }
    else {
      uVar2 = DAT_028c7d48;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_028c7d48,PTR_s_objectForKeyedSubscript__0269d098,local_30);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_48[0] = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
      if ((uVar2 & 1) == 0) {
        local_18 = 0;
      }
      else {
        uVar2 = local_48[0];
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48[0],PTR_s_objectForKey__0269e048,&cf_configured);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar2);
        local_18 = local_48[0];
        if ((uVar4 & 1) == 0) {
          local_18 = 0;
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
        }
      }
      local_24 = 1;
      _objc_storeStrong(local_48,0);
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

