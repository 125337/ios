// FUN_01d197ac @ 01d197ac

void FUN_01d197ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  cfstringStruct *local_a8;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined1 auStack_48 [15];
  undefined1 local_39;
  long local_38;
  undefined8 local_30;
  ulong local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_20 = (cfstringStruct *)0x0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  puVar1 = PTR_WCRefineQuickReplyStore_026cec50;
  if (local_20 == (cfstringStruct *)0x0) {
    local_a8 = &cf___;
  }
  else {
    local_a8 = local_20;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  local_68 = PTR___NSConcreteStackBlock_02578660;
  local_60 = 0xc2000000;
  local_5c = 0;
  local_58 = FUN_01d199d4;
  local_50 = &DAT_02588550;
  local_38 = param_1;
  _objc_copyWeak(auStack_48,param_1 + 0x28);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_updateRemark_forItem_completion__026af348,local_a8,uVar3,&local_68);
  local_39 = SUB81(puVar1,0);
  if (((ulong)puVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_fe1Y_);
  }
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_dismissWithAnimated__0269e420);
  if ((uVar2 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_dismissWithAnimated__0269e420,1);
  }
  _objc_destroyWeak(auStack_48);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return;
}

