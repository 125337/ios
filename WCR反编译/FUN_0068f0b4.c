// FUN_0068f0b4 @ 0068f0b4

void FUN_0068f0b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long local_68;
  long local_50;
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulong local_30;
  long local_28;
  
  local_30 = 0;
  local_28 = param_1;
  _objc_storeStrong(&local_30);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  lVar2 = *(long *)(param_1 + 0x20);
  local_48 = param_1;
  local_40 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_objectForKeyedSubscript__0269d098,local_30);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  FUN_0068b784();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  FUN_0067d82c();
  _objc_retainAutoreleasedReturnValue();
  local_50 = lVar4;
  (*(code *)PTR__objc_release_02578630)(lVar3);
  (*(code *)PTR__objc_release_02578630)(lVar2);
  lVar3 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
  if (lVar3 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x28),PTR_s_setObject_forKey__026ca9e8,local_50,local_38);
    puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    uVar5 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,&cf_sid);
    bVar1 = (uVar5 & 1) != 0;
    if (bVar1) {
      local_68 = local_50;
      FUN_0068f488();
      _objc_retainAutoreleasedReturnValue();
    }
    (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_stringWithFormat__0269cca8,&cf______);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_addObject__0269d180);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
  }
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return;
}

