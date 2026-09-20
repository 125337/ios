// FUN_0086bdbc @ 0086bdbc

void FUN_0086bdbc(undefined8 param_1,undefined8 param_2)

{
  (*DAT_028cd620)(param_1,param_2);
  FUN_00878c68(param_1);
  if (((DAT_028cd85e & 1) != 0) || ((DAT_028cd85f & 1) != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    FUN_0087109c();
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  return;
}

