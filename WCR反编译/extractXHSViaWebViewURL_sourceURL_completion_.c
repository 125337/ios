// extractXHSViaWebViewURL:sourceURL:completion: @ 0104b060

/* Function Stack Size: 0x28 bytes */

void WCRefineLinkParser::extractXHSViaWebViewURL_sourceURL_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,undefined4 param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined *local_98;
  undefined8 local_90;
  long local_88;
  undefined8 local_80;
  undefined4 local_74;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  undefined8 local_50;
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
  lVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  puVar3 = PTR___dispatch_main_q_02578680;
  if (lVar2 == 0) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_48;
    local_70 = PTR___NSConcreteStackBlock_02578660;
    local_68 = 0xc2000000;
    local_64 = 0;
    local_60 = FUN_0104b2d4;
    local_58 = &DAT_025814c8;
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = uVar1;
    _dispatch_async(puVar3,&local_70);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_74 = 1;
    _objc_storeStrong(&local_50,0);
  }
  else {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_40;
    local_b0 = PTR___NSConcreteStackBlock_02578660;
    local_a8 = 0xc2000000;
    local_a4 = 0;
    local_a0 = FUN_0104b3f8;
    local_98 = &DAT_0257cb48;
    (*(code *)PTR__objc_retain_02578638)();
    lVar2 = local_38;
    local_90 = uVar1;
    (*(code *)PTR__objc_retain_02578638)();
    uVar1 = local_48;
    local_88 = lVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_80 = uVar1;
    _dispatch_async(puVar3,&local_b0);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(&local_80);
    _objc_storeStrong(&local_88,0);
    _objc_storeStrong(&local_90,0);
    local_74 = 0;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

