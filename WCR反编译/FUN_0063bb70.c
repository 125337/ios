// FUN_0063bb70 @ 0063bb70

void FUN_0063bb70(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  cfstringStruct *pcVar1;
  uint uVar2;
  cfstringStruct **ppcVar3;
  long lVar4;
  undefined *puVar5;
  cfstringStruct *local_e0;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  undefined *local_88;
  cfstringStruct *local_80;
  undefined1 auStack_78 [8];
  undefined4 local_70;
  cfstringStruct *local_68;
  undefined1 auStack_60 [24];
  long local_48;
  undefined4 local_3c;
  cfstringStruct *local_38;
  undefined4 local_2c;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  ppcVar3 = &local_38;
  local_38 = (cfstringStruct *)0x0;
  local_2c = param_2;
  _objc_storeStrong(ppcVar3,param_3);
  if ((local_28 == 0) || (FUN_0063a27c(), ((ulong)ppcVar3 & 1) == 0)) {
    local_3c = 1;
  }
  else {
    lVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98);
    local_48 = lVar4;
    if ((lVar4 == 0x76b) || (lVar4 == 0x76a)) {
      uVar2 = 0;
      FUN_0063a2f4(0,0x4008000000000000);
      if ((uVar2 & 1) == 0) {
        local_3c = 1;
      }
      else {
        _objc_initWeak(auStack_60,local_28);
        if (local_38 == (cfstringStruct *)0x0) {
          local_e0 = &cf___;
        }
        else {
          local_e0 = local_38;
        }
        (*(code *)PTR__objc_retain_02578638)();
        puVar5 = PTR___dispatch_main_q_02578680;
        local_68 = local_e0;
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        local_a0 = PTR___NSConcreteStackBlock_02578660;
        local_98 = 0xc2000000;
        local_94 = 0;
        local_90 = FUN_0063d9d8;
        local_88 = &DAT_0257e608;
        _objc_copyWeak();
        pcVar1 = local_68;
        (*(code *)PTR__objc_retain_02578638)();
        local_80 = pcVar1;
        local_70 = local_2c;
        _dispatch_async(puVar5,&local_a0);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        _objc_storeStrong(&local_80);
        _objc_destroyWeak(auStack_78);
        _objc_storeStrong(&local_68,0);
        _objc_destroyWeak(auStack_60);
        local_3c = 0;
      }
    }
    else {
      local_3c = 1;
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  return;
}

