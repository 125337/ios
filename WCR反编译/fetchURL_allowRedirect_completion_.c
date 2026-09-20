// fetchURL:allowRedirect:completion: @ 0101ad90

/* Function Stack Size: 0x24 bytes */

void WCRefineLinkParser::fetchURL_allowRedirect_completion_
               (ID param_1,SEL param_2,ID param_3,bool param_4,ID param_5,undefined4 param_6)

{
  byte bVar1;
  undefined8 uVar2;
  ID IVar3;
  ID IVar4;
  undefined8 local_38;
  byte local_29;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_29 = (byte)param_4;
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  IVar3 = local_18;
  uVar2 = local_28;
  bVar1 = local_29;
  IVar4 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_mobileUA_026adc18);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar3,PTR_s_fetchURL_allowRedirect_ua_comple_026adca0,uVar2,bVar1 & 1,IVar4,local_38);
  (*(code *)PTR__objc_release_02578630)(IVar4);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  return;
}

