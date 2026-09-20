// platformAllowed: @ 01016fd0

/* Function Stack Size: 0x18 bytes */

bool WCRefineLinkParser::platformAllowed_(ID param_1,SEL param_2,long_long param_3)

{
  undefined *puVar1;
  byte local_54;
  byte local_50;
  byte local_4c;
  byte local_48;
  byte local_44;
  byte local_40;
  undefined *local_38;
  long_long local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar1;
  if (local_30 == 1) {
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_autoParseLinkDouyinEnabled_026adbb8);
    local_11 = (byte)puVar1 & 1;
  }
  else if (local_30 == 2) {
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_autoParseLinkXhsEnabled_026adbc0);
    local_11 = (byte)puVar1 & 1;
  }
  else if (local_30 == 3) {
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_autoParseLinkBilibiliEnabled_026adbc8);
    local_40 = 0;
    if (((ulong)puVar1 & 1) != 0) {
      local_40 = 0;
      FUN_01017334();
    }
    local_11 = local_40 & 1;
  }
  else if (local_30 == 4) {
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_autoParseLinkXEnabled_026adbd0);
    local_44 = 0;
    if (((ulong)puVar1 & 1) != 0) {
      local_44 = 0;
      FUN_01017334();
    }
    local_11 = local_44 & 1;
  }
  else if (local_30 == 5) {
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_autoParseLinkTikTokEnabled_026adbd8);
    local_48 = 0;
    if (((ulong)puVar1 & 1) != 0) {
      local_48 = 0;
      FUN_01017334();
    }
    local_11 = local_48 & 1;
  }
  else if (local_30 == 6) {
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_autoParseLinkInstagramEnabled_026adbe0);
    local_4c = 0;
    if (((ulong)puVar1 & 1) != 0) {
      local_4c = 0;
      FUN_01017334();
    }
    local_11 = local_4c & 1;
  }
  else if (local_30 == 7) {
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_autoParseLinkKuaishouEnabled_026adbe8);
    local_50 = 0;
    if (((ulong)puVar1 & 1) != 0) {
      local_50 = 0;
      FUN_01017334();
    }
    local_11 = local_50 & 1;
  }
  else if (local_30 == 8) {
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_autoParseLinkPipixiaEnabled_026adbf0);
    local_54 = 0;
    if (((ulong)puVar1 & 1) != 0) {
      local_54 = 0;
      FUN_01017334();
    }
    local_11 = local_54 & 1;
  }
  else {
    local_11 = 0;
  }
  _objc_storeStrong(&local_38,0);
  return local_11 & 1;
}

