// FUN_00834b20 @ 00834b20

void FUN_00834b20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined8 *param_6)

{
  undefined *puVar1;
  undefined8 local_60 [3];
  undefined *local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableString_026cdfb0;
  local_40 = param_6;
  local_38 = param_5;
  local_30 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_string_0269cc38);
  _objc_retainAutoreleasedReturnValue();
  local_60[0] = 0;
  *local_40 = 0;
  *local_38 = 0;
  *local_30 = 0;
  local_48 = puVar1;
  FUN_008358a0(local_18,local_20,local_28,puVar1,0,local_60,local_30,local_38,local_40);
  puVar1 = local_48;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(puVar1);
  return;
}

