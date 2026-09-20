// applyActiveBallAlpha @ 015e8f8c

/* Function Stack Size: 0x10 bytes */

void __thiscall
WCRQuickChatWindow::applyActiveBallAlpha(WCRQuickChatWindow *this,ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  double in_d0;
  double local_78;
  double local_70;
  double local_68;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_18;
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_idleSnapped_026b1350);
  if ((IVar2 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_quickChatBallAlpha_026b1358);
    local_68 = in_d0;
  }
  else {
    local_68 = DAT_02323c78;
  }
  if (local_68 <= 1.0) {
    local_70 = local_68;
  }
  else {
    local_70 = 1.0;
  }
  if (local_70 <= 0.0) {
    local_78 = 0.0;
  }
  else {
    local_78 = local_70;
  }
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_ball_026b11a0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_78);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  _objc_storeStrong(&local_28,0);
  return;
}

