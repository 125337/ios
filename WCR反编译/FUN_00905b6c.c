// FUN_00905b6c @ 00905b6c

void FUN_00905b6c(long param_1,undefined1 param_2)

{
  undefined8 uVar1;
  dispatch_time_t dVar2;
  undefined *puVar3;
  undefined8 local_a0;
  undefined1 auStack_98 [48];
  undefined1 auStack_68 [48];
  long local_38;
  undefined1 local_29;
  long local_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  local_38 = param_1;
  local_29 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_expandedView_026a9f60);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_ballView_026a9f28);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  _memcpy(auStack_68,PTR__CGAffineTransformIdentity_025782d8,0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_expandedView_026a9f60);
  _objc_retainAutoreleasedReturnValue();
  _memcpy(auStack_98,auStack_68,0x30);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_setTransform__026caad0,auStack_98);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_expandedView_026a9f60);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  FUN_00901090();
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setWindowLevel__026caae8);
  dVar2 = _dispatch_time(0,2000000000);
  puVar3 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  local_a0 = uVar1;
  _dispatch_after(dVar2,puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_a0,0);
  return;
}

