// FUN_0023bc38 @ 0023bc38

void FUN_0023bc38(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_68 [3];
  byte local_49;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_30 = 0;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_30,param_4);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_6);
  puVar1 = &local_48;
  local_48 = 0;
  _objc_storeStrong(puVar1,param_7);
  local_49 = (byte)puVar1;
  FUN_0023beec();
  local_68[0] = 0;
  uVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_valueForKey__0269d128,&cf_m_brandTimelineViewController);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_68[0];
  local_68[0] = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar3);
  uVar3 = local_68[0];
  FUN_0023c768(local_68[0],local_49 & 1);
  if ((uVar3 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_setValue_forKey__0269d300,0,&cf_m_brandTimelineViewController);
  }
  (*DAT_028c9298)(local_18,local_20,local_28,local_30,local_38,local_40,local_48);
  _objc_storeStrong(local_68);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return;
}

