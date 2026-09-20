// FUN_01689b2c @ 01689b2c

/* WARNING: Type propagation algorithm not settling */

void FUN_01689b2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *local_38;
  long local_30;
  long local_28 [3];
  
  local_28[1] = 0;
  local_28[2] = param_1;
  _objc_storeStrong(local_28 + 1);
  local_28[0] = 0;
  _objc_storeStrong(local_28,param_3);
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
             &cf_____Content_Disposition_form_data_name_______);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  local_38 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_dataUsingEncoding__026a12e8,4);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_appendData__026a9df8);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(&local_38);
  _objc_storeStrong(local_28,0);
  _objc_storeStrong(local_28 + 1,0);
  return;
}

