// finishWithText:success: @ 006e6f20

/* Function Stack Size: 0x1c bytes */

void WCRefineScreenRecordingProgressHUD::finishWithText_success_
               (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  undefined8 uVar1;
  ID IVar2;
  undefined *puVar3;
  ID local_40;
  undefined8 local_38;
  byte local_30;
  byte local_29;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar3 = PTR___dispatch_main_q_02578680;
  local_29 = (byte)param_4;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_18;
  (*(code *)PTR__objc_retain_02578638)();
  uVar1 = local_28;
  local_40 = IVar2;
  local_30 = local_29 & 1;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = uVar1;
  _dispatch_async(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_28,0);
  return;
}

