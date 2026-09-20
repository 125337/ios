// FUN_0063a3d8 @ 0063a3d8

void FUN_0063a3d8(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  bool bVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long local_58 [3];
  long local_40;
  undefined4 local_34;
  undefined8 local_30;
  int local_24;
  undefined8 local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  puVar3 = &local_30;
  local_30 = 0;
  local_24 = param_3;
  _objc_storeStrong(puVar3,param_4);
  FUN_0063a27c();
  if (((ulong)puVar3 & 1) == 0) {
    local_34 = 1;
    goto LAB_0063a624;
  }
  lVar4 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_tag_026cab98);
  local_40 = lVar4;
  if ((lVar4 != 0x76b) && (lVar4 != 0x76a)) {
    local_34 = 1;
    goto LAB_0063a624;
  }
  lVar4 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_superview_026cab50);
  _objc_retainAutoreleasedReturnValue();
  local_58[0] = lVar4;
  if (lVar4 == 0) {
    local_34 = 1;
  }
  else {
    FUN_0063bfb8(lVar4,local_18);
    lVar5 = local_58[0];
    FUN_0063bfb8(local_58[0],local_20);
    bVar1 = true;
    if ((-1 < lVar5) && (bVar1 = true, -1 < lVar4)) {
      bVar1 = local_24 == 0 && lVar5 < lVar4;
    }
    if (!bVar1) {
      uVar2 = 0;
      FUN_0063a2f4(0x4000000000000000);
      if ((uVar2 & 1) == 0) {
        local_34 = 1;
        goto LAB_0063a614;
      }
    }
    FUN_0063c14c(local_18,local_20,local_24,local_30);
    local_34 = 0;
  }
LAB_0063a614:
  _objc_storeStrong(local_58,0);
LAB_0063a624:
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

