// saveOAImageDataToLocalRepository: @ 00f4cf48

/* Function Stack Size: 0x18 bytes */

void WCRefineEmoticonToolsHelper::saveOAImageDataToLocalRepository_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  dispatch_queue_t pdVar3;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  ID local_48;
  ID local_40;
  uint local_34;
  ID local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_nsDataFromImageDataOrImage__026ac488,local_28);
  _objc_retainAutoreleasedReturnValue();
  local_30 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_length_0269cca0);
  if (IVar2 != 0) {
    pdVar3 = _dispatch_get_global_queue(0x19,0);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_30;
    local_68 = PTR___NSConcreteStackBlock_02578660;
    local_60 = 0xc2000000;
    local_5c = 0;
    local_58 = FUN_00f4d0bc;
    local_50 = &DAT_0257cc98;
    local_40 = local_18;
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = IVar1;
    _dispatch_async(pdVar3,&local_68);
    (*(code *)PTR__objc_release_02578630)(pdVar3);
    _objc_storeStrong(&local_48,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elSVGr);
  }
  local_34 = (uint)(IVar2 == 0);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

