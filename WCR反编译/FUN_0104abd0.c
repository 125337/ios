// FUN_0104abd0 @ 0104abd0

void FUN_0104abd0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long local_f8;
  long local_c8;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  ulong local_78;
  undefined8 local_70;
  ulong local_68;
  undefined *local_60;
  int local_54;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  
  local_30 = 0;
  local_28 = param_1;
  _objc_storeStrong(&local_30);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  lVar1 = local_38;
  local_48 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_URL_026a1c90);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_c8 = lVar2;
  if (lVar2 == 0) {
    local_c8 = *(long *)(param_1 + 0x20);
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = local_c8;
  (*(code *)PTR__objc_release_02578630)(lVar2);
  (*(code *)PTR__objc_release_02578630)(lVar1);
  if ((local_40 == 0) &&
     (lVar1 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
     lVar1 != 0)) {
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_60 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_length_0269cca0);
    if (puVar3 == (undefined *)0x0) {
      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      puVar3 = local_60;
      local_60 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    uVar5 = *(ulong *)(param_1 + 0x50);
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar5,PTR_s_xhsHTMLLooksBlocked_responseURL__026ae040,local_60,local_50);
    if ((uVar5 & 1) == 0) {
      uVar5 = *(ulong *)(param_1 + 0x50);
      local_f8 = *(long *)(param_1 + 0x30);
      if (local_f8 == 0) {
        local_f8 = *(long *)(param_1 + 0x20);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar5,PTR_s_extractXHSFromHTML_sourceURL_res_026ae048,local_60,
                 *(undefined8 *)(param_1 + 0x28),local_f8);
      _objc_retainAutoreleasedReturnValue();
      local_68 = uVar5;
      (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_hasMedia_026ada58);
      puVar3 = PTR___dispatch_main_q_02578680;
      if ((uVar5 & 1) == 0) {
        (**(code **)(*(long *)(param_1 + 0x38) + 0x10))();
        local_54 = 0;
      }
      else {
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        local_98 = PTR___NSConcreteStackBlock_02578660;
        local_90 = 0xc2000000;
        local_8c = 0;
        local_88 = FUN_0104b020;
        local_80 = &DAT_0257ca68;
        uVar6 = *(undefined8 *)(param_1 + 0x40);
        (*(code *)PTR__objc_retain_02578638)();
        uVar5 = local_68;
        local_70 = uVar6;
        (*(code *)PTR__objc_retain_02578638)();
        local_78 = uVar5;
        _dispatch_async(puVar3,&local_98);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        local_54 = 1;
        _objc_storeStrong(&local_78);
        _objc_storeStrong(&local_70,0);
      }
      _objc_storeStrong(&local_68,0);
    }
    else {
      (**(code **)(*(long *)(param_1 + 0x38) + 0x10))();
      local_54 = 1;
    }
    _objc_storeStrong(&local_60,0);
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))();
    local_54 = 1;
  }
  _objc_storeStrong(&local_50,0);
  if (local_54 == 0) {
    local_54 = 0;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return;
}

