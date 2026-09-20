// FUN_00f35878 @ 00f35878

void FUN_00f35878(long param_1)

{
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long local_68;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  bVar2 = false;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  _objc_sync_enter(uVar3);
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) & 1) == 0) {
    lVar5 = *(long *)(*(long *)(param_1 + 0x38) + 8);
    *(long *)(lVar5 + 0x18) = *(long *)(lVar5 + 0x18) + -1;
    lVar5 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
    if ((lVar5 != 0) || (*(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) == 0)) {
      *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 1;
      bVar2 = true;
    }
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  _objc_sync_exit(uVar3);
  (*(code *)PTR__objc_release_02578630)(uVar3);
  if ((!bVar1) && (bVar2)) {
    lVar4 = *(long *)(param_1 + 0x28);
    lVar5 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
    if (lVar5 == 0) {
      local_68 = 0;
    }
    else {
      local_68 = local_20;
    }
    (**(code **)(lVar4 + 0x10))(lVar4,local_68);
  }
  _objc_storeStrong(&local_20,0);
  return;
}

