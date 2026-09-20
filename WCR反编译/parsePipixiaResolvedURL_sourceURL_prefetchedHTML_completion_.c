// parsePipixiaResolvedURL:sourceURL:prefetchedHTML:completion: @ 0106bb7c

/* Function Stack Size: 0x30 bytes */

void WCRefineLinkParser::parsePipixiaResolvedURL_sourceURL_prefetchedHTML_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,
               undefined4 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  undefined **ppuVar4;
  long lVar5;
  ID IVar6;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  code *local_b8;
  undefined *local_b0;
  undefined **local_a8;
  uint local_9c;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  ID local_60;
  undefined **local_58;
  undefined8 local_50;
  long local_48;
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
  local_50 = 0;
  _objc_storeStrong(&local_50,param_6);
  uVar1 = local_40;
  ppuVar4 = &local_98;
  local_98 = PTR___NSConcreteStackBlock_02578660;
  local_90 = 0xc2000000;
  local_8c = 0;
  local_88 = FUN_0106be2c;
  local_80 = &DAT_02584bf0;
  local_60 = local_28;
  (*(code *)PTR__objc_retain_02578638)();
  uVar2 = local_38;
  local_78 = uVar1;
  (*(code *)PTR__objc_retain_02578638)();
  uVar1 = local_50;
  local_70 = uVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_68 = uVar1;
  _objc_retainBlock();
  lVar5 = local_48;
  local_58 = ppuVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
  IVar3 = local_28;
  uVar1 = local_38;
  if (lVar5 == 0) {
    IVar6 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_mobileUA_026adc18);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = local_58;
    local_c8 = PTR___NSConcreteStackBlock_02578660;
    local_c0 = 0xc2000000;
    local_bc = 0;
    local_b8 = FUN_0106c330;
    local_b0 = &DAT_02584c20;
    (*(code *)PTR__objc_retain_02578638)();
    local_a8 = ppuVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar3,PTR_s_fetchURL_allowRedirect_ua_comple_026adca0,uVar1,1,IVar6,&local_c8);
    (*(code *)PTR__objc_release_02578630)(IVar6);
    _objc_storeStrong(&local_a8,0);
  }
  else {
    (*(code *)local_58[2])(local_58,local_48,0);
  }
  local_9c = (uint)(lVar5 != 0);
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

