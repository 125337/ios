// FUN_017b55d4 @ 017b55d4

void FUN_017b55d4(long param_1)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  lVar2 = *(long *)(param_1 + 0x20);
  _objc_getAssociatedObject(lVar2,&DAT_028e4228);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_1 + 0x28);
  (*(code *)PTR__objc_release_02578630)();
  if (lVar2 == lVar4) {
    uVar3 = *(ulong *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isViewLoaded_0269cde0);
    bVar1 = true;
    if ((uVar3 & 1) != 0) {
      lVar4 = *(long *)(param_1 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      bVar1 = lVar2 == 0;
      (*(code *)PTR__objc_release_02578630)(lVar2);
      (*(code *)PTR__objc_release_02578630)(lVar4);
    }
    if (!bVar1) {
      FUN_017b2b64(*(undefined8 *)(param_1 + 0x20),&cf_WCPluginsViewControllerscheduledprune);
    }
  }
  return;
}

