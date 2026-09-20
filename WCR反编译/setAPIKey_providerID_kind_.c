// setAPIKey:providerID:kind: @ 009c5618

/* Function Stack Size: 0x28 bytes */

bool WCRefineAIStore::setAPIKey_providerID_kind_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  byte bVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ID IVar5;
  ulong local_48;
  ulong local_40;
  undefined8 local_38;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_5);
  uVar3 = local_40;
  FUN_009c4fc4();
  _objc_retainAutoreleasedReturnValue();
  local_48 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_length_0269cca0);
  IVar5 = local_20;
  uVar2 = local_30;
  if (uVar3 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_setAPIKey_providerID__026aae40,local_30,local_38);
    bVar1 = (byte)IVar5;
  }
  else {
    uVar4 = local_38;
    FUN_009c50ac(local_38,local_48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar5,PTR_s_wcrWriteAPIKey_account_recordPro_026aae48,uVar2,uVar4,0);
    (*(code *)PTR__objc_release_02578630)(uVar4);
    bVar1 = (byte)IVar5;
    if (((IVar5 & 1) != 0) &&
       (uVar3 = local_48,
       (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isEqualToString__0269ccc8,&cf_chat),
       (uVar3 & 1) != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_setAPIKey_providerID__026aae40,local_30,local_38);
    }
  }
  local_11 = bVar1 & 1;
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

