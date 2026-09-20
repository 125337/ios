// FUN_00194768 @ 00194768

/* WARNING: Type propagation algorithm not settling */

void FUN_00194768(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  byte bVar2;
  cfstringStruct *pcVar4;
  ulong uVar5;
  ulong uVar6;
  uint local_11c;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  code *local_b8;
  undefined *local_b0;
  ulong local_a8;
  ulong local_a0;
  ulong local_98;
  ulong local_90;
  byte local_82;
  byte local_81;
  ulong local_80;
  ulong local_78;
  byte local_69;
  cfstringStruct *local_68;
  byte local_5d;
  byte local_4d;
  undefined4 local_4c;
  ulong local_48;
  ulong local_40 [4];
  undefined *puVar3;
  
  local_40[2] = 0;
  _objc_storeStrong(local_40 + 2,param_1);
  local_40[1] = 0;
  _objc_storeStrong(local_40 + 1,param_2);
  local_40[0] = 0;
  _objc_storeStrong(local_40,param_3);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  uVar5 = local_48;
  if ((local_48 == 0) || (local_40[0] == 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_40[3] = uVar5;
    local_4c = 1;
  }
  else {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    bVar1 = (byte)puVar3;
    _objc_retainAutoreleasedReturnValue();
    bVar2 = bVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_5d = bVar1;
    (*(code *)PTR__objc_release_02578630)();
    local_4d = bVar2;
    FUN_0018f95c();
    pcVar4 = &cf_NewContactsItemCell;
    _NSClassFromString();
    local_11c = 1;
    local_68 = pcVar4;
    if (pcVar4 != (cfstringStruct *)0x0) {
      uVar5 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isKindOfClass__0269cd68,pcVar4);
      local_11c = (uint)uVar5;
    }
    local_69 = (byte)local_11c & 1;
    if (((local_5d & 1) != 0) && ((local_11c & 1) != 0)) {
      FUN_00195bc8(local_40[2],local_40[0],local_48);
    }
    if ((local_4d & 1) == 0) {
      FUN_00195e04(local_48);
      uVar5 = local_48;
      (*(code *)PTR__objc_retain_02578638)();
      local_40[3] = uVar5;
      local_4c = 1;
    }
    else if ((local_68 == (cfstringStruct *)0x0) ||
            (uVar5 = local_48,
            (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isKindOfClass__0269cd68,local_68),
            (uVar5 & 1) != 0)) {
      uVar5 = local_40[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_section_0269e988);
      uVar6 = local_40[2];
      local_78 = uVar5;
      FUN_0018f6dc(local_40[2],uVar5,0);
      local_80 = uVar6;
      if (((long)uVar6 < 1) ||
         (uVar6 = local_40[0], (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_row_0269e210)
         , uVar6 != 0)) {
        FUN_00195e04(uVar6,local_48);
        uVar5 = local_48;
        (*(code *)PTR__objc_retain_02578638)();
        local_40[3] = uVar5;
        local_4c = 1;
      }
      else {
        local_81 = 0;
        uVar5 = local_40[2];
        FUN_00195f84(local_40[2],local_78,&local_81);
        local_82 = (byte)uVar5;
        if ((local_81 & 1) == 0) {
          uVar5 = local_40[2];
          FUN_00190028(local_40[2],local_78,local_80);
          local_82 = (byte)uVar5;
          FUN_0018fe24(local_40[2],local_78,(uint)uVar5 & 1);
        }
        if (((local_82 & 1) == 0) ||
           (uVar5 = local_40[2], FUN_00190294(local_40[2],local_78), (uVar5 & 1) != 0)) {
          FUN_00195e04(local_48);
          uVar5 = local_48;
          (*(code *)PTR__objc_retain_02578638)();
          local_40[3] = uVar5;
          local_4c = 1;
        }
        else {
          uVar5 = local_40[2];
          FUN_001961a4(local_40[2],local_78);
          _objc_retainAutoreleasedReturnValue();
          local_90 = uVar5;
          FUN_0019655c(uVar5,local_80);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = local_90;
          local_98 = uVar5;
          FUN_00196cb0();
          _objc_retainAutoreleasedReturnValue();
          local_a0 = uVar6;
          FUN_00197054(local_40[2],local_48,local_40[0],local_98,uVar6);
          FUN_00198c38(local_40[2],local_48);
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setNeedsLayout_0269deb8);
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_layoutIfNeeded_026ca790);
          FUN_0018888c(local_48);
          puVar3 = PTR___dispatch_main_q_02578680;
          _objc_retainAutoreleaseReturnValue();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = local_48;
          local_c8 = PTR___NSConcreteStackBlock_02578660;
          local_c0 = 0xc2000000;
          local_bc = 0;
          local_b8 = FUN_00198f30;
          local_b0 = &DAT_02578c20;
          (*(code *)PTR__objc_retain_02578638)();
          local_a8 = uVar5;
          _dispatch_async(puVar3,&local_c8);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          uVar5 = local_48;
          (*(code *)PTR__objc_retain_02578638)();
          local_40[3] = uVar5;
          local_4c = 1;
          _objc_storeStrong(&local_a8);
          _objc_storeStrong(&local_a0,0);
          _objc_storeStrong(&local_98,0);
          _objc_storeStrong(&local_90,0);
        }
      }
    }
    else {
      FUN_00195e04(local_48);
      uVar5 = local_48;
      (*(code *)PTR__objc_retain_02578638)();
      local_40[3] = uVar5;
      local_4c = 1;
    }
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(local_40,0);
  _objc_storeStrong(local_40 + 1,0);
  _objc_storeStrong(local_40 + 2,0);
  _objc_autoreleaseReturnValue(local_40[3]);
  return;
}

