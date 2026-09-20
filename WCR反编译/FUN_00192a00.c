// FUN_00192a00 @ 00192a00

void FUN_00192a00(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_58;
  undefined *local_50;
  undefined4 local_48;
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  
  local_30 = (undefined *)0x0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = (undefined *)0x0;
  _objc_storeStrong(&local_38,param_2);
  if ((((local_30 == (undefined *)0x0) || (local_38 == (undefined *)0x0)) ||
      (puVar1 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_section_0269e988),
      (long)puVar1 < 0)) ||
     (puVar1 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_row_0269e210),
     (long)puVar1 < 0)) {
    puVar1 = local_38;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = puVar1;
    local_48 = 1;
  }
  else {
    puVar2 = local_30;
    FUN_0018a9d0(local_30,0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
    puVar3 = local_38;
    local_50 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_section_0269e988);
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_numberWithInteger__0269e080,puVar3);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_objectForKeyedSubscript__0269d098);
    _objc_retainAutoreleasedReturnValue();
    local_58 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = local_58;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    puVar2 = local_38;
    if (((ulong)puVar1 & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = puVar2;
    }
    else {
      puVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_row_0269e210);
      puVar4 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_count_0269cfe0);
      puVar2 = local_38;
      puVar1 = local_58;
      if ((long)puVar3 < (long)puVar4) {
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_row_0269e210);
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_objectAtIndexedSubscript__0269cc78,puVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar1);
        puVar1 = local_38;
        if ((long)puVar2 < 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = puVar1;
        }
        else {
          puVar3 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_row_0269e210);
          puVar1 = local_38;
          local_28 = PTR__OBJC_CLASS___NSIndexPath_026ce288;
          if (puVar2 == puVar3) {
            (*(code *)PTR__objc_retain_02578638)();
            local_28 = puVar1;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_section_0269e988);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_28,PTR_s_indexPathForRow_inSection__0269e9a0,puVar2,puVar1);
            _objc_retainAutoreleasedReturnValue();
          }
        }
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = puVar2;
      }
    }
    local_48 = 1;
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

