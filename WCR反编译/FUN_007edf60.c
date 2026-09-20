// FUN_007edf60 @ 007edf60

void FUN_007edf60(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  long local_30;
  undefined4 local_28;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if ((local_18 == 0) ||
     (lVar3 = local_18, (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_length_0269cca0),
     lVar2 = local_18, uVar1 = DAT_028cce90, lVar3 == 0)) {
    local_28 = 1;
  }
  else {
    local_50 = PTR___NSConcreteGlobalBlock_02578658;
    local_48 = 0xd0800000;
    local_44 = 0;
    local_40 = FUN_007ef8a0;
    local_38 = &DAT_0257a9d0;
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = lVar2;
    _dispatch_sync(uVar1,&local_50);
    _objc_storeStrong(&local_30,0);
    local_28 = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

