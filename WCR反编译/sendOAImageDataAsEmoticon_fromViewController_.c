// sendOAImageDataAsEmoticon:fromViewController: @ 00f4e750

/* Function Stack Size: 0x20 bytes */

void WCRefineEmoticonToolsHelper::sendOAImageDataAsEmoticon_fromViewController_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  ID IVar2;
  dispatch_queue_t pdVar3;
  undefined *local_c0;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined *local_90;
  ID local_88;
  undefined1 auStack_80 [8];
  ID local_78;
  undefined1 auStack_70 [15];
  byte local_61;
  undefined *local_60;
  undefined *local_58;
  undefined4 local_4c;
  ID local_48;
  undefined *local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = (undefined *)0x0;
  _objc_storeStrong(&local_40,param_4);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_nsDataFromImageDataOrImage__026ac488,local_38);
  _objc_retainAutoreleasedReturnValue();
  local_48 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_length_0269cca0);
  if (IVar2 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elSVGr);
    local_4c = 1;
  }
  else {
    local_61 = 0;
    bVar1 = local_40 == (undefined *)0x0;
    if (bVar1) {
      local_c0 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
      _objc_retainAutoreleasedReturnValue();
      local_60 = local_c0;
    }
    else {
      local_c0 = local_40;
    }
    local_61 = bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = local_c0;
    if ((local_61 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_ck_WYt_);
    _objc_initWeak(auStack_70,local_58);
    pdVar3 = _dispatch_get_global_queue(0x19,0);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_48;
    local_a8 = PTR___NSConcreteStackBlock_02578660;
    local_a0 = 0xc2000000;
    local_9c = 0;
    local_98 = FUN_00f4ea08;
    local_90 = &DAT_0257c708;
    local_78 = local_28;
    (*(code *)PTR__objc_retain_02578638)();
    local_88 = IVar2;
    _objc_copyWeak(auStack_80,auStack_70);
    _dispatch_async(pdVar3,&local_a8);
    (*(code *)PTR__objc_release_02578630)(pdVar3);
    _objc_destroyWeak(auStack_80);
    _objc_storeStrong(&local_88);
    _objc_destroyWeak(auStack_70);
    _objc_storeStrong(&local_58,0);
    local_4c = 0;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

