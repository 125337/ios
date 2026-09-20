// _WCRefineInsertLocalSystemTip @ 006c30c4

void _WCRefineInsertLocalSystemTip(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  long local_58;
  ulong local_50;
  byte local_48;
  byte local_41;
  undefined4 local_40;
  ulong local_30;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if ((lVar1 == 0) ||
     (uVar2 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
     uVar2 == 0)) {
    local_40 = 1;
  }
  else {
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_containsString__0269d0b0,&cf_WCRefineAtMention___);
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_41 = (byte)uVar2;
    if ((uVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_stringWithFormat__0269cca8,
                 &cf_at_mentioninsert_begintarget___content__lu);
      _objc_retainAutoreleasedReturnValue();
      _WCRefineCrashReporterBreadcrumb();
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    puVar3 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_28;
    local_78 = PTR___NSConcreteStackBlock_02578660;
    local_70 = 0xc2000000;
    local_6c = 0;
    local_68 = FUN_006c33b4;
    local_60 = &DAT_02579420;
    (*(code *)PTR__objc_retain_02578638)();
    uVar2 = local_30;
    local_58 = lVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = uVar2;
    local_48 = local_41 & 1;
    _dispatch_async(puVar3,&local_78);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_58,0);
    local_40 = 0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

