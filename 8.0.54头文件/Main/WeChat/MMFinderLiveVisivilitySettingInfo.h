@interface MMFinderLiveVisivilitySettingInfo : NSObject <NSCopying>
{
    BOOL _isModified; // +0x8
    int _currentLiveMode; // +0xc
    long long _currentVisibilityMode; // +0x10
    NSArray * _allVisibilityFileList; // +0x18
}
- (id)copyWithZone:(_NSZone *)arg1;
- (void)copyInfosFromSettingInfo:(id)arg1;
- (void)recoverInfosToInitParam:(id)arg1;
- (BOOL)isSettingEnabled;
- (id)getSettingDescription;
- (id)getDescriptionForCurrentSetting;
- (id)getDefaultDescription;
- (id)audienceFileListWithFileLists:(id)arg1;
- (int)currentLiveMode;
- (void)setCurrentLiveMode:(int)arg1;
- (long long)currentVisibilityMode;
- (void)setCurrentVisibilityMode:(long long)arg1;
- (id)allVisibilityFileList;
- (void)setAllVisibilityFileList:(id)arg1;
- (BOOL)isModified;
- (void)setIsModified:(BOOL)arg1;
- (void).cxx_destruct;
@end

