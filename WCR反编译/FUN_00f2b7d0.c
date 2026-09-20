// FUN_00f2b7d0 @ 00f2b7d0

void FUN_00f2b7d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_48;
  ulong local_40;
  long local_38;
  undefined8 local_30;
  ulong local_28;
  ulong local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_20;
  local_38 = param_1;
  local_30 = param_4;
  FUN_00f29cf4();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_28;
  local_40 = uVar1;
  FUN_00f29cf4();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_40;
  local_48 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if ((((uVar1 != 0) &&
       (uVar1 = local_48, (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0),
       uVar1 != 0)) &&
      (uVar1 = local_48,
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isEqualToString__0269ccc8,&cf___all__),
      (uVar1 & 1) == 0)) &&
     ((uVar1 = local_48,
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_isEqualToString__0269ccc8,&cf___ungrouped__), (uVar1 & 1) == 0 &&
      (uVar1 = local_40,
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_isEqualToString__0269ccc8,&cf_custom_emoticon_pid), (uVar1 & 1) == 0
      )))) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_setObject_forKeyedSubscript__0269d248,local_48,
               local_40);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return;
}

