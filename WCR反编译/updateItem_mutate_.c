// updateItem:mutate: @ 01ef1f34

/* Function Stack Size: 0x20 bytes */

void WCRefineToDoHTMLRepositoryViewController::updateItem_mutate_
               (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *local_b8;
  cfstringStruct *local_90;
  undefined *local_78;
  undefined *local_70;
  byte local_61;
  undefined *local_60;
  undefined *local_58;
  cfstringStruct *local_50;
  int local_44;
  long local_40;
  cfstringStruct *local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3,param_3,param_4,param_5);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  if (local_40 == 0) {
    local_44 = 1;
  }
  else {
    pcVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
    _objc_retainAutoreleasedReturnValue();
    local_90 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_90 = &::cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = local_90;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_61 = 0;
    local_b8 = puVar4;
    if (puVar4 == (undefined *)0x0) {
      local_b8 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_60 = local_b8;
    }
    local_61 = puVar4 == (undefined *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = local_b8;
    if ((local_61 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    for (local_70 = (undefined *)0x0; puVar2 = local_70, puVar3 = local_58,
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_count_0269cfe0), puVar2 < puVar3;
        local_70 = local_70 + 1) {
      puVar2 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_objectAtIndexedSubscript__0269cc78,local_70);
      _objc_retainAutoreleasedReturnValue();
      local_78 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      if (((ulong)puVar3 & 1) == 0) {
        local_44 = 0;
      }
      else {
        lVar5 = local_40;
        (**(code **)(local_40 + 0x10))(local_40,local_78);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_setObject_atIndexedSubscript__0269e970,lVar5,local_70);
        (*(code *)PTR__objc_release_02578630)(lVar5);
        local_44 = 2;
      }
      _objc_storeStrong(&local_78,0);
      if (local_44 != 0) break;
    }
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_reloadItems_026ae4d8);
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_50,0);
    local_44 = 0;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

