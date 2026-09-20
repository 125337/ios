// cancelTask @ 01716260

/* Function Stack Size: 0x10 bytes */

void ToastManager::cancelTask(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  ID local_48;
  byte local_39;
  ID local_38;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_currentTask_026b3988);
  _objc_retainAutoreleasedReturnValue();
  local_39 = 0;
  bVar1 = false;
  if (param_1 != 0) {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_currentTask_026b3988);
    _objc_retainAutoreleasedReturnValue();
    local_39 = 1;
    local_38 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = IVar2 == 0;
  }
  if ((local_39 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  (*(code *)PTR__objc_release_02578630)(param_1);
  if (bVar1) {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_currentTask_026b3988);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  puVar3 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_18;
  local_68 = PTR___NSConcreteStackBlock_02578660;
  local_60 = 0xc2000000;
  local_5c = 0;
  local_58 = FUN_017164f0;
  local_50 = &DAT_02578c20;
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = IVar2;
  _dispatch_async(puVar3,&local_68);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_48,0);
  return;
}

