// FUN_00f84f9c @ 00f84f9c

void FUN_00f84f9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
                 undefined8 param_9)

{
  undefined *puVar1;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_48 = 0;
  local_40 = param_5;
  local_33 = param_8;
  local_32 = param_7;
  local_31 = param_6;
  local_30 = param_1;
  local_28 = param_2;
  local_20 = param_3;
  local_18 = param_4;
  _objc_storeStrong(&local_48,param_9);
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_getRed_green_blue_alpha__026ca660,&local_50,&local_58,&local_60,
             &local_68);
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
             &cf___1f___1f___1f___1f__d__d_d___1f___3f___3f___3f___3f);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_48,0);
  _objc_autoreleaseReturnValue(puVar1);
  return;
}

