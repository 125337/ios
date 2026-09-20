// FUN_00862264 @ 00862264

void FUN_00862264(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_48;
  undefined *local_40 [3];
  undefined *local_28;
  int local_1c;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 == 0) {
    local_1c = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithObject__0269d538,local_18);
    _objc_retainAutoreleasedReturnValue();
    local_28 = puVar1;
    do {
      puVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_count_0269cfe0);
      if (puVar1 == (undefined *)0x0) {
        local_1c = 0;
        break;
      }
      puVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_lastObject_0269d200);
      _objc_retainAutoreleasedReturnValue();
      local_40[0] = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_removeLastObject_0269e830);
      puVar1 = local_40[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_tag_026cab98);
      if (puVar1 == (undefined *)0x24f6dc) {
        puVar1 = local_40[0];
        FUN_008571ec(0);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___WKWebView_026ce4e8;
        local_48 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___WKWebView_026ce4e8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
        if (((ulong)puVar1 & 1) != 0) {
          FUN_0081fd6c(local_48);
        }
        local_1c = 1;
        _objc_storeStrong(&local_48,0);
      }
      else {
        puVar1 = local_40[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_subviews_026cab40);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar1);
        puVar1 = local_28;
        if (puVar2 != (undefined *)0x0) {
          puVar2 = local_40[0];
          (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_subviews_026cab40);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObjectsFromArray__0269d540);
          (*(code *)PTR__objc_release_02578630)(puVar2);
        }
        local_1c = 0;
      }
      _objc_storeStrong(local_40,0);
    } while (local_1c == 0);
    _objc_storeStrong(local_1c,&local_28,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

