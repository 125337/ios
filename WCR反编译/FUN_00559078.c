// FUN_00559078 @ 00559078

byte FUN_00559078(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong local_38;
  int local_30;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___UIResponder_026ce050;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIResponder_026ce050,PTR_s_class_0269cd60)
  ;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) != 0) {
    uVar2 = local_20;
    FUN_00564a94();
    if ((uVar2 & 1) != 0) {
      local_11 = 1;
      local_30 = 1;
      goto LAB_005592b4;
    }
  }
  uVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_superview_026cab50);
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar2;
  while (local_38 != 0) {
    uVar2 = local_38;
    FUN_00564a94();
    if ((uVar2 & 1) != 0) {
      local_11 = 1;
      local_30 = 1;
      goto LAB_0055921c;
    }
    uVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_38;
    local_38 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  local_30 = 2;
LAB_0055921c:
  puVar4 = &local_38;
  _objc_storeStrong(puVar4,0);
  if (local_30 == 2) {
    FUN_00564f08(0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    FUN_00564a94();
    local_11 = (byte)puVar5 & 1;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    local_30 = 1;
  }
LAB_005592b4:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

