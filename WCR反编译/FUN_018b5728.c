// FUN_018b5728 @ 018b5728

void FUN_018b5728(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  long local_38;
  uint local_2c;
  undefined8 local_28;
  long local_20;
  undefined8 local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  lVar3 = local_20;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_count_0269cfe0);
  puVar1 = PTR_WCRefineHelper_026ce000;
  puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
  if (lVar3 != 0) {
    lVar4 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_stringWithFormat__0269cca8,&cf__nd);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_20;
    local_58 = PTR___NSConcreteStackBlock_02578660;
    local_50 = 0xc2000000;
    local_4c = 0;
    local_48 = FUN_018b58c4;
    local_40 = &DAT_0257a800;
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_presentNativePageSheetConfirmWit_0269ed28,&cf_nzzc__,puVar5,&cf_NSb_Y,
               &cf_nzz,&cf_Sm,&local_58,lVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(puVar5);
    _objc_storeStrong(&local_38,0);
  }
  local_2c = (uint)(lVar3 == 0);
  _objc_storeStrong(&local_20,0);
  return;
}

