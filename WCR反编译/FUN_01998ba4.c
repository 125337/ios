// FUN_01998ba4 @ 01998ba4

void FUN_01998ba4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  cfstringStruct *local_60;
  undefined8 local_58;
  long local_50;
  undefined8 local_48;
  long local_40;
  long local_38;
  long local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  lVar2 = *(long *)(param_1 + 0x20);
  local_40 = param_1;
  local_38 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_count_0269cfe0);
  local_50 = lVar2 - *(long *)(param_1 + 0x30);
  local_58 = uVar5;
  local_30 = local_50;
  local_28 = uVar5;
  local_20 = uVar5;
  local_18 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_subarrayWithRange__0269d848,uVar5,local_50);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_WCRFileManagerState_026cf1c8;
  local_48 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRFileManagerState_026cf1c8,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  local_60 = &cf_yR;
  if (*(long *)(param_1 + 0x38) != 2) {
    local_60 = &cf_Y6R;
  }
  (*(code *)PTR__objc_retain_02578638)();
  puVar1 = PTR_WCRefineHelper_026ce000;
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_count_0269cfe0);
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&cf___);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showModernToast__0269ce78);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_updateBottomBarBadge_026ba2b8);
  (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_1 + 0x28),PTR_s_reload_026af6c8);
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_48,0);
  return;
}

