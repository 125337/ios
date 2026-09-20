// openInWeChat @ 006dc104

/* Function Stack Size: 0x10 bytes */

void WCRSafariChooserTarget::openInWeChat(ID param_1,SEL param_2)

{
  undefined1 uVar1;
  bool bVar2;
  ID IVar3;
  ID IVar4;
  dispatch_time_t dVar5;
  undefined *puVar6;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  undefined *local_88;
  ID local_80;
  ID local_78;
  ID local_70;
  ID local_68;
  ID local_60;
  ID local_58;
  undefined1 local_49;
  ID local_48;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_handler_0269fbe8);
  _objc_retainAutoreleasedReturnValue();
  local_49 = 0;
  bVar2 = true;
  uVar1 = param_1 != 0;
  if ((bool)uVar1) {
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_url_026a5a28);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = IVar3 == 0;
    local_49 = uVar1;
    local_48 = IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    uVar1 = local_49;
  }
  local_49 = uVar1;
  (*(code *)PTR__objc_release_02578630)(param_1);
  if (!bVar2) {
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_url_026a5a28);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = local_28;
    local_58 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_handler_0269fbe8);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_28;
    local_60 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_extraInfo_026a6bc8);
    _objc_retainAutoreleasedReturnValue();
    local_68 = IVar3;
    dVar5 = _dispatch_time(0,350000000);
    puVar6 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_60;
    local_a0 = PTR___NSConcreteStackBlock_02578660;
    local_98 = 0xc2000000;
    local_94 = 0;
    local_90 = FUN_006dc460;
    local_88 = &DAT_02578f80;
    (*(code *)PTR__objc_retain_02578638)();
    IVar4 = local_58;
    local_80 = IVar3;
    (*(code *)PTR__objc_retain_02578638)();
    IVar3 = local_68;
    local_78 = IVar4;
    (*(code *)PTR__objc_retain_02578638)();
    local_70 = IVar3;
    _dispatch_after(dVar5,puVar6,&local_a0);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_78,0);
    _objc_storeStrong(&local_80,0);
    _objc_storeStrong(&local_68,0);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_58,0);
  }
  return;
}

