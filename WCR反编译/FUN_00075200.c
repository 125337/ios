// FUN_00075200 @ 00075200

void FUN_00075200(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_40;
  undefined *local_38;
  undefined4 local_30;
  long local_20;
  undefined *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_18 = (undefined *)0x0;
    local_30 = 1;
  }
  else {
    FUN_0007709c();
    puVar2 = DAT_028c7d78;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028c7d78,PTR_s_objectForKey__0269e048,local_20);
    _objc_retainAutoreleasedReturnValue();
    local_38 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___UIImage_026cdfd0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithContentsOfFile__0269e0e0,local_20
                );
      _objc_retainAutoreleasedReturnValue();
      lVar1 = local_20;
      puVar2 = DAT_028c7d78;
      local_40 = puVar3;
      if (puVar3 != (undefined *)0x0) {
        puVar4 = puVar3;
        FUN_000776f4();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_setObject_forKey_cost__0269e0c0,puVar3,lVar1,puVar4);
      }
      puVar2 = local_40;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = puVar2;
      local_30 = 1;
      _objc_storeStrong(&local_40,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_30 = 1;
      local_18 = puVar2;
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

