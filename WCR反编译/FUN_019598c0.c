// FUN_019598c0 @ 019598c0

byte FUN_019598c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  undefined8 ***pppuVar1;
  undefined *puVar2;
  undefined8 ***pppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 **local_98;
  undefined8 **local_90 [4];
  undefined8 **local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_44;
  undefined8 *local_40;
  undefined8 *local_38;
  undefined8 **local_30;
  byte local_21;
  
  local_30 = (undefined8 ***)0x0;
  _objc_storeStrong(&local_30,param_3);
  local_40 = param_5;
  local_38 = param_4;
  if ((undefined8 ***)local_30 == (undefined8 ***)0x0) {
    local_21 = 0;
  }
  else {
    uVar4 = 0;
    local_50 = 0;
    local_58 = 0;
    pppuVar1 = (undefined8 ***)local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_latitude_026b9c78);
    uVar5 = uVar4;
    if ((((ulong)pppuVar1 & 1) != 0) &&
       (pppuVar1 = (undefined8 ***)local_30,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_longitude_026b9c80),
       uVar5 = uVar4, ((ulong)pppuVar1 & 1) != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_latitude_026b9c78);
      pppuVar1 = (undefined8 ***)local_30;
      local_50 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_longitude_026b9c80);
      uVar5 = local_50;
      local_58 = uVar4;
      FUN_01954c24();
      param_2 = uVar4;
      if (((ulong)pppuVar1 & 1) != 0) {
        if (local_38 != (undefined8 *)0x0) {
          *local_38 = local_50;
        }
        if (local_40 != (undefined8 *)0x0) {
          *local_40 = local_58;
        }
        local_21 = 1;
        goto LAB_01959e48;
      }
    }
    pppuVar1 = (undefined8 ***)local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_coordinate_026b9c88);
    if (((ulong)pppuVar1 & 1) != 0) {
      pppuVar1 = (undefined8 ***)local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_coordinate_026b9c88);
      local_68 = uVar5;
      local_60 = param_2;
      local_58 = param_2;
      local_50 = uVar5;
      FUN_01954c24(uVar5,param_2);
      if (((ulong)pppuVar1 & 1) != 0) {
        if (local_38 != (undefined8 *)0x0) {
          *local_38 = local_50;
        }
        if (local_40 != (undefined8 *)0x0) {
          *local_40 = local_58;
        }
        local_21 = 1;
        goto LAB_01959e48;
      }
      pppuVar1 = (undefined8 ***)local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_valueForKey__0269d128,&cf_coordinate);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSValue_026ce1f0;
      local_70 = pppuVar1;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSValue_026ce1f0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(pppuVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
      if (((ulong)pppuVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_getValue__026a0480,&local_68);
        local_50 = local_68;
        local_58 = local_60;
      }
      pppuVar1 = &local_70;
      _objc_storeStrong(pppuVar1,0);
    }
    uVar5 = local_50;
    FUN_01954c24(local_50,local_58);
    if (((ulong)pppuVar1 & 1) == 0) {
      pppuVar1 = (undefined8 ***)local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_valueForKey__0269d128,&cf_latitude);
      _objc_retainAutoreleasedReturnValue();
      pppuVar3 = (undefined8 ***)local_30;
      local_90[0] = pppuVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_valueForKey__0269d128,&cf_longitude);
      _objc_retainAutoreleasedReturnValue();
      pppuVar1 = (undefined8 ***)local_90[0];
      local_98 = pppuVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_90[0],PTR_s_respondsToSelector__026ca818,PTR_s_doubleValue_026ca608);
      if ((((ulong)pppuVar1 & 1) != 0) &&
         (pppuVar1 = (undefined8 ***)local_98,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_98,PTR_s_respondsToSelector__026ca818,PTR_s_doubleValue_026ca608),
         ((ulong)pppuVar1 & 1) != 0)) {
        (*(code *)PTR__objc_msgSend_02578628)(local_90[0],PTR_s_doubleValue_026ca608);
        local_50 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_doubleValue_026ca608);
        local_58 = uVar5;
      }
      _objc_storeStrong(&local_98);
      pppuVar1 = local_90;
      _objc_storeStrong(pppuVar1,0);
    }
    FUN_01954c24(local_50,local_58);
    if (((ulong)pppuVar1 & 1) == 0) {
      local_21 = 0;
    }
    else {
      if (local_38 != (undefined8 *)0x0) {
        *local_38 = local_50;
      }
      if (local_40 != (undefined8 *)0x0) {
        *local_40 = local_58;
      }
      local_21 = 1;
    }
  }
LAB_01959e48:
  local_44 = 1;
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

