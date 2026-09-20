// FUN_003d1618 @ 003d1618

void FUN_003d1618(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [12];
  uint local_24;
  ulong local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  FUN_00367110(local_18,&cf_m_swipedSession,0);
  FUN_00367110(local_18,&cf_m_confirmingSessionName,0);
  uVar3 = local_20;
  puVar2 = PTR__OBJC_CLASS___UITableView_026ce1a8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60)
  ;
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  bVar1 = (uVar3 & 1) != 0;
  if (bVar1) {
    FUN_003672a4(local_20,0);
    _objc_initWeak(auStack_30,local_20);
    puVar2 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_58 = PTR___NSConcreteStackBlock_02578660;
    local_50 = 0xc2000000;
    local_4c = 0;
    local_48 = FUN_003d1ae0;
    local_40 = &DAT_0257be28;
    _objc_copyWeak(auStack_38,auStack_30);
    _dispatch_async(puVar2,&local_58);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_destroyWeak(auStack_38);
    _objc_destroyWeak(auStack_30);
  }
  local_24 = (uint)!bVar1;
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

