// saveOAImageToLocalRepositoryWithUrl:base64: @ 00f4d1e4

/* Function Stack Size: 0x20 bytes */

void WCRefineEmoticonToolsHelper::saveOAImageToLocalRepositoryWithUrl_base64_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  dispatch_queue_t pdVar3;
  undefined8 local_48;
  undefined8 local_40;
  ID local_38;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_ck_WmR_);
  pdVar3 = _dispatch_get_global_queue(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_28;
  local_38 = local_18;
  (*(code *)PTR__objc_retain_02578638)();
  uVar1 = local_30;
  local_48 = uVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = uVar1;
  _dispatch_async(pdVar3);
  (*(code *)PTR__objc_release_02578630)(pdVar3);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

