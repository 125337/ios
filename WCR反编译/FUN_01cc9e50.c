// FUN_01cc9e50 @ 01cc9e50

void FUN_01cc9e50(long param_1)

{
  undefined8 uVar1;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_setText__026caa88,*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_defaultTitleForActionID__026c3610,*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setPlaceholder__0269e9c8);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  _objc_storeStrong(&local_20,0);
  return;
}

