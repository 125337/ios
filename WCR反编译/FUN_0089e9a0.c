// FUN_0089e9a0 @ 0089e9a0

void FUN_0089e9a0(undefined8 param_1)

{
  undefined *puVar1;
  char *pcVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  long local_108;
  long local_f8;
  ulong local_80;
  undefined *local_60;
  char *local_58;
  char *local_50;
  char *local_48;
  undefined *local_30;
  undefined8 local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = "MMInputToolView";
  local_30 = puVar1;
  _objc_getClass();
  pcVar3 = "SelectAttachmentViewController";
  local_48 = pcVar2;
  _objc_getClass();
  pcVar2 = "CUtility";
  local_50 = pcVar3;
  _objc_getClass();
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
  local_58 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
  _objc_retainAutoreleasedReturnValue();
  local_60 = puVar1;
  for (local_80 = 0; local_80 < 0x11; local_80 = local_80 + 1) {
    lVar5 = local_80 * 0x18;
    local_f8 = *(long *)(&DAT_026f48f8 + lVar5);
    _objc_getClass();
    lVar4 = *(long *)(&DAT_026f4900 + lVar5);
    _sel_registerName();
    if ((local_f8 == 0) || (lVar4 == 0)) {
      local_f8 = 0;
    }
    else {
      _class_getInstanceMethod(local_f8,lVar4);
    }
    if (local_f8 == 0) {
      local_108 = 0;
    }
    else {
      _method_getImplementation();
      local_108 = local_f8;
    }
    FUN_008a0634();
    *(long *)(&DAT_026f4908 + lVar5) = local_108;
  }
  _objc_storeStrong(local_80 - 0x11,&local_60);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

