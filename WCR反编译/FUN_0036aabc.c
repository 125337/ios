// FUN_0036aabc @ 0036aabc

void FUN_0036aabc(long param_1)

{
  undefined8 uVar1;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_mainFrame_026a2610);
  _objc_retainAutoreleasedReturnValue();
  FUN_00367110();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_mainFrame_026a2610);
  _objc_retainAutoreleasedReturnValue();
  FUN_00367110();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_tableView_0269e378);
  _objc_retainAutoreleasedReturnValue();
  FUN_00367970();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if (*(long *)(param_1 + 0x28) != 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0);
  }
  _objc_storeStrong(&local_20,0);
  return;
}

