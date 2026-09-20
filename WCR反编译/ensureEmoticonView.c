// ensureEmoticonView @ 01c3668c

/* Function Stack Size: 0x10 bytes */

ID WCRNameplateLibraryCell::ensureEmoticonView(ID param_1,SEL param_2)

{
  char *pcVar1;
  ID IVar2;
  ID IVar3;
  undefined8 in_d0;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  char *local_38;
  char *local_30;
  SEL local_28;
  ID local_20;
  char *local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  if (*(long *)(param_1 + (long)_emoticonView) == 0) {
    pcVar1 = "MMEmoticonView";
    _objc_getClass();
    local_30 = pcVar1;
    if (pcVar1 == (char *)0x0) {
      local_18 = (char *)0x0;
    }
    else {
      _objc_alloc();
      IVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_previewHost_026c1a00);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)
                (in_d0,in_d1,in_d2,in_d3,pcVar1,PTR_s_initWithFrame__026ca6e8);
      local_38 = pcVar1;
      (*(code *)PTR__objc_release_02578630)(IVar2);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_setTag__026caa80,_WCR_NAMEPLATE_CONTENT_TAG);
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setUserInteractionEnabled__026caad8,0);
      IVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_previewHost_026c1a00);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_38;
      IVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_imageView_0269f230);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_insertSubview_aboveSubview__026ca740,pcVar1)
      ;
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(IVar2);
      _objc_storeStrong(local_20 + (long)_emoticonView,local_38);
      pcVar1 = local_38;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar1;
      _objc_storeStrong(&local_38,0);
    }
  }
  else {
    pcVar1 = *(char **)(param_1 + (long)_emoticonView);
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar1;
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

