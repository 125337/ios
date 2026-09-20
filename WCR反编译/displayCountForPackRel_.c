// displayCountForPackRel: @ 010887f4

/* Function Stack Size: 0x18 bytes */

long_long WCRefineLocalEmoticonStore::displayCountForPackRel_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ID IVar3;
  ID IVar4;
  ulong local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar2 = local_30;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((((uVar2 & 1) == 0) ||
      (uVar2 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
      uVar2 == 0)) ||
     (uVar2 = local_30,
     (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,&cf___all__),
     (uVar2 & 1) != 0)) {
    IVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_listAllItemsSortMode__026ae2b0,0);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_18 = IVar4;
    (*(code *)PTR__objc_release_02578630)(IVar3);
  }
  else {
    uVar2 = local_30;
    FUN_01085b64();
    if ((uVar2 & 1) == 0) {
      IVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_listItemsInPack_sortMode__026ae348,local_30,0);
      _objc_retainAutoreleasedReturnValue();
      IVar4 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_18 = IVar4;
      (*(code *)PTR__objc_release_02578630)(IVar3);
    }
    else {
      IVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_listUngroupedItemsSortMode__026ae338,0);
      _objc_retainAutoreleasedReturnValue();
      IVar4 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_18 = IVar4;
      (*(code *)PTR__objc_release_02578630)(IVar3);
    }
  }
  _objc_storeStrong(&local_30,0);
  return local_18;
}

