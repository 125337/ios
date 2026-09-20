// FUN_0157097c @ 0157097c

void FUN_0157097c(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  code *local_38;
  undefined *local_30;
  long local_28;
  uint local_1c;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  bVar1 = local_18 != 0;
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineTopBarProfileCardPresenter_026ce228,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)();
    puVar3 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_18;
    local_48 = PTR___NSConcreteStackBlock_02578660;
    local_40 = 0xc2000000;
    local_3c = 0;
    local_38 = FUN_0157aea8;
    local_30 = &DAT_0257a800;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = lVar2;
    _dispatch_async(puVar3,&local_48);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(&local_28,0);
  }
  local_1c = (uint)!bVar1;
  _objc_storeStrong(&local_18,0);
  return;
}

