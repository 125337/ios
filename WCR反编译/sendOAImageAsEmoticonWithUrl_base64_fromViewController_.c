// sendOAImageAsEmoticonWithUrl:base64:fromViewController: @ 00f4deac

/* Function Stack Size: 0x28 bytes */

void WCRefineEmoticonToolsHelper::sendOAImageAsEmoticonWithUrl_base64_fromViewController_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  dispatch_queue_t pdVar3;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 auStack_60 [8];
  ID local_58;
  undefined1 auStack_50 [8];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
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
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  uVar2 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_class_0269cd60);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  _NSLog(&cf__wcr__emoticon_oaclickurlLen__lubase64Len__lufromVC___);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_ck_WYt_);
  _objc_initWeak(auStack_50,local_48);
  pdVar3 = _dispatch_get_global_queue(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_38;
  local_90 = PTR___NSConcreteStackBlock_02578660;
  local_88 = 0xc2000000;
  local_84 = 0;
  local_80 = FUN_00f4e110;
  local_78 = &DAT_02583088;
  local_58 = local_28;
  (*(code *)PTR__objc_retain_02578638)();
  uVar2 = local_40;
  local_70 = uVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_68 = uVar2;
  _objc_copyWeak(auStack_60,auStack_50);
  _dispatch_async(pdVar3,&local_90);
  (*(code *)PTR__objc_release_02578630)(pdVar3);
  _objc_destroyWeak(auStack_60);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_70,0);
  _objc_destroyWeak(auStack_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

