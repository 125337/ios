// FUN_00f55350 @ 00f55350

byte FUN_00f55350(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  byte local_8c;
  ulong local_78;
  ulong local_70;
  undefined4 local_64;
  ulong local_60;
  byte local_51;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_60 = 0;
  _objc_storeStrong(&local_60,param_1);
  uVar2 = local_60;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_51 = 0;
    local_64 = 1;
  }
  else {
    uVar2 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_objectForKeyedSubscript__0269d098,&cf_reqUrl);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_60;
    local_70 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_objectForKeyedSubscript__0269d098,&cf_msg);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_70;
    local_30 = &cf_mp_getappmsgad;
    local_28 = &cf_mp_appmsgreport;
    local_20 = &cf_mp_wapcommreport;
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_78 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_30,3
              );
    _objc_retainAutoreleasedReturnValue();
    FUN_00f53074();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    uVar2 = local_78;
    local_50 = &cf_ad_slot_data;
    local_48 = &cf_adData_;
    local_40 = &cf_advertisement;
    local_38 = &cf__mp_getappmsgad;
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_50,4
              );
    _objc_retainAutoreleasedReturnValue();
    FUN_00f53074();
    local_8c = 1;
    if ((uVar2 & 1) == 0) {
      local_8c = (byte)uVar4;
    }
    local_51 = local_8c & 1;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    local_64 = 1;
    _objc_storeStrong(&local_78);
    _objc_storeStrong(&local_70,0);
  }
  _objc_storeStrong(&local_60,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return local_51 & 1;
}

