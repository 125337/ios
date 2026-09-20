// FUN_0082d1f4 @ 0082d1f4

void FUN_0082d1f4(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint local_54;
  long local_48;
  long local_30;
  long local_28;
  long local_20;
  long local_18;
  
  lVar2 = param_1 + 0x48;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  lVar3 = param_1 + 0x50;
  local_28 = lVar2;
  _objc_loadWeakRetained();
  bVar1 = false;
  local_54 = 1;
  local_30 = lVar3;
  if ((local_28 != 0) && (local_54 = 1, lVar3 != 0)) {
    _objc_getAssociatedObject(lVar3,&DAT_028cd1d7);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = true;
    lVar2 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_54 = (uint)lVar2 ^ 1;
    local_48 = lVar3;
  }
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  if ((local_54 & 1) == 0) {
    if (*(long *)(param_1 + 0x28) == 0) {
      _objc_setAssociatedObject(local_30,&DAT_028cd1d7,0,1);
      lVar2 = local_28;
      uVar5 = *(undefined8 *)(param_1 + 0x38);
      uVar4 = *(undefined8 *)(param_1 + 0x40);
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_lastPathComponent_026ca780);
      _objc_retainAutoreleasedReturnValue();
      FUN_0081501c(*(undefined8 *)(param_1 + 0x58),lVar2,&cf_decode_failed,uVar5,&cf___,&cf___,uVar4
                   ,*(undefined8 *)(param_1 + 0x20));
      (*(code *)PTR__objc_release_02578630)(uVar4);
    }
    else {
      FUN_0082bb10(*(undefined8 *)(param_1 + 0x58),local_28,local_30,*(undefined8 *)(param_1 + 0x28)
                   ,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x30),0);
      lVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(lVar2);
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

