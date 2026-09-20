// FUN_00f3400c @ 00f3400c

/* WARNING: Type propagation algorithm not settling */

void FUN_00f3400c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  long local_108;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  code *local_b0;
  undefined *local_a8;
  long local_a0;
  undefined8 local_98;
  long local_90;
  long local_88;
  long local_80;
  undefined4 local_74;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  undefined8 local_50;
  long local_48;
  long local_40 [4];
  
  local_40[2] = 0;
  local_40[3] = param_1;
  _objc_storeStrong(local_40 + 2);
  local_40[1] = 0;
  _objc_storeStrong(local_40 + 1,param_3);
  local_40[0] = 0;
  _objc_storeStrong(local_40,param_4);
  local_48 = param_1;
  if ((local_40[0] == 0) &&
     (lVar2 = local_40[2], (*(code *)PTR__objc_msgSend_02578628)(local_40[2],PTR_s_length_0269cca0),
     lVar2 != 0)) {
    lVar2 = *(long *)(param_1 + 0x30);
    (*(code *)PTR__objc_msgSend_02578628)
              (lVar2,PTR_s_decryptEmoticonData_aesKey__026ac038,local_40[2],
               *(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(param_1 + 0x30);
    local_80 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_normalizeEmoticonDataForAlbum__026ac008,lVar2)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_88 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_length_0269cca0);
    if (lVar3 == 0) {
      local_108 = local_80;
    }
    else {
      local_108 = local_88;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_90 = local_108;
    uVar4 = *(ulong *)(param_1 + 0x30);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isUsableEmoticonImageData__026ac010,local_108)
    ;
    if ((uVar4 & 1) == 0) {
      _objc_storeStrong(&local_90,0);
    }
    puVar5 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_c0 = PTR___NSConcreteStackBlock_02578660;
    local_b8 = 0xc2000000;
    local_b4 = 0;
    local_b0 = FUN_00f343b0;
    local_a8 = &DAT_0257ca68;
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    (*(code *)PTR__objc_retain_02578638)();
    lVar2 = local_90;
    local_98 = uVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_a0 = lVar2;
    _dispatch_async(puVar5,&local_c0);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    _objc_storeStrong(&local_a0);
    _objc_storeStrong(&local_98,0);
    _objc_storeStrong(&local_90,0);
    _objc_storeStrong(&local_88,0);
    _objc_storeStrong(&local_80,0);
    local_74 = 0;
  }
  else {
    puVar5 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_70 = PTR___NSConcreteStackBlock_02578660;
    local_68 = 0xc2000000;
    local_64 = 0;
    local_60 = FUN_00f34378;
    local_58 = &DAT_025814c8;
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = uVar1;
    _dispatch_async(puVar5,&local_70);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    local_74 = 1;
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(local_40);
  _objc_storeStrong(local_40 + 1,0);
  _objc_storeStrong(local_40 + 2,0);
  return;
}

