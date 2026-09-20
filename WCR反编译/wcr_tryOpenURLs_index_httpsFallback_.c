// wcr_tryOpenURLs:index:httpsFallback: @ 00fbf878

/* Function Stack Size: 0x28 bytes */

void WCRefineHelper::wcr_tryOpenURLs_index_httpsFallback_
               (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4,ID param_5)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  ulong local_70;
  long local_68;
  ulong local_60;
  ulong local_58;
  undefined4 local_4c;
  long local_48;
  ulong local_40;
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_48 = 0;
  local_40 = param_4;
  _objc_storeStrong(&local_48,param_5);
  uVar3 = local_40;
  uVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
  if (uVar3 < uVar1) {
    uVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_objectAtIndexedSubscript__0269cc78,local_40);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIApplication_026ce010;
    local_58 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_38;
    uVar3 = local_58;
    uVar5 = *(undefined8 *)PTR____NSDictionary0___02578288;
    local_90 = PTR___NSConcreteStackBlock_02578660;
    local_88 = 0xc2000000;
    local_84 = 0;
    local_80 = FUN_00fbfb4c;
    local_78 = &DAT_02583af0;
    (*(code *)PTR__objc_retain_02578638)();
    lVar2 = local_48;
    local_70 = uVar1;
    local_60 = local_40;
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_openURL_options_completionHandle_026a6be8,uVar3,uVar5,&local_90);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_58,0);
    local_4c = 0;
  }
  else {
    lVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
    if (lVar2 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_showModernToast__0269ce78,&::cf_elSb);
    }
    else {
      puVar4 = PTR__OBJC_CLASS___UIPasteboard_026ce040;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIPasteboard_026ce040,PTR_s_generalPasteboard_0269ce70);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_showModernToast__0269ce78,&::cf_elSb);
    }
    local_4c = 1;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_38,0);
  return;
}

