// -[UIView(WCMYBIBToast)_wcm_ybib_hideToast] @0x7dbf4

void __UIView_WCMYBIBToast__wcm_ybib_hideToast_(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  bool bVar3;
  undefined8 local_98;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  undefined8 local_68;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined1 local_31;
  long local_30;
  long local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  _objc_msgSend_wcm_ybib_toast(param_1);
  local_28 = _objc_retainAutoreleasedReturnValue();
  local_31 = 0;
  bVar3 = false;
  uVar1 = local_28 != 0;
  if ((bool)uVar1) {
    _objc_msgSend_superview(local_28,local_98);
    local_30 = _objc_retainAutoreleasedReturnValue();
    bVar3 = local_30 != 0;
    local_31 = uVar1;
    (*(code *)PTR__objc_release_00110458)(local_30);
    uVar1 = local_31;
  }
  local_31 = uVar1;
  puVar2 = PTR___NSConcreteStackBlock_001104f0;
  if (bVar3) {
    local_60 = PTR___NSConcreteStackBlock_001104f0;
    local_58 = 0xc2000000;
    local_54 = 0;
    local_50 = ___42__UIView_WCMYBIBToast__wcm_ybib_hideToast__block_invoke;
    local_48 = &___block_descriptor_40_e8_32s_e5_v8__0l;
    local_40 = (*(code *)PTR__objc_retain_00110460)(local_28);
    local_88 = puVar2;
    local_80 = 0xc2000000;
    local_7c = 0;
    local_78 = ___42__UIView_WCMYBIBToast__wcm_ybib_hideToast__block_invoke_4;
    local_70 = &___block_descriptor_40_e8_32s_e8_v12__0B8l;
    local_68 = (*(code *)PTR__objc_retain_00110460)(local_28);
    _objc_msgSend_animateWithDuration_animations_completion_
              (0x3fd0000000000000,&_OBJC_CLASS___UIView,local_98,&local_60,&local_88);
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

