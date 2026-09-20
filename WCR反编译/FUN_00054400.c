// FUN_00054400 @ 00054400

void FUN_00054400(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_40 [3];
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  uVar2 = local_18;
  FUN_0004fa34();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
  if (uVar2 == 0) {
    uVar3 = 0;
    FUN_00052874(0,local_20);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_28;
    local_28 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  uVar3 = local_28;
  FUN_00053d7c(local_28,local_20);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_20;
  local_20 = uVar3;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar2 = local_20;
  FUN_000557ac(local_20,2,&cf_SwMR);
  FUN_00051280();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_s_StartDownloadVideo_MsgWrap_Prior_0269da98;
  local_40[0] = uVar2;
  if ((uVar2 != 0) &&
     ((*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_respondsToSelector__026ca818,
                 PTR_s_StartDownloadVideo_MsgWrap_Prior_0269da98), (uVar2 & 1) != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_40[0],puVar1,local_28,local_20,0,0);
  }
  FUN_00055de4(local_20);
  _objc_storeStrong(local_40);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

