// FUN_002f8e2c @ 002f8e2c

void FUN_002f8e2c(undefined8 param_1,undefined1 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined1 local_12;
  undefined1 local_11;
  
  local_20 = 0;
  local_12 = param_3;
  local_11 = param_2;
  _objc_storeStrong(&local_20,param_4);
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_getRed_green_blue_alpha__026ca660,&local_30,&local_38,&local_40,
             &local_48);
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
             &cf_g_ld_e_d_c_d___3f___3f___3f___3f_i__1f);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(puVar1);
  return;
}

