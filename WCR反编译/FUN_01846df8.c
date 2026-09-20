// FUN_01846df8 @ 01846df8

/* WARNING: Type propagation algorithm not settling */

void FUN_01846df8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined1 auStack_50 [8];
  undefined *local_48;
  uint local_3c;
  long local_38;
  long local_30 [4];
  
  local_30[2] = 0;
  local_30[3] = param_1;
  _objc_storeStrong(local_30 + 2);
  local_30[1] = 0;
  _objc_storeStrong(local_30 + 1,param_3);
  local_30[0] = 0;
  _objc_storeStrong(local_30,param_4);
  local_38 = param_1;
  if ((local_30[0] == 0) &&
     (lVar2 = local_30[2], (*(code *)PTR__objc_msgSend_02578628)(local_30[2],PTR_s_length_0269cca0),
     lVar2 != 0)) {
    puVar3 = PTR__OBJC_CLASS___UIImage_026cdfd0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithData__0269d4c8,local_30[2]);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR___dispatch_main_q_02578680;
    local_48 = puVar3;
    if (puVar3 != (undefined *)0x0) {
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      local_80 = PTR___NSConcreteStackBlock_02578660;
      local_78 = 0xc2000000;
      local_74 = 0;
      local_70 = FUN_01847020;
      local_68 = &DAT_0257c978;
      _objc_copyWeak(auStack_50,param_1 + 0x28);
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      (*(code *)PTR__objc_retain_02578638)();
      puVar1 = local_48;
      local_60 = uVar5;
      (*(code *)PTR__objc_retain_02578638)();
      local_58 = puVar1;
      _dispatch_async(puVar4,&local_80);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      _objc_storeStrong(&local_58);
      _objc_storeStrong(&local_60,0);
      _objc_destroyWeak(auStack_50);
    }
    local_3c = (uint)(puVar3 == (undefined *)0x0);
    _objc_storeStrong(&local_48,0);
    if (local_3c == 0) {
      local_3c = 0;
    }
  }
  else {
    local_3c = 1;
  }
  _objc_storeStrong(local_30);
  _objc_storeStrong(local_30 + 1,0);
  _objc_storeStrong(local_30 + 2,0);
  return;
}

