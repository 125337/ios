// wcr_openTimeline: @ 01555d24

/* Function Stack Size: 0x18 bytes */

void WCRefineTopBarProfileCardPresenter::wcr_openTimeline_(ID param_1,SEL param_2,ID param_3)

{
  undefined1 uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined *local_48;
  uint local_40;
  undefined1 local_39;
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (undefined *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar3 = local_28;
  _objc_getAssociatedObject(local_28,DAT_028c5f00);
  _objc_retainAutoreleasedReturnValue();
  local_39 = 0;
  bVar2 = true;
  uVar1 = puVar3 != (undefined *)0x0;
  local_30 = puVar3;
  if ((bool)uVar1) {
    puVar4 = PTR__OBJC_CLASS___NSNull_026ce0e8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = puVar3 == puVar4;
    local_39 = uVar1;
    local_38 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    uVar1 = local_39;
  }
  local_39 = uVar1;
  if (!bVar2) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_wcr_dismissProfileCardAnimated_r_026b0590,0,0);
    puVar3 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = local_30;
    local_68 = PTR___NSConcreteStackBlock_02578660;
    local_60 = 0xc2000000;
    local_5c = 0;
    local_58 = FUN_01555f18;
    local_50 = &DAT_0257a800;
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = puVar4;
    _dispatch_async(puVar3,&local_68);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(&local_48,0);
  }
  local_40 = (uint)bVar2;
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

