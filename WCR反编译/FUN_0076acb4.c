// FUN_0076acb4 @ 0076acb4

void FUN_0076acb4(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  dispatch_time_t dVar6;
  undefined *local_30;
  undefined4 local_28;
  undefined8 local_18;
  undefined8 *puVar2;
  
  puVar2 = &local_18;
  local_18 = 0;
  _objc_storeStrong(puVar2,param_1);
  uVar1 = (uint)puVar2;
  FUN_0076cc5c();
  if ((uVar1 & 1) == 0) {
    FUN_0076cc88();
    DAT_028cc908 = 0;
    DAT_028cc909 = 0;
    local_28 = 1;
  }
  else {
    puVar3 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_getCurrentUserWxid_0269e148);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    local_30 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)();
    uVar1 = (uint)puVar3;
    FUN_0076ccdc();
    puVar3 = PTR_WCRefineAuth_026ce2c8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineAuth_026ce2c8,PTR_s_hasResolvedGroupAuthorizationFor_0269eb80);
    if ((uVar1 & 1) == 0) {
      puVar4 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
      if (puVar4 == (undefined *)0x0) {
        if ((DAT_028cc909 & 1) == 0) {
          DAT_028cc909 = 1;
          dVar6 = _dispatch_time(0,1000000000);
          puVar3 = PTR___dispatch_main_q_02578680;
          _objc_retainAutoreleaseReturnValue();
          _objc_retainAutoreleasedReturnValue();
          _dispatch_after(dVar6,puVar3,&PTR___NSConcreteGlobalBlock_0257fb28);
          (*(code *)PTR__objc_release_02578630)(puVar3);
        }
        local_28 = 1;
      }
      else if (((ulong)puVar3 & 1) == 0) {
        local_28 = 1;
      }
      else {
        FUN_00a50eac();
        puVar3 = PTR___dispatch_main_q_02578680;
        if (((ulong)puVar4 & 1) == 0) {
          local_28 = 1;
        }
        else {
          _objc_retainAutoreleaseReturnValue();
          _objc_retainAutoreleasedReturnValue();
          _dispatch_async();
          (*(code *)PTR__objc_release_02578630)(puVar3);
          local_28 = 0;
        }
      }
    }
    else {
      FUN_0076cc88();
      DAT_028cc908 = 0;
      DAT_028cc909 = 0;
      local_28 = 1;
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

