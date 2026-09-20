// FUN_0025f93c @ 0025f93c

void FUN_0025f93c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  FUN_002620fc();
  _objc_retainAutoreleasedReturnValue();
  local_30 = param_1;
  FUN_002627b0(local_18,local_28);
  (*DAT_028c9430)(local_18,local_20,local_28);
  puVar1 = PTR_s_WCRefine_actionSheetDidDismissCo_026a1250;
  uVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_respondsToSelector__026ca818,
             PTR_s_WCRefine_actionSheetDidDismissCo_026a1250);
  if ((uVar2 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,puVar1,local_18,local_28);
  }
  _objc_storeStrong(&local_30,0);
  return;
}

