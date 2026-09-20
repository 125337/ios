// openHistoryRecordAndLocate:autoRemoveOnSuccess: @ 01b1f414

/* Function Stack Size: 0x1c bytes */

void WCRefineKeywordAlertHistoryViewController::openHistoryRecordAndLocate_autoRemoveOnSuccess_
               (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  ulong local_40;
  byte local_38;
  uint local_30;
  byte local_29;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar3 = local_28;
  local_29 = (byte)param_4;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  puVar2 = PTR___dispatch_main_q_02578680;
  bVar1 = (uVar3 & 1) != 0;
  if (bVar1) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_28;
    local_60 = PTR___NSConcreteStackBlock_02578660;
    local_58 = 0xc2000000;
    local_54 = 0;
    local_50 = FUN_01b1f578;
    local_48 = &DAT_02583028;
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = uVar3;
    local_38 = local_29 & 1;
    _dispatch_async(puVar2,&local_60);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_storeStrong(&local_40,0);
  }
  local_30 = (uint)!bVar1;
  _objc_storeStrong(&local_28,0);
  return;
}

