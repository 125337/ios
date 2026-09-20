// FUN_01f9e970 @ 01f9e970

void FUN_01f9e970(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  undefined1 auStack_30 [8];
  undefined *local_28;
  long local_20;
  long local_18;
  
  puVar1 = PTR_WCRefineVoicePackPathPickerViewController_026cf178;
  local_20 = param_1;
  local_18 = param_1;
  _objc_alloc();
  puVar2 = puVar1;
  _NSHomeDirectory();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_initWithStartDirectory__026b98f0);
  local_28 = puVar1;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_50 = PTR___NSConcreteStackBlock_02578660;
  local_48 = 0xc2000000;
  local_44 = 0;
  local_40 = FUN_01f9eb28;
  local_38 = &DAT_0257c558;
  _objc_copyWeak(auStack_30,param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setOnPick__026a5c98,&local_50);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar3 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(lVar3);
  (*(code *)PTR__objc_release_02578630)(param_1);
  _objc_destroyWeak(auStack_30);
  _objc_storeStrong(&local_28,0);
  return;
}

