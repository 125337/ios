@interface NewTipsUtils : NSObject
{
    NewTipsConfigCenter * _configsCenter; // +0x8
}
- (id)init;
- (id)GetRootPathOfNewTips;
- (BOOL)isBlank:(id)arg1;
- (BOOL)shouldShowTipsInfo:(id)arg1;
- (BOOL)isTimeValidate:(id)arg1;
- (BOOL)isTipsInfoValidate:(id)arg1;
- (BOOL)isRegionValidate:(id)arg1;
- (BOOL)isLanguageValidate:(id)arg1;
- (id)GetPathOfNewTipsBusinessInfos;
- (id)getXLabNewTipsConfig;
- (void)SaveNewTipsBusinessInfos:(id)arg1;
- (id)getTipsConfigWithTipsId:(unsigned int)arg1;
- (id)getAllConfigs;
- (id)LoadNewTipsBusinessInfos;
- (id)generateTipsInfoWithXml:(id)arg1;
- (BOOL)canReceiveXmlWithTipsInfo:(id)arg1;
- (id)configsCenter;
- (void)setConfigsCenter:(id)arg1;
- (void).cxx_destruct;
@end
