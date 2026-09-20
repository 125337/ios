// FUN_000194a0 @ 000194a0

void FUN_000194a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  long local_b0;
  long local_90;
  long local_68;
  long local_48;
  long local_30;
  ulong local_28;
  undefined8 local_20;
  long local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = local_18;
  FUN_0001a4fc(local_18,&cf_m_delegate);
  _objc_retainAutoreleasedReturnValue();
  local_68 = lVar1;
  if (lVar1 == 0) {
    local_48 = local_18;
    FUN_0001a198(local_18,PTR_s_m_delegate_0269d0e0);
    _objc_retainAutoreleasedReturnValue();
    local_68 = local_48;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_68;
  if (lVar1 == 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  (*(code *)PTR__objc_release_02578630)(lVar1);
  if (local_30 == 0) {
    local_90 = local_18;
  }
  else {
    local_90 = local_30;
  }
  uVar2 = local_28;
  FUN_00021150(local_28,local_90);
  if ((uVar2 & 1) == 0) {
    if (local_30 == 0) {
      local_b0 = local_18;
    }
    else {
      local_b0 = local_30;
    }
    uVar2 = local_28;
    FUN_000214d8(local_28,local_b0,0);
    if ((uVar2 & 1) == 0) {
      (*DAT_028c7a10)(local_18,local_20,local_28);
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

