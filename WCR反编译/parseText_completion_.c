// parseText:completion: @ 0102ac48

/* Function Stack Size: 0x20 bytes */

void WCRefineLinkParser::parseText_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  undefined8 uVar1;
  long lVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  long local_70;
  undefined4 local_64;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  long local_40;
  ID local_38;
  long local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3,param_3,param_4,param_5);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  IVar4 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_extractSupportedURLFromText__0269db90,local_28);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR___dispatch_main_q_02578680;
  local_38 = IVar4;
  if (IVar4 == 0) {
    if (local_30 != 0) {
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = local_30;
      local_60 = PTR___NSConcreteStackBlock_02578660;
      local_58 = 0xc2000000;
      local_54 = 0;
      local_50 = FUN_0102aea4;
      local_48 = &DAT_025814c8;
      (*(code *)PTR__objc_retain_02578638)();
      local_40 = lVar2;
      _dispatch_async(puVar5,&local_60);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      _objc_storeStrong(&local_40,0);
    }
    local_64 = 1;
  }
  else {
    uVar6 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_copy_0269d150);
    uVar1 = DAT_028e31c0;
    DAT_028e31c0 = uVar6;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    IVar3 = local_18;
    lVar2 = local_30;
    IVar4 = local_38;
    local_90 = PTR___NSConcreteStackBlock_02578660;
    local_88 = 0xc2000000;
    local_84 = 0;
    local_80 = FUN_0102afc8;
    local_78 = &DAT_025846e0;
    (*(code *)PTR__objc_retain_02578638)();
    local_70 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_parseURL_completion__026ade08,IVar4,&local_90)
    ;
    _objc_storeStrong(&local_70,0);
    local_64 = 0;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

