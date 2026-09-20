// FUN_01119250 @ 01119250

void FUN_01119250(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong local_68;
  undefined *local_48;
  ulong local_40;
  ulong local_38;
  ulong local_30;
  undefined *local_28;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  FUN_0110d24c();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_0111d264();
  _objc_retainAutoreleasedReturnValue();
  local_20 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = local_20;
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_30 = 0x10;
  uVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  local_68 = uVar2;
  if (local_30 < uVar2) {
    local_68 = local_30;
  }
  local_40 = local_68;
  local_38 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_substringToIndex__0269d6c0,local_68);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_stringWithFormat__0269cca8,&cf_private_friend_custom____jpg);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar3;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_48 = puVar5;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_URLByAppendingPathComponent_isDi_026a7b90,&cf_WCRefine,1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(puVar4);
  return;
}

