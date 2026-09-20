// rememberedLastAnnotateTool @ 0166e0f8

/* Function Stack Size: 0x10 bytes */

long_long WCRSuperFloatCropViewController::rememberedLastAnnotateTool(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_30;
  SEL local_28;
  ID local_20;
  undefined1 *local_18;
  
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_objectForKey__0269e048,&cf_WCRSFCropFSLastAnnotateTool);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (puVar1 == (undefined1 *)0x0) {
    local_18 = (undefined1 *)0x0;
  }
  else {
    local_70 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_integerForKey__026a9600,&cf_WCRSFCropFSLastAnnotateTool);
    if (10 < (long)local_70) {
      local_70 = (undefined1 *)((long)&MACH_HEADER.cpusubtype + 2);
    }
    if ((long)local_70 < 1) {
      local_78 = (undefined1 *)0x0;
    }
    else {
      local_78 = local_70;
    }
    local_18 = local_78;
  }
  _objc_storeStrong(&local_30,0);
  return (long_long)local_18;
}

