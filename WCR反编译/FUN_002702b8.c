// FUN_002702b8 @ 002702b8

void FUN_002702b8(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar3;
  undefined *puVar4;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  undefined1 local_31;
  undefined4 local_30;
  ulong local_20;
  ulong local_18;
  ulong *puVar2;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  puVar2 = &local_20;
  local_20 = 0;
  _objc_storeStrong(puVar2,param_2);
  uVar1 = (uint)puVar2;
  FUN_0026e0d8();
  if ((uVar1 & 1) == 0) {
    local_30 = 1;
  }
  else {
    uVar3 = local_20;
    FUN_0026ef1c();
    if ((uVar3 & 1) == 0) {
      local_30 = 1;
    }
    else {
      uVar3 = local_20;
      FUN_0026f0f4();
      local_31 = (undefined1)uVar3;
      uVar3 = (ulong)((uint)uVar3 & 1);
      FUN_00270810();
      _objc_retainAutoreleasedReturnValue();
      local_40 = uVar3;
      FUN_002706ec(local_18,"_secondDetail",uVar3);
      uVar3 = local_18;
      FUN_0026f338(local_18,&cf_secondDetailLabel);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___UILabel_026cdfb8;
      local_48 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
      if ((uVar3 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setHidden__026ca970,1);
      }
      uVar3 = local_18;
      FUN_00270854();
      _objc_retainAutoreleasedReturnValue();
      local_50 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_setText__026caa88,local_40);
      FUN_0027108c(local_18,local_50);
      _objc_storeStrong(&local_50);
      _objc_storeStrong(&local_48,0);
      _objc_storeStrong(&local_40,0);
      local_30 = 0;
    }
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

