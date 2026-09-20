// FUN_00f7e9d8 @ 00f7e9d8

void FUN_00f7e9d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  long local_40;
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
  lVar1 = local_20;
  local_38 = param_1;
  local_30 = param_4;
  FUN_00f7e630();
  _objc_retainAutoreleasedReturnValue();
  local_40 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  uVar3 = local_28;
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar3 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x20),PTR_s_setObject_forKeyedSubscript__0269d248,
                 local_28,local_40);
    }
  }
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return;
}

