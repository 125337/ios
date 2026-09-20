// FUN_001a4984 @ 001a4984

void FUN_001a4984(undefined8 param_1,undefined8 param_2,byte param_3,undefined8 param_4)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *local_58;
  uint local_50;
  byte local_49;
  long local_48;
  undefined8 local_30;
  byte local_21;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_30 = 0;
  local_21 = param_3;
  _objc_storeStrong(&local_30,param_4);
  local_49 = 0;
  bVar1 = true;
  if (local_18 != 0) {
    lVar2 = local_20;
    FUN_00184b18();
    _objc_retainAutoreleasedReturnValue();
    local_49 = 1;
    local_48 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = lVar2 == 0;
  }
  if ((local_49 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  if (!bVar1) {
    puVar3 = PTR_WCRefineContactsPackAvatarPickerCoordinator_026ce3b8;
    _objc_alloc_init();
    local_58 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setPresenter__0269fdb0,local_18);
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setSectionKey__0269fdb8,local_20);
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setDark__0269fdc0,local_21 & 1);
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setCompletion__0269fdc8,local_30);
    _objc_setAssociatedObject(local_18,&DAT_028c89b2,local_58,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_presentPhotoPicker_0269fdd0);
    _objc_storeStrong(&local_58,0);
  }
  local_50 = (uint)bVar1;
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

