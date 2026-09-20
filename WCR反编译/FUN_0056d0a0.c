// FUN_0056d0a0 @ 0056d0a0

void FUN_0056d0a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_5;
  _objc_storeStrong(&local_20);
  uVar3 = *(ulong *)(param_5 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_5 + 0x20),PTR_s_bounds_026ca548);
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,param_2,param_3,param_4,uVar3,PTR_s_drawViewHierarchyInRect_afterScr_0269e2f8,0
            );
  if ((uVar3 & 1) == 0) {
    uVar1 = *(undefined8 *)(param_5 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_CGContext_026a48e0);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_renderInContext__0269e300,uVar2);
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  _objc_storeStrong(&local_20,0);
  return;
}

