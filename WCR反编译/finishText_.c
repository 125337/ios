// finishText: @ 009c6370

/* Function Stack Size: 0x18 bytes */

void WCRefineAIRequest::finishText_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  ID local_c0;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined *local_90;
  ID local_88;
  undefined8 local_80;
  ID local_78;
  ID local_70;
  bool local_61;
  ID local_60;
  byte local_51;
  ID local_50;
  ID local_48;
  undefined4 local_3c;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_finished_026a15b0);
  if ((IVar2 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setFinished__026a15b8,1);
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_fullText_026aae98);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_51 = 0;
    local_61 = false;
    if (IVar3 == 0) {
      local_c0 = 0;
    }
    else {
      local_c0 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_fullText_026aae98);
      _objc_retainAutoreleasedReturnValue();
      local_51 = 1;
      local_50 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_60 = local_c0;
    }
    local_61 = IVar3 != 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = local_c0;
    if ((local_61 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    if ((local_51 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_textCompletion_026aaea0);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_28;
    local_70 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_session_0269d000);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    puVar4 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_70;
    local_a8 = PTR___NSConcreteStackBlock_02578660;
    local_a0 = 0xc2000000;
    local_9c = 0;
    local_98 = FUN_009c66fc;
    local_90 = &DAT_0257cb48;
    (*(code *)PTR__objc_retain_02578638)();
    IVar3 = local_48;
    local_78 = IVar2;
    (*(code *)PTR__objc_retain_02578638)();
    uVar1 = local_38;
    local_88 = IVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_80 = uVar1;
    _dispatch_async(puVar4,&local_a8);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_storeStrong(&local_80);
    _objc_storeStrong(&local_88,0);
    _objc_storeStrong(&local_78,0);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_48,0);
    local_3c = 0;
  }
  else {
    local_3c = 1;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

