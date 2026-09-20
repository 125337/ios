// FUN_0092d0e8 @ 0092d0e8

void FUN_0092d0e8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
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
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    lVar1 = local_20;
    puVar2 = PTR_s_range_0269ef50;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar4,PTR_s_addAttribute_value_range__026a1d88,uVar5,uVar3,lVar1,puVar2);
  }
  _objc_storeStrong(&local_20,0);
  return;
}

