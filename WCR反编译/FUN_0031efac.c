// FUN_0031efac @ 0031efac

void FUN_0031efac(undefined8 *param_1,int *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 *local_38;
  int *local_30;
  undefined8 *local_28;
  
  iVar1 = *param_2;
  local_38 = param_1;
  local_30 = param_2;
  local_28 = param_1;
  if (iVar1 == 0) {
    uStack_48 = (*(undefined8 **)(param_2 + 2))[1];
    local_50 = **(undefined8 **)(param_2 + 2);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSValue_026ce1f0;
    local_58 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,uStack_48,PTR__OBJC_CLASS___NSValue_026ce1f0,
               PTR_s_valueWithCGPoint__0269e328);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _CFArrayAppendValue(*local_38,local_58);
    local_38[2] = uStack_48;
    local_38[1] = local_50;
    local_38[4] = uStack_48;
    local_38[3] = local_50;
    *(undefined1 *)(local_38 + 5) = 1;
    _objc_storeStrong(&local_58,0);
  }
  else if (iVar1 == 1) {
    FUN_0031f2a0(**(undefined8 **)(param_2 + 2),(*(undefined8 **)(param_2 + 2))[1],param_1);
  }
  else if (iVar1 == 2) {
    FUN_0031f5e0(param_1[1],param_1[2],**(undefined8 **)(param_2 + 2),
                 (*(undefined8 **)(param_2 + 2))[1],*(undefined8 *)(*(long *)(param_2 + 2) + 0x10),
                 *(undefined8 *)(*(long *)(param_2 + 2) + 0x18),param_1,0);
  }
  else if (iVar1 == 3) {
    FUN_0031f804(param_1[1],param_1[2],**(undefined8 **)(param_2 + 2),
                 (*(undefined8 **)(param_2 + 2))[1],*(undefined8 *)(*(long *)(param_2 + 2) + 0x10),
                 *(undefined8 *)(*(long *)(param_2 + 2) + 0x18),
                 *(undefined8 *)(*(long *)(param_2 + 2) + 0x20),
                 *(undefined8 *)(*(long *)(param_2 + 2) + 0x28),param_1,0);
  }
  else if ((iVar1 == 4) && ((*(byte *)(param_1 + 5) & 1) != 0)) {
    FUN_0031f2a0(param_1[3],param_1[4],param_1);
    local_38[2] = local_38[4];
    local_38[1] = local_38[3];
  }
  return;
}

