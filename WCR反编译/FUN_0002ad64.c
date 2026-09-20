// FUN_0002ad64 @ 0002ad64

byte FUN_0002ad64(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  byte local_e4;
  undefined *local_88;
  undefined *local_78;
  undefined *local_68;
  undefined *local_58;
  undefined *local_40;
  undefined8 local_38;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  puVar6 = PTR_WCRefineAIStore_026ce048;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = local_30;
  uVar5 = local_38;
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  bVar1 = false;
  local_40 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_chatPolishCommand_0269d348);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  FUN_0001a2e4();
  _objc_retainAutoreleasedReturnValue();
  FUN_0002cbc0(uVar8,uVar5);
  uVar9 = local_30;
  uVar5 = local_38;
  local_e4 = 1;
  if ((uVar8 & 1) == 0) {
    local_58 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_chatImageCommand_0269d358);
    _objc_retainAutoreleasedReturnValue();
    bVar4 = true;
    local_68 = local_58;
    FUN_0001a2e4();
    _objc_retainAutoreleasedReturnValue();
    bVar3 = true;
    FUN_0002cbc0(uVar9,uVar5);
    uVar8 = local_30;
    uVar5 = local_38;
    local_e4 = 1;
    if ((uVar9 & 1) == 0) {
      local_78 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_chatVideoCommand_0269d368);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = true;
      local_88 = local_78;
      FUN_0001a2e4();
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      FUN_0002cbc0(uVar8,uVar5);
      local_e4 = (byte)uVar8;
    }
  }
  local_21 = local_e4 & 1;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_88);
  }
  if (bVar2) {
    (*(code *)PTR__objc_release_02578630)(local_78);
  }
  if (bVar3) {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  if (bVar4) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  (*(code *)PTR__objc_release_02578630)(puVar7);
  (*(code *)PTR__objc_release_02578630)(puVar6);
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

