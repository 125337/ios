// FUN_0197bea0 @ 0197bea0

void FUN_0197bea0(long param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  uint local_8c;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  byte local_50;
  undefined8 local_40;
  byte local_31;
  long local_30;
  long local_28;
  
  local_31 = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  local_30 = param_1;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_computeDirSize_token_cancelled__026ba258,*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30),&local_31);
  local_8c = 1;
  local_40 = uVar2;
  if ((local_31 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isCancelled_026a1c20);
    local_8c = (uint)uVar2;
  }
  local_31 = (byte)local_8c & 1;
  if ((local_8c & 1) == 0) {
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedLongLong__0269d7f8,
               local_40);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_setObject_forKey__026ca9e8,puVar3,*(undefined8 *)(param_1 + 0x28));
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  (*(code *)PTR__objc_retain_02578638)();
  _objc_sync_enter(uVar2);
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 0x18);
  (*(code *)PTR__objc_msgSend_02578628)
            (lVar4,PTR_s_objectForKeyedSubscript__0269d098,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  bVar1 = true;
  if (lVar4 != *(long *)(param_1 + 0x30)) {
    bVar1 = *(long *)(param_1 + 0x30) == 0;
  }
  (*(code *)PTR__objc_release_02578630)(lVar4);
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),PTR_s_removeObjectForKey__0269d700,
               *(undefined8 *)(param_1 + 0x28));
  }
  _objc_sync_exit(uVar2);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  puVar3 = PTR___dispatch_main_q_02578680;
  if (*(long *)(param_1 + 0x38) != 0) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_88 = PTR___NSConcreteStackBlock_02578660;
    local_80 = 0xc2000000;
    local_7c = 0;
    local_78 = FUN_0197c1f8;
    local_70 = &DAT_02582f18;
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = local_40;
    local_50 = local_31 & 1;
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    local_60 = uVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = uVar5;
    _dispatch_async(puVar3,&local_88);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_60,0);
  }
  return;
}

