// WCRefine_onMainFrameSearchButtonLongPressed: @ 004ccbdc

/* Function Stack Size: 0x18 bytes */

void WCRefineMainFrameSearchButton::WCRefine_onMainFrameSearchButtonLongPressed_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  long lVar3;
  undefined *puVar4;
  dispatch_time_t dVar5;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  ID local_38;
  uint local_2c;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_state_026cab20);
  IVar2 = local_18;
  if (lVar3 == 1) {
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(IVar2,&DAT_028cac49,puVar4,1);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    dVar5 = _dispatch_time(0,350000000);
    puVar4 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_18;
    local_58 = PTR___NSConcreteStackBlock_02578660;
    local_50 = 0xc2000000;
    local_4c = 0;
    local_48 = FUN_004ccd9c;
    local_40 = &DAT_0257a800;
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = IVar2;
    _dispatch_after(dVar5,puVar4,&local_58);
    (*(code *)PTR__objc_release_02578630)();
    FUN_004cc684();
    bVar1 = ((ulong)puVar4 & 1) == 0;
    if (bVar1) {
      FUN_004cc6a0(local_18);
    }
    else {
      FUN_004cc720(local_18);
    }
    local_2c = (uint)!bVar1;
    _objc_storeStrong(&local_38,0);
  }
  else {
    local_2c = 1;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

