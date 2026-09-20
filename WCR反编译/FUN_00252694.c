// FUN_00252694 @ 00252694

void FUN_00252694(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  cfstringStruct *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar2 = local_18;
  _objc_getAssociatedObject(local_18,DAT_026dfbc0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar2;
  _objc_setAssociatedObject(local_18,DAT_026dfbc0,0,3);
  uVar2 = local_30;
  puVar4 = PTR_WCRefineEmoticonGroupStore_026ce420;
  uVar3 = local_28;
  FUN_0025828c();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_renameGroupId_toName__026a10a8,uVar2);
  (*(code *)PTR__objc_release_02578630)(uVar3);
  pcVar1 = &cf___TT;
  if (((ulong)puVar4 & 1) == 0) {
    pcVar1 = &cf__TT1Y_;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,pcVar1);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

