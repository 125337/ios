// resetSearchIndexCache @ 014c5888

/* Function Stack Size: 0x10 bytes */

void WCRefineSearchManager::resetSearchIndexCache(ID param_1,SEL param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ID IVar3;
  ulong uVar4;
  long lVar5;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    uVar1 = *(ulong *)(param_1 + 0x30);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isValid_026a5838);
    if ((uVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x30),PTR_s_invalidate_026ca758);
    }
  }
  _objc_storeStrong(param_1 + 0x30);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_removeAllObjects_0269d508);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x50),PTR_s_removeAllObjects_0269d508);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x58),PTR_s_removeAllObjects_0269d508);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_removeAllObjects_0269d508);
  _objc_storeStrong(param_1 + 0x10,*(undefined8 *)PTR____NSArray0___02578280);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x28,0);
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_searchIndexFilePath_026af640);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_removeItemAtPath_error__0269f910,IVar3,0);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  uVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  uVar4 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if ((uVar4 & 1) != 0) {
    lVar5 = param_1 + 0x48;
    _objc_loadWeakRetained();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar5);
  }
  return;
}

