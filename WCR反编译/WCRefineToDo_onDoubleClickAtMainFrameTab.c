// WCRefineToDo_onDoubleClickAtMainFrameTab @ 007f4068

/* Function Stack Size: 0x10 bytes */

void WCRefineToDoHook::WCRefineToDo_onDoubleClickAtMainFrameTab(ID param_1,SEL param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [15];
  byte local_21;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  FUN_007f4174();
  local_21 = (byte)param_1;
  FUN_007f424c(1);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_WCRefineToDo_onDoubleClickAtMain_026a8838);
  uVar1 = (ulong)(local_21 & 1);
  FUN_007f424c();
  FUN_007f4368();
  if ((uVar1 & 1) != 0) {
    _objc_initWeak(auStack_30,local_18);
    puVar2 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_58 = PTR___NSConcreteStackBlock_02578660;
    local_50 = 0xc2000000;
    local_4c = 0;
    local_48 = FUN_007f4374;
    local_40 = &DAT_0257be28;
    _objc_copyWeak(auStack_38,auStack_30);
    _dispatch_async(puVar2,&local_58);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_destroyWeak(auStack_38);
    _objc_destroyWeak(auStack_30);
  }
  return;
}

