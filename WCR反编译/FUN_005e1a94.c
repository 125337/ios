// FUN_005e1a94 @ 005e1a94

byte FUN_005e1a94(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  ulong local_30;
  undefined4 local_24;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 0;
    local_24 = 1;
    goto LAB_005e1cd8;
  }
  uVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = &cf_MoreViewController;
  local_30 = uVar2;
  _NSClassFromString();
  if (pcVar3 == (cfstringStruct *)0x0) {
LAB_005e1bb4:
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_rangeOfString__0269d838,&cf_PluginMore);
    bVar1 = true;
    if (uVar2 == 0x7fffffffffffffff) {
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_rangeOfString__0269d838,&cf_PluginManagement);
      bVar1 = uVar2 != 0x7fffffffffffffff;
    }
    if (bVar1) {
      local_11 = 0;
    }
    else {
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_containsString__0269d0b0,&cf_MoreViewController);
      local_11 = (byte)uVar2 & 1;
    }
  }
  else {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isKindOfClass__0269cd68,pcVar3);
    if ((uVar2 & 1) == 0) goto LAB_005e1bb4;
    local_11 = 1;
  }
  local_24 = 1;
  _objc_storeStrong(&local_30,0);
LAB_005e1cd8:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

