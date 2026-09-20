// FUN_0082e450 @ 0082e450

byte FUN_0082e450(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  char *pcVar6;
  undefined *local_50;
  ulong local_48;
  ulong local_40 [3];
  uint local_24;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar3 = local_20;
  if (local_20 == 0) {
    local_11 = 0;
    local_24 = 1;
    goto LAB_0082e8d4;
  }
  puVar2 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar3 & 1) != 0) {
    local_11 = 0;
    local_24 = 1;
    goto LAB_0082e8d4;
  }
  uVar3 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  local_40[0] = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_hasPrefix__0269d320,&cf_WCRefine);
  if (((uVar3 & 1) == 0) &&
     (uVar4 = local_40[0],
     (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_hasPrefix__0269d320,&cf_WCR),
     uVar3 = local_20, (uVar4 & 1) == 0)) {
    puVar2 = PTR__OBJC_CLASS___UISearchController_026ce9b8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UISearchController_026ce9b8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((uVar3 & 1) == 0) &&
       (uVar3 = local_40[0],
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_40[0],PTR_s_containsString__0269d0b0,&cf_SearchController), (uVar3 & 1) == 0
       )) {
      uVar3 = local_20;
      _object_getClass();
      _class_getImageName();
      local_48 = uVar3;
      if (uVar3 != 0) {
        puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithUTF8String__0269fd30,uVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_50 = puVar5;
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_containsString__0269d0b0,&cf_WCRefine);
        bVar1 = ((ulong)puVar2 & 1) != 0;
        if (bVar1) {
          local_11 = 1;
        }
        local_24 = (uint)bVar1;
        _objc_storeStrong(&local_50,0);
        if (local_24 != 0) goto LAB_0082e8b4;
      }
      pcVar6 = "MMUIViewController";
      _objc_getClass();
      if ((pcVar6 == (char *)0x0) ||
         (uVar3 = local_20,
         (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isKindOfClass__0269cd68,pcVar6),
         (uVar3 & 1) == 0)) {
        uVar3 = local_20;
        FUN_00826364();
        _objc_retainAutoreleasedReturnValue();
        local_11 = uVar3 != 0;
        (*(code *)PTR__objc_release_02578630)();
        local_24 = 1;
      }
      else {
        local_11 = 0;
        local_24 = 1;
      }
    }
    else {
      local_11 = 0;
      local_24 = 1;
    }
  }
  else {
    local_11 = 1;
    local_24 = 1;
  }
LAB_0082e8b4:
  _objc_storeStrong(local_40,0);
LAB_0082e8d4:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

