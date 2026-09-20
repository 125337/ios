// wcRefineSendZipToFileHelper: @ 00fae1cc

/* Function Stack Size: 0x18 bytes */

void WCRefineHelper::wcRefineSendZipToFileHelper_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  ID IVar2;
  dispatch_time_t dVar3;
  undefined *puVar4;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  long local_40;
  double local_38;
  undefined1 local_2d;
  undefined4 local_2c;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_2c = 1;
  }
  else {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_wcr_sendFileAtPathToFileHelper_d_026acf80,local_28,
               &cf_WCRefineBackup_zip);
    local_2d = (undefined1)IVar2;
    local_38 = 5.0;
    if ((IVar2 & 1) == 0) {
      local_38 = DAT_02323c68;
    }
    dVar3 = _dispatch_time(0,(long)(local_38 * 1000000000.0));
    puVar4 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_28;
    local_60 = PTR___NSConcreteStackBlock_02578660;
    local_58 = 0xc2000000;
    local_54 = 0;
    local_50 = FUN_00fae354;
    local_48 = &DAT_0257a800;
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = lVar1;
    _dispatch_after(dVar3,puVar4,&local_60);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_storeStrong(&local_40,0);
    local_2c = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

