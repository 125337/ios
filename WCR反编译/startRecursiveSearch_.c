// startRecursiveSearch: @ 019a3270

/* Function Stack Size: 0x18 bytes */

void WCRefineFileManagerViewController::startRecursiveSearch_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ID IVar4;
  ID IVar5;
  undefined *puVar6;
  ID IVar7;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  code *local_a8;
  undefined *local_a0;
  ID local_98;
  ID local_90;
  long local_88;
  undefined *local_80;
  ID local_78;
  byte local_70;
  undefined *local_68;
  byte local_59;
  ID local_58;
  uint local_4c;
  ID local_48;
  long local_40;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  lVar2 = local_38;
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_40 = lVar3;
  (*(code *)PTR__objc_release_02578630)(lVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setSearchText__026ba700,local_40);
  IVar5 = local_28;
  IVar4 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_searchGeneration_026b9d38);
  (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_setSearchGeneration__026b9d40,IVar4 + 1);
  IVar5 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_searchGeneration_026b9d38);
  lVar2 = local_40;
  local_48 = IVar5;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if (lVar2 != 0) {
    IVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_resolvedDirectory_026ba370);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_WCRFileManagerState_026cf1c8;
    local_58 = IVar5;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRFileManagerState_026cf1c8,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    local_59 = (byte)puVar6;
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_68 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setSearchHits__026ba708,puVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_applyFilter_026ae510);
    IVar7 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_searchQueue_026ba718);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = local_58;
    local_b8 = PTR___NSConcreteStackBlock_02578660;
    local_b0 = 0xc2000000;
    local_ac = 0;
    local_a8 = FUN_019a36a4;
    local_a0 = &DAT_025838f0;
    (*(code *)PTR__objc_retain_02578638)();
    IVar4 = local_28;
    local_98 = IVar5;
    local_78 = local_48;
    (*(code *)PTR__objc_retain_02578638)();
    lVar3 = local_40;
    local_90 = IVar4;
    local_70 = local_59 & 1;
    (*(code *)PTR__objc_retain_02578638)();
    puVar1 = local_68;
    local_88 = lVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_80 = puVar1;
    _dispatch_async(IVar7,&local_b8);
    (*(code *)PTR__objc_release_02578630)(IVar7);
    _objc_storeStrong(&local_80);
    _objc_storeStrong(&local_88,0);
    _objc_storeStrong(&local_90,0);
    _objc_storeStrong(&local_98,0);
    _objc_storeStrong(&local_68,0);
    _objc_storeStrong(&local_58,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setSearchHits__026ba708,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_applyFilter_026ae510);
  }
  local_4c = (uint)(lVar2 == 0);
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

