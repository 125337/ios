// FUN_017983fc @ 017983fc

byte FUN_017983fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  bool bVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *local_a8;
  ulong *local_68;
  ulong *local_58;
  ulong *local_50 [3];
  ulong *local_38;
  undefined8 local_30;
  ulong local_28;
  undefined8 local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  puVar3 = &local_28;
  local_28 = 0;
  _objc_storeStrong(puVar3,param_2);
  local_30 = param_3;
  FUN_017990c4();
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_visibleViewController_0269d460);
  _objc_retainAutoreleasedReturnValue();
  local_a8 = puVar3;
  if (puVar3 == (ulong *)0x0) {
    local_58 = puVar3;
    FUN_01797b18();
    _objc_retainAutoreleasedReturnValue();
    local_a8 = local_58;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_50[0] = local_a8;
  if (puVar3 == (ulong *)0x0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  (*(code *)PTR__objc_release_02578630)(puVar3);
  bVar1 = false;
  bVar2 = true;
  if ((local_50[0] != (ulong *)0x0) && (bVar2 = true, local_38 != (ulong *)0x0)) {
    local_68 = local_50[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = true;
    bVar2 = local_68 == (ulong *)0x0;
  }
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  if (bVar2) {
    local_11 = 0;
  }
  else {
    uVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
    if ((uVar4 == 0) || (uVar5 = local_28, FUN_01799420(uVar4), (uVar5 & 1) == 0)) {
      FUN_0179810c(local_20,local_50[0],local_30);
      local_11 = 1;
    }
    else {
      local_11 = 1;
    }
  }
  _objc_storeStrong(local_50);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

