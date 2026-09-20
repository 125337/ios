// FUN_015b7a44 @ 015b7a44

void FUN_015b7a44(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long local_88;
  long local_28;
  long local_20;
  long local_18;
  
  lVar3 = *(long *)(param_1 + 0x28);
  lVar1 = *(long *)(param_1 + 0x30);
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_wcr_backgroundWorkGeneration_026b0c10);
  if (lVar3 == lVar1) {
    uVar2 = *(ulong *)(param_1 + 0x30);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isUIAccessActive_026b0c08);
    if ((uVar2 & 1) != 0) {
      lVar1 = *(long *)(param_1 + 0x30);
      (*(code *)PTR__objc_msgSend_02578628)
                (lVar1,PTR_s_wcr_buildSearchIndexForDirectory_026b0d08,
                 *(undefined8 *)(param_1 + 0x20));
      _objc_retainAutoreleasedReturnValue();
      lVar4 = *(long *)(param_1 + 0x28);
      lVar3 = *(long *)(param_1 + 0x30);
      local_28 = lVar1;
      (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_wcr_backgroundWorkGeneration_026b0c10);
      if (lVar4 == lVar3) {
        uVar2 = *(ulong *)(param_1 + 0x30);
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isUIAccessActive_026b0c08);
        lVar1 = DAT_028e3ad8;
        if ((uVar2 & 1) != 0) {
          (*(code *)PTR__objc_retain_02578638)();
          _objc_sync_enter(lVar1);
          lVar3 = DAT_028e3ad8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (DAT_028e3ad8,PTR_s_objectForKeyedSubscript__0269d098,
                     *(undefined8 *)(param_1 + 0x20));
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_release_02578630)();
          if (lVar3 == 0) {
            if (local_28 == 0) {
              local_88 = *(long *)PTR____NSArray0___02578280;
            }
            else {
              local_88 = local_28;
            }
            (*(code *)PTR__objc_msgSend_02578628)
                      (DAT_028e3ad8,PTR_s_setObject_forKeyedSubscript__0269d248,local_88,
                       *(undefined8 *)(param_1 + 0x20));
          }
          _objc_sync_exit(lVar1);
          (*(code *)PTR__objc_release_02578630)(lVar1);
        }
      }
      _objc_storeStrong(&local_28,0);
    }
  }
  return;
}

