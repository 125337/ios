// performSpeed:md5:chatVC: @ 00f3b060

/* Function Stack Size: 0x28 bytes */

void WCRefineEmoticonToolsHelper::performSpeed_md5_chatVC_
               (ID param_1,SEL param_2,double param_3,ID param_4,ID param_5)

{
  long lVar1;
  long lVar2;
  dispatch_queue_t pdVar3;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  long local_60;
  long local_58;
  ID local_50;
  double local_48;
  undefined4 local_3c;
  long local_38;
  long local_30;
  double local_28;
  SEL local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_30,param_4);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  lVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if ((lVar2 == 0) || (local_38 == 0)) {
    local_3c = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_ck_WYt_);
    pdVar3 = _dispatch_get_global_queue(0x19,0);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_30;
    local_80 = PTR___NSConcreteStackBlock_02578660;
    local_78 = 0xc2000000;
    local_74 = 0;
    local_70 = FUN_00f3b210;
    local_68 = &DAT_02582b88;
    local_50 = local_18;
    (*(code *)PTR__objc_retain_02578638)();
    lVar2 = local_38;
    local_60 = lVar1;
    local_48 = local_28;
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = lVar2;
    _dispatch_async(pdVar3,&local_80);
    (*(code *)PTR__objc_release_02578630)(pdVar3);
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_60,0);
    local_3c = 0;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return;
}

