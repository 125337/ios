// setFollowsGlobal: @ 015d6cc4

/* Function Stack Size: 0x14 bytes */

void WCRGlobalPageBackgroundStore::setFollowsGlobal_(ID param_1,SEL param_2,bool param_3)

{
  undefined *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  code *local_38;
  undefined *local_30;
  byte local_28;
  byte local_21;
  SEL local_20;
  ID local_18;
  
  local_21 = (byte)param_3;
  local_48 = PTR___NSConcreteStackBlock_02578660;
  local_40 = 0xc0000000;
  local_3c = 0;
  local_38 = FUN_015d6d40;
  local_30 = &DAT_025873a8;
  local_28 = local_21 & 1;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_updateConfiguration__026b0fd8,&local_48);
  return;
}

