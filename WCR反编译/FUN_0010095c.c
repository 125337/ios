// FUN_0010095c @ 0010095c

void FUN_0010095c(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  byte bVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  uint local_b4;
  ulong local_80;
  ulong local_78;
  undefined8 local_70;
  undefined4 local_68;
  byte local_61;
  ulong local_60;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_4c;
  undefined4 local_38;
  undefined1 local_34;
  byte local_31;
  undefined8 local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  puVar2 = &local_30;
  local_30 = 0;
  _objc_storeStrong(puVar2,param_3);
  local_31 = param_4;
  _WCRefineChatPositionFeatureAllowed();
  bVar1 = 1;
  if (((ulong)puVar2 & 1) != 0) {
    FUN_000f915c();
    local_50 = SUB84(puVar2,0);
    local_4c = (undefined1)((ulong)puVar2 >> 0x20);
    local_38._1_1_ = (byte)((ulong)puVar2 >> 8);
    bVar1 = local_38._1_1_ ^ 1;
    local_38 = local_50;
    local_34 = local_4c;
  }
  if ((bVar1 & 1) == 0) {
    local_61 = 0;
    local_b4 = 0;
    if ((local_31 & 1) == 0) {
      uVar3 = local_28;
      _objc_getAssociatedObject(local_28,DAT_026df8b8);
      _objc_retainAutoreleasedReturnValue();
      local_61 = 1;
      local_60 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_b4 = (uint)uVar3;
    }
    if ((local_61 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    if ((local_b4 & 1) == 0) {
      uVar4 = local_28;
      FUN_001002ec();
      uVar3 = local_28;
      uVar5 = DAT_026df8b8;
      if ((uVar4 & 1) == 0) {
        uVar5 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_localID);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar5);
        uVar5 = local_30;
        local_68 = (int)uVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_marginTop);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar5);
        uVar4 = local_28;
        local_70 = param_1;
        FUN_00100134();
        _objc_retainAutoreleasedReturnValue();
        local_78 = uVar4;
        FUN_00101068(uVar4,local_68);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = local_28;
        uVar5 = DAT_026df8b8;
        local_80 = uVar4;
        if (uVar4 == 0) {
          FUN_00101264(local_78);
          FUN_001008e0(local_28);
          local_54 = 1;
        }
        else {
          puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
          _objc_retainAutoreleasedReturnValue();
          _objc_setAssociatedObject(uVar3,uVar5,puVar7,1);
          (*(code *)PTR__objc_release_02578630)(puVar7);
          FUN_001008e0(local_28);
          uVar3 = local_28;
          FUN_00101338(local_70,local_28,local_80);
          FUN_000f915c();
          if ((uVar3 & 1) != 0) {
            FUN_000f8ec0(local_28,1);
          }
          FUN_000fa318(local_28,1);
          local_54 = 0;
        }
        _objc_storeStrong(&local_80);
        _objc_storeStrong(&local_78,0);
      }
      else {
        puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(uVar3,uVar5,puVar7,1);
        (*(code *)PTR__objc_release_02578630)(puVar7);
        FUN_001008e0(local_28);
        local_54 = 1;
      }
    }
    else {
      local_54 = 1;
    }
  }
  else {
    local_54 = 1;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

