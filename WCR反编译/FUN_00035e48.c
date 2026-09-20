// FUN_00035e48 @ 00035e48

/* WARNING: Type propagation algorithm not settling */

void FUN_00035e48(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_50;
  int local_48;
  long local_38;
  undefined8 local_30;
  ulong local_28 [3];
  
  local_28[1] = 0;
  local_28[2] = param_1;
  _objc_storeStrong(local_28 + 1);
  local_28[0] = 0;
  _objc_storeStrong(local_28,param_3);
  uVar3 = local_28[0];
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_38 = param_1;
  local_30 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar3 & 1) == 0) {
    local_48 = 1;
    goto LAB_0003608c;
  }
  uVar3 = local_28[0];
  (*(code *)PTR__objc_msgSend_02578628)(local_28[0],PTR_s_objectForKeyedSubscript__0269d098,&cf_key)
  ;
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  FUN_0003102c();
  _objc_retainAutoreleasedReturnValue();
  local_50 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar3);
  uVar3 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
  if (uVar3 == 0) {
LAB_00035fd0:
    local_48 = 1;
  }
  else {
    uVar3 = *(ulong *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_containsObject__0269cbb8,local_50);
    if ((uVar3 & 1) != 0) goto LAB_00035fd0;
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_addObject__0269d180,local_50);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x28),PTR_s_addObject__0269d180,local_28[0]);
    local_48 = 0;
  }
  _objc_storeStrong(&local_50,0);
  if (local_48 == 0) {
    local_48 = 0;
  }
LAB_0003608c:
  _objc_storeStrong(local_28);
  _objc_storeStrong(local_28 + 1,0);
  return;
}

