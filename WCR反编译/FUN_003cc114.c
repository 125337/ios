// FUN_003cc114 @ 003cc114

void FUN_003cc114(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long local_40;
  long local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = 0;
  local_20 = param_2;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  lVar1 = local_18;
  FUN_003612b8(local_18,&cf_delegate);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_28;
  local_38 = lVar1;
  FUN_00366324();
  _objc_retainAutoreleasedReturnValue();
  FUN_003a6b28();
  _objc_retainAutoreleasedReturnValue();
  local_40 = lVar1;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  if (local_40 == 0) {
    lVar3 = local_38;
    FUN_003cc7e8(local_38,local_30);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_40;
    local_40 = lVar3;
    (*(code *)PTR__objc_release_02578630)(lVar1);
  }
  lVar1 = local_38;
  if (local_40 == 0) {
    if (DAT_028ca2a0 != (code *)0x0) {
      (*DAT_028ca2a0)(local_18,local_20,local_28,local_30);
    }
    uVar2 = local_28;
    FUN_00366324();
    _objc_retainAutoreleasedReturnValue();
    FUN_003a6ea0();
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  else {
    lVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_items_0269e4b0);
    _objc_retainAutoreleasedReturnValue();
    FUN_00369a04(lVar1);
    (*(code *)PTR__objc_release_02578630)(lVar3);
    FUN_00368c14(local_38,&cf_hideGroupSessions);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return;
}

