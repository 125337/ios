// addOAImageAsEmoticonWithUrl:base64:fromViewController: @ 00f5030c

/* Function Stack Size: 0x28 bytes */

void WCRefineEmoticonToolsHelper::addOAImageAsEmoticonWithUrl_base64_fromViewController_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  dispatch_queue_t pdVar4;
  undefined *puVar5;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined *local_90;
  long local_88;
  undefined8 local_80;
  undefined1 auStack_78 [8];
  ID local_70;
  undefined1 auStack_68 [8];
  long local_60;
  undefined *local_58;
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  lVar1 = local_38;
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = lVar1;
  puVar5 = PTR_s_rangeOfString__0269d838;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_rangeOfString__0269d838,&cf__);
  local_60 = lVar1;
  local_58 = puVar5;
  if (lVar1 != 0x7fffffffffffffff) {
    lVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_substringToIndex__0269d6c0,lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_50;
    local_50 = lVar2;
    (*(code *)PTR__objc_release_02578630)(lVar1);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  uVar3 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_class_0269cd60);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  _NSLog(&cf__wcr__emoticon_oaaddtweak_pathurlLen__lubase64Len__lufromVC___);
  (*(code *)PTR__objc_release_02578630)(uVar3);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_ck_WmR_);
  _objc_initWeak(auStack_68,local_48);
  pdVar4 = _dispatch_get_global_queue(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = local_50;
  local_a8 = PTR___NSConcreteStackBlock_02578660;
  local_a0 = 0xc2000000;
  local_9c = 0;
  local_98 = FUN_00f5061c;
  local_90 = &DAT_02583088;
  local_70 = local_28;
  (*(code *)PTR__objc_retain_02578638)();
  uVar3 = local_40;
  local_88 = lVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_80 = uVar3;
  _objc_copyWeak(auStack_78,auStack_68);
  _dispatch_async(pdVar4,&local_a8);
  (*(code *)PTR__objc_release_02578630)(pdVar4);
  _objc_destroyWeak(auStack_78);
  _objc_storeStrong(&local_80);
  _objc_storeStrong(&local_88,0);
  _objc_destroyWeak(auStack_68);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

