// FUN_01cc9f9c @ 01cc9f9c

void FUN_01cc9f9c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_40;
  uint local_34;
  long local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  lVar2 = param_1 + 0x30;
  local_28 = param_1;
  _objc_loadWeakRetained();
  local_30 = lVar2;
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_textFields_026ac830);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    lVar1 = local_30;
    uVar4 = local_40;
    FUN_01cca0ec();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (lVar1,PTR_s_applyRenameText_forActionID__026c3618,uVar4,
               *(undefined8 *)(param_1 + 0x28));
    (*(code *)PTR__objc_release_02578630)(uVar4);
    _objc_storeStrong(&local_40,0);
  }
  local_34 = (uint)(lVar2 == 0);
  _objc_storeStrong(&local_30,0);
  if (local_34 == 0) {
    local_34 = 0;
  }
  _objc_storeStrong(&local_20,0);
  return;
}

