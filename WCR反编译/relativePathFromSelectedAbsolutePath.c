// relativePathFromSelectedAbsolutePath @ 01829f44

/* Function Stack Size: 0x10 bytes */

ID WCRefineAvatarFrameLibraryViewController::relativePathFromSelectedAbsolutePath
             (ID param_1,SEL param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ID IVar4;
  long local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  if (*(long *)(param_1 + (long)_selectedFramePath) != 0) {
    lVar1 = *(long *)(param_1 + (long)_selectedFramePath);
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
    if (lVar1 != 0) {
      lVar2 = 9;
      _NSSearchPathForDirectoriesInDomains(9,1,1);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_30 = lVar1;
      (*(code *)PTR__objc_release_02578630)(lVar2);
      if ((*(long *)(local_20 + (long)_selectedFramePath) == 0) || (local_30 == 0)) {
LAB_0182a0b0:
        IVar4 = *(ID *)(local_20 + (long)_selectedFramePath);
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = IVar4;
      }
      else {
        uVar3 = *(ulong *)(local_20 + (long)_selectedFramePath);
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_hasPrefix__0269d320,local_30);
        if ((uVar3 & 1) == 0) goto LAB_0182a0b0;
        IVar4 = *(ID *)(local_20 + (long)_selectedFramePath);
        lVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
        (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_substringFromIndex__0269d120,lVar1 + 1);
        _objc_retainAutoreleasedReturnValue();
        local_18 = IVar4;
      }
      _objc_storeStrong(&local_30,0);
      goto LAB_0182a0f4;
    }
  }
  local_18 = 0;
LAB_0182a0f4:
  _objc_autoreleaseReturnValue();
  return local_18;
}

