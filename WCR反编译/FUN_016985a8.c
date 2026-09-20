// FUN_016985a8 @ 016985a8

void FUN_016985a8(long param_1,ulong param_2,undefined8 param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long local_58 [3];
  long local_40;
  undefined8 local_38;
  ulong local_30;
  long local_28;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  local_40 = param_1;
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_tokens_026b29d8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar2);
  if (param_2 < uVar3) {
    lVar4 = *(long *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_tokens_026b29d8);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar7;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_58[0] = lVar5;
    (*(code *)PTR__objc_release_02578630)(lVar7);
    (*(code *)PTR__objc_release_02578630)(lVar4);
    lVar7 = local_58[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_length_0269cca0);
    if (lVar7 != 0) {
      lVar5 = local_58[0];
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58[0],PTR_s_rangeOfCharacterFromSet__0269db68,*(undefined8 *)(param_1 + 0x28)
                );
      lVar7 = local_58[0];
      bVar1 = false;
      if (lVar5 == 0x7fffffffffffffff) {
        puVar6 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSCharacterSet_026ce078,PTR_s_letterCharacterSet_026b2a30);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        bVar1 = lVar7 != 0x7fffffffffffffff;
        (*(code *)PTR__objc_release_02578630)(puVar6);
      }
      lVar7 = *(long *)(param_1 + 0x30);
      (*(code *)PTR__objc_msgSend_02578628)(lVar7,PTR_s_length_0269cca0);
      if (((lVar7 != 0) && ((**(byte **)(param_1 + 0x38) & 1) != 0)) && (bVar1)) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (*(undefined8 *)(param_1 + 0x30),PTR_s_appendString__0269ccb0,&cf_space_s_);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x30),PTR_s_appendString__0269ccb0,local_58[0]);
      *(bool *)*(undefined8 *)(param_1 + 0x38) = bVar1;
    }
    _objc_storeStrong(local_58,0);
  }
  return;
}

