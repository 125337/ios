// FUN_0024c108 @ 0024c108

void FUN_0024c108(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *local_48 [3];
  ulong local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_18;
  _objc_getAssociatedObject(local_18,DAT_026dfb78);
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar1;
  _objc_setAssociatedObject(local_18,DAT_026dfb78,0,3);
  puVar3 = PTR_WCRefineEmoticonGroupStore_026ce420;
  uVar2 = local_28;
  FUN_0025828c();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_createGroupNamed__026a0f90);
  _objc_retainAutoreleasedReturnValue();
  local_48[0] = puVar3;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar1 = local_30;
  if (local_48[0] == (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_R_1Y_TySY);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((uVar1 & 1) != 0) {
      uVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0);
      if (uVar1 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineEmoticonGroupStore_026ce420,PTR_s_moveMd5List_toGroupId__026a0f40,
                   local_30,local_48[0]);
      }
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__yeQeR_);
  }
  _objc_storeStrong(local_48);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

