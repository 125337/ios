// FUN_003a3ae0 @ 003a3ae0

void FUN_003a3ae0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  long local_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined *local_40;
  undefined4 local_34;
  long local_30;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
  if ((local_28 == 0) || (local_30 == 0)) {
    local_34 = 1;
  }
  else {
    lVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_title_0269d250);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_items_0269e4b0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_stringWithFormat__0269cca8,&cf__Rd_);
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar4;
    (*(code *)PTR__objc_release_02578630)(lVar3);
    (*(code *)PTR__objc_release_02578630)(lVar2);
    _objc_initWeak(auStack_48,local_28);
    puVar1 = local_40;
    puVar4 = PTR_WCRefineHelper_026ce000;
    local_78 = PTR___NSConcreteStackBlock_02578660;
    local_70 = 0xc2000000;
    local_6c = 0;
    local_68 = FUN_003dfb8c;
    local_60 = &DAT_0257cd48;
    _objc_copyWeak(auStack_50,auStack_48);
    lVar2 = local_30;
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_showAlertWithTitle_message_destr_0269f868,&cf_RdR_O,puVar1,&cf_Rd,
               &local_78,&cf_Sm,0);
    _objc_unsafeClaimAutoreleasedReturnValue(puVar4);
    _objc_storeStrong(&local_58);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_storeStrong(&local_40,0);
    local_34 = 0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

