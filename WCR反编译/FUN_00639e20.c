// FUN_00639e20 @ 00639e20

void FUN_00639e20(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40 [3];
  undefined4 local_24;
  undefined8 local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  puVar2 = &local_20;
  local_20 = 0;
  _objc_storeStrong(puVar2,param_2);
  FUN_0063a27c();
  if (((ulong)puVar2 & 1) == 0) {
    local_24 = 1;
  }
  else if (local_18 == 0) {
    local_24 = 1;
  }
  else {
    uVar1 = 0;
    FUN_0063a2f4(0x4004000000000000);
    if ((uVar1 & 1) == 0) {
      local_24 = 1;
    }
    else {
      lVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_viewWithTag__026cabe0,0x76b);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = local_18;
      local_40[0] = lVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_viewWithTag__026cabe0,0x76a);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = local_18;
      uVar5 = 0x76b;
      local_48 = lVar4;
      FUN_0063a398(0x76b);
      (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_viewWithTag__026cabe0,uVar5);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = local_18;
      uVar5 = 0x76a;
      local_50 = lVar3;
      FUN_0063a398(0x76a);
      (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_viewWithTag__026cabe0,uVar5);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = local_18;
      local_58 = lVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_60 = lVar4;
      (*(code *)PTR__objc_release_02578630)(lVar3);
      _objc_storeStrong(&local_60);
      _objc_storeStrong(&local_58,0);
      _objc_storeStrong(&local_50,0);
      _objc_storeStrong(&local_48,0);
      _objc_storeStrong(local_40,0);
      local_24 = 0;
    }
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

