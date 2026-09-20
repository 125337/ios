// wcr_openProfileFromAvatar: @ 01558c3c

/* Function Stack Size: 0x18 bytes */

void WCRefineTopBarProfileCardPresenter::wcr_openProfileFromAvatar_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined1 uVar1;
  undefined *puVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  ID local_48;
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
  puVar4 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  _objc_getAssociatedObject();
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar5;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar4 = local_30;
  local_39 = 0;
  bVar3 = true;
  uVar1 = local_30 != (undefined *)0x0;
  if ((bool)uVar1) {
    puVar5 = PTR__OBJC_CLASS___NSNull_026ce0e8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
    _objc_retainAutoreleasedReturnValue();
    bVar3 = puVar4 == puVar5;
    local_39 = uVar1;
    local_38 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar5);
    uVar1 = local_39;
  }
  local_39 = uVar1;
  if (!bVar3) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_wcr_dismissProfileCardAnimated_r_026b0590,0,0);
    puVar4 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_28;
    local_78 = PTR___NSConcreteStackBlock_02578660;
    local_70 = 0xc2000000;
    local_6c = 0;
    local_68 = FUN_01558ea4;
    local_60 = &DAT_0257a740;
    (*(code *)PTR__objc_retain_02578638)();
    puVar5 = local_30;
    local_58 = puVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = puVar5;
    local_48 = local_18;
    _dispatch_async(puVar4,&local_78);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_58,0);
  }
  local_40 = (uint)bVar3;
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

