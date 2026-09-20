// FUN_019891bc @ 019891bc

ulong FUN_019891bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong local_58;
  undefined8 local_40;
  ulong local_38;
  long local_30;
  ulong local_28;
  
  local_38 = 0;
  local_30 = param_1;
  _objc_storeStrong(&local_38);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_3);
  uVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_objectForKeyedSubscript__0269d098);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar3 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_isDir);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar3);
  if (((uint)uVar2 & 1) != ((uint)uVar4 & 1)) {
    local_28 = 1;
    if ((uVar2 & 1) != 0) {
      local_28 = 0xffffffffffffffff;
    }
    goto LAB_0198958c;
  }
  if (*(long *)(param_1 + 0x20) == 1) {
    uVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_objectForKeyedSubscript__0269d098);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_date)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_58 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_compare__0269cd10);
    (*(code *)PTR__objc_release_02578630)(uVar3);
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  else if (*(long *)(param_1 + 0x20) == 2) {
    uVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_objectForKeyedSubscript__0269d098);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_size)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_58 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_compare__0269cd10);
    (*(code *)PTR__objc_release_02578630)(uVar3);
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  else {
    uVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_objectForKeyedSubscript__0269d098);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_name)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_58 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_localizedStandardCompare__0269e098);
    (*(code *)PTR__objc_release_02578630)(uVar3);
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    if (local_58 == 0xffffffffffffffff) {
      local_28 = 1;
      goto LAB_0198958c;
    }
    if (local_58 == 1) {
      local_28 = 0xffffffffffffffff;
      goto LAB_0198958c;
    }
  }
  local_28 = local_58;
LAB_0198958c:
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return local_28;
}

