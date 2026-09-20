// FUN_001a76d4 @ 001a76d4

void FUN_001a76d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  long local_b0;
  undefined8 local_70;
  long local_68 [3];
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_2c;
  long local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_38 = 0;
  local_2c = param_4;
  _objc_storeStrong(&local_38,param_5);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_6);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_7);
  lVar1 = local_28;
  FUN_001b0414();
  _objc_retainAutoreleasedReturnValue();
  local_50 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_objectForKeyedSubscript__0269d098,&cf_query);
  _objc_retainAutoreleasedReturnValue();
  local_b0 = lVar1;
  if (lVar1 == 0) {
    local_b0 = local_28;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_68[0] = local_b0;
  (*(code *)PTR__objc_release_02578630)(lVar1);
  uVar2 = local_40;
  lVar1 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_50,PTR_s_objectForKeyedSubscript__0269d098,&cf_contact);
  _objc_retainAutoreleasedReturnValue();
  FUN_001b2c48();
  _objc_retainAutoreleasedReturnValue();
  local_70 = uVar2;
  (*(code *)PTR__objc_release_02578630)(lVar1);
  (*DAT_028c8a38)(local_18,local_20,local_68[0],local_2c,local_38,local_70,local_48);
  _objc_storeStrong(&local_70);
  _objc_storeStrong(local_68,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  return;
}

