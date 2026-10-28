@interface MMFinderLiveTestLivePartialVisivilitySettingInfo : MMFinderLiveVisivilitySettingInfo
{
    NSArray * _originalChoosedContactList; // +0x8
}
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)copyInfosFromSettingInfo:(id)arg1;
- (void)recoverInfosToInitParam:(id)arg1;
- (BOOL)isSettingEnabled;
- (id)getDescriptionForCurrentSetting;
- (id)originalChoosedContactList;
- (void)setOriginalChoosedContactList:(id)arg1;
- (void).cxx_destruct;
@end
