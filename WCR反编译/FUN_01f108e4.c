// FUN_01f108e4 @ 01f108e4

void FUN_01f108e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong local_40;
  long local_38;
  undefined8 local_30;
  ulong local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  uVar2 = local_28;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_38 = param_1;
  local_30 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) == 0) ||
     (uVar3 = local_28,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_28,PTR_s_hasPrefix__0269d320,*(undefined8 *)(param_1 + 0x20)),
     uVar2 = local_28, (uVar3 & 1) == 0)) {
    if (local_20 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x28),PTR_s_setObject_forKeyedSubscript__0269d248,
                 local_28,local_20);
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = uVar2;
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_length_0269cca0);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_substringFromIndex__0269d120,uVar4);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_stringByAppendingString__0269d398);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x28),PTR_s_setObject_forKeyedSubscript__0269d248,uVar5,
               local_20);
    (*(code *)PTR__objc_release_02578630)(uVar5);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return;
}

