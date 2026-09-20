// FUN_0092d390 @ 0092d390

void FUN_0092d390(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (lVar1 != 0x7fffffffffffffff) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uVar5 = *(undefined8 *)PTR__NSForegroundColorAttributeName_02578070;
    puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemRedColor_0269ee10);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_20;
    puVar3 = PTR_s_range_0269ef50;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar4,PTR_s_addAttribute_value_range__026a1d88,uVar5,puVar2,lVar1,puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  _objc_storeStrong(&local_20,0);
  return;
}

