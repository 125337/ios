// resolveRedirectHop:hop:completion: @ 0101af28

/* Function Stack Size: 0x28 bytes */

void WCRefineLinkParser::resolveRedirectHop_hop_completion_
               (ID param_1,SEL param_2,ID param_3,long_long param_4,ID param_5,undefined4 param_6)

{
  long lVar1;
  undefined8 uVar2;
  ID IVar3;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  undefined8 local_60;
  long local_58;
  long_long local_50;
  ID local_48;
  undefined4 local_3c;
  long local_38;
  long_long local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_38 = 0;
  local_30 = param_4;
  _objc_storeStrong(&local_38,param_5);
  IVar3 = local_18;
  uVar2 = local_28;
  if ((long)local_30 < 9) {
    local_80 = PTR___NSConcreteStackBlock_02578660;
    local_78 = 0xc2000000;
    local_74 = 0;
    local_70 = FUN_0101b0ec;
    local_68 = &DAT_02584640;
    local_50 = local_30;
    (*(code *)PTR__objc_retain_02578638)();
    lVar1 = local_38;
    local_60 = uVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = lVar1;
    local_48 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar3,PTR_s_fetchURL_allowRedirect_completio_026adcb0,uVar2,0,&local_80);
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_60,0);
    local_3c = 0;
  }
  else {
    if (local_38 != 0) {
      (**(code **)(local_38 + 0x10))(local_38,local_28,0);
    }
    local_3c = 1;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  return;
}

