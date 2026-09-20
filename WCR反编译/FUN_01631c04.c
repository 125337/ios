// FUN_01631c04 @ 01631c04

void FUN_01631c04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  cfstringStruct *local_90;
  undefined8 local_50;
  cfstringStruct *local_48;
  undefined4 local_3c;
  cfstringStruct *local_38;
  long local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  local_38 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_38,param_4);
  lVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_18 = 0;
    local_3c = 1;
  }
  else {
    pcVar2 = &cf_wcr_sf_vc_;
    (*(code *)PTR__objc_msgSend_02578628)
              (&cf_wcr_sf_vc_,PTR_s_stringByAppendingString__0269d398,local_30);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_20;
    uVar5 = local_28;
    pcVar3 = local_38;
    local_48 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_90 = &cf___nm;
    }
    else {
      local_90 = local_38;
    }
    FUN_01625a38(uVar4,uVar5,pcVar2,local_90,0);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_50 = uVar5;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_setObject_forKeyedSubscript__0269d248,&cf_controller,
               &cf__wcrCustomKind);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_setObject_forKeyedSubscript__0269d248,local_30,&cf__wcrCustomPayload);
    uVar5 = local_50;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar5;
    local_3c = 1;
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

