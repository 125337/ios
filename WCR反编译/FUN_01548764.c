// FUN_01548764 @ 01548764

void FUN_01548764(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined *local_30;
  uint local_24;
  undefined8 local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_5);
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_026ce268;
  bVar1 = local_18 != 0;
  local_20 = param_1;
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_bounds_026ca548);
    uVar4 = local_20;
    uVar6 = local_20;
    local_50 = param_1;
    local_48 = param_2;
    local_40 = param_3;
    local_38 = param_4;
    FUN_0154838c();
    uVar5 = local_50;
    uVar7 = local_48;
    uVar8 = local_40;
    uVar9 = local_38;
    local_60 = uVar4;
    local_58 = uVar6;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_bezierPathWithRoundedRect_byRoun_026a0400,3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___CAShapeLayer_026ce3e0;
    local_30 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___CAShapeLayer_026ce3e0,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    local_68 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_bounds_026ca548);
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,uVar7,uVar8,uVar9,local_68,PTR_s_setFrame__026ca960)
    ;
    puVar2 = local_30;
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_CGPath_026ca478);
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setPath__026caa08,puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setMask__0269e070,local_68);
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_30,0);
  }
  local_24 = (uint)!bVar1;
  _objc_storeStrong(&local_18,0);
  return;
}

