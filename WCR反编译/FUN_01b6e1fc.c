// FUN_01b6e1fc @ 01b6e1fc

void FUN_01b6e1fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  lVar4 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  bVar1 = false;
  if (lVar4 != 0) {
    puVar2 = PTR_WCRefineLocalEmoticonStore_026ce440;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineLocalEmoticonStore_026ce440,
               PTR_s_importData_fileName_intoPack_err_026abfa0,local_20,local_28,
               *(undefined8 *)(param_1 + 0x20),0);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = puVar2 != (undefined *)0x0;
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  if (bVar1) {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(uVar3);
    lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 8);
    *(long *)(lVar4 + 0x18) = *(long *)(lVar4 + 0x18) + 1;
    _objc_sync_exit(uVar3);
    (*(code *)PTR__objc_release_02578630)(uVar3);
  }
  _dispatch_group_leave(*(dispatch_group_t *)(param_1 + 0x30));
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return;
}

