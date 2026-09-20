// FUN_0178d754 @ 0178d754

void FUN_0178d754(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 local_40;
  long local_38;
  undefined8 local_30;
  ulong local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  uVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  local_38 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_40 = uVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  uVar2 = local_40;
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_identifier_026a4a88);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_setDisplayVersion_forPluginIdent_026b47a8,uVar2)
  ;
  (*(code *)PTR__objc_release_02578630)(uVar3);
  uVar4 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_dismissWithAnimated__0269e420);
  if ((uVar4 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_dismissWithAnimated__0269e420,1);
  }
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return;
}

