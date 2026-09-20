// FUN_00182714 @ 00182714

uint FUN_00182714(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  uint local_3c;
  undefined8 local_28;
  undefined8 local_20;
  long *local_18;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_18 = &DAT_028c8910;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0257a950);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  uVar1 = DAT_028c8908;
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028c8908,PTR_s_containsObject__0269cbb8,local_28);
  local_3c = 1;
  if ((uVar1 & 1) == 0) {
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_isEqualToString__0269ccc8,
               *(undefined8 *)PTR__UITableViewIndexSearch_02578208);
    local_3c = (uint)uVar2;
  }
  _objc_storeStrong(&local_28,0);
  return local_3c & 1;
}

