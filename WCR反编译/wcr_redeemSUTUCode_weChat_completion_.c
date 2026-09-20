// wcr_redeemSUTUCode:weChat:completion: @ 0172d328

/* Function Stack Size: 0x28 bytes */

void ThemeBoxAirDropThemePickViewController::wcr_redeemSUTUCode_weChat_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,undefined4 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  long local_58;
  undefined4 local_4c;
  long local_48;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  lVar3 = local_28;
  FUN_01725ed0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = local_30;
  local_40 = lVar3;
  FUN_01725ed0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = local_40;
  local_48 = lVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if (lVar3 == 0) {
    if (local_38 != 0) {
      (**(code **)(local_38 + 0x10))(local_38,0,&cf_QQbcxN_Nzz);
    }
    local_4c = 1;
  }
  else {
    lVar5 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
    lVar2 = local_38;
    lVar4 = local_40;
    lVar3 = local_48;
    puVar1 = PTR_SuanGuoRedeemService_026cef00;
    if (lVar5 == 0) {
      if (local_38 != 0) {
        (**(code **)(local_38 + 0x10))(local_38,0,&cf__e_gn__OSel_O_u);
      }
      local_4c = 1;
    }
    else {
      local_78 = PTR___NSConcreteStackBlock_02578660;
      local_70 = 0xc2000000;
      local_6c = 0;
      local_68 = FUN_0172d54c;
      local_60 = &DAT_025886f8;
      (*(code *)PTR__objc_retain_02578638)();
      local_58 = lVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_redeemCode_wxId_completion__026b3708,lVar4,lVar3,&local_78);
      _objc_storeStrong(&local_58,0);
      local_4c = 0;
    }
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

