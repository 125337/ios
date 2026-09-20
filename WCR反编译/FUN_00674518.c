// FUN_00674518 @ 00674518

void FUN_00674518(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long local_160;
  long local_120;
  byte local_a4;
  long local_88;
  long local_68;
  long local_60;
  byte local_54;
  byte local_53;
  byte local_52;
  byte local_51;
  long local_50;
  long local_38;
  long local_30;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  local_51 = 0;
  bVar1 = local_30 == 0;
  if (bVar1) {
    local_88 = local_28;
    FUN_0066e298();
    _objc_retainAutoreleasedReturnValue();
    local_50 = local_88;
  }
  else {
    local_88 = local_30;
  }
  local_51 = bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_88;
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  lVar4 = local_38;
  FUN_00662c28();
  local_52 = (byte)lVar4;
  lVar4 = local_38;
  FUN_00662c98();
  local_53 = (byte)lVar4;
  local_a4 = 1;
  if ((local_52 & 1) == 0) {
    local_a4 = local_53;
  }
  local_54 = local_a4 & 1;
  lVar4 = local_28;
  FUN_00655d64(local_28,"_alertLabel");
  _objc_retainAutoreleasedReturnValue();
  local_60 = lVar4;
  if (lVar4 == 0) {
    lVar5 = local_28;
    FUN_00655d64(local_28,"m_alertLabel");
    _objc_retainAutoreleasedReturnValue();
    lVar4 = local_60;
    local_60 = lVar5;
    (*(code *)PTR__objc_release_02578630)(lVar4);
  }
  lVar4 = local_28;
  FUN_00655d64(local_28,"_msgLabel");
  _objc_retainAutoreleasedReturnValue();
  local_68 = lVar4;
  if (lVar4 == 0) {
    lVar5 = local_28;
    FUN_00655d64(local_28,"m_msgLabel");
    _objc_retainAutoreleasedReturnValue();
    lVar4 = local_68;
    local_68 = lVar5;
    (*(code *)PTR__objc_release_02578630)(lVar4);
  }
  lVar4 = local_28;
  FUN_0066db9c();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = local_60;
  FUN_0066e498();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = local_68;
  FUN_0066e498();
  _objc_retainAutoreleasedReturnValue();
  FUN_00657450(&cf_E);
  (*(code *)PTR__objc_release_02578630)(lVar6);
  (*(code *)PTR__objc_release_02578630)(lVar5);
  (*(code *)PTR__objc_release_02578630)(lVar4);
  FUN_00674ab8(local_60,0);
  bVar3 = local_52;
  bVar2 = local_53;
  lVar4 = local_68;
  if ((local_52 & 1) == 0) {
    local_120 = 0;
  }
  else {
    local_120 = local_38;
    FUN_0066f1b8();
  }
  FUN_0066e658(lVar4,bVar3 & 1,bVar2 & 1,local_120);
  lVar4 = local_60;
  FUN_0066e498();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = local_68;
  FUN_0066e498();
  _objc_retainAutoreleasedReturnValue();
  FUN_00657450(&cf_E);
  (*(code *)PTR__objc_release_02578630)(lVar5);
  (*(code *)PTR__objc_release_02578630)(lVar4);
  if (local_60 == 0) {
    local_160 = local_68;
  }
  else {
    local_160 = local_60;
  }
  FUN_006702ac(&cf_EnterpriseSessionItemView,local_38,local_54 & 1,local_160);
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

