// FUN_003cc328 @ 003cc328

void FUN_003cc328(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long local_38;
  long local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = 0;
  local_20 = param_2;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = local_18;
  FUN_003612b8(local_18,&cf_delegate);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_28;
  local_30 = lVar1;
  FUN_00366324();
  _objc_retainAutoreleasedReturnValue();
  FUN_003a6b28();
  _objc_retainAutoreleasedReturnValue();
  local_38 = lVar1;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  lVar1 = local_30;
  if (local_38 == 0) {
    if (DAT_028ca2a8 != (code *)0x0) {
      (*DAT_028ca2a8)(local_18,local_20,local_28);
    }
    uVar2 = local_28;
    FUN_00366324();
    _objc_retainAutoreleasedReturnValue();
    FUN_003a6ea0();
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  else {
    lVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_items_0269e4b0);
    _objc_retainAutoreleasedReturnValue();
    FUN_00369a04(lVar1);
    (*(code *)PTR__objc_release_02578630)(lVar3);
    FUN_00368c14(local_30,&cf_hideGroupSessions);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return;
}

