// FUN_000d7788 @ 000d7788

void FUN_000d7788(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                 undefined8 param_5)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong local_40;
  uint local_38;
  long local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_28 = 0;
  local_20 = param_4;
  local_18 = param_3;
  _objc_storeStrong(&local_28,param_5);
  lVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_state_026cab20);
  if (lVar2 == 3) {
    uVar3 = local_18;
    _objc_getAssociatedObject(0,local_18,&DAT_028c83a3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
    local_40 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    bVar1 = (uVar3 & 1) != 0;
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_locationInView__026ca798,local_40);
      FUN_000ec880(param_1,param_2,local_18,1);
      FUN_000ec934(local_18);
    }
    local_38 = (uint)!bVar1;
    _objc_storeStrong(&local_40,0);
  }
  else {
    local_38 = 1;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

