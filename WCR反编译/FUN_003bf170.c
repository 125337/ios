// FUN_003bf170 @ 003bf170

/* WARNING: Removing unreachable block (ram,0x003bf37c) */
/* WARNING: Removing unreachable block (ram,0x003bf35c) */

void FUN_003bf170(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  byte bVar1;
  undefined *puVar3;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 *puVar2;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_30 = 0;
  local_28 = param_3;
  local_20 = param_2;
  _objc_storeStrong(&local_30,param_4);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_6);
  puVar2 = &local_48;
  local_48 = 0;
  _objc_storeStrong(puVar2,param_7);
  bVar1 = (byte)puVar2;
  FUN_003bf600();
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
             &cf_brand_service_openforce_native__daff_ready__d);
  _objc_retainAutoreleasedReturnValue();
  _WCRefineCrashReporterBreadcrumb();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if ((bVar1 & 1) != 0) {
    DAT_028ca168 = 1;
    _NSLog(&cf__wcr__grouping_forcenativeBrandServiceSessionVC);
  }
  if (DAT_028ca158 != (code *)0x0) {
    (*DAT_028ca158)(local_18,local_20,local_28,local_30,local_38,local_40,local_48);
  }
  if ((bVar1 & 1) != 0) {
    DAT_028ca168 = 0;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_18,0);
  return;
}

