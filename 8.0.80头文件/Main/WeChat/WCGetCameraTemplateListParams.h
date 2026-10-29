@interface WCGetCameraTemplateListParams : NSObject <NSCopying>
{
    BOOL _effectContextEnabled; // +0x8
    NSString * _fromTmplId; // +0x10
    unsigned long long _fromEventId; // +0x18
    NSString * _musicId; // +0x20
    unsigned long long _tabId; // +0x28
    unsigned long long _enterScene; // +0x30
    unsigned long long _playId; // +0x38
    NSString * _feedId; // +0x40
    NSMutableArray * _assetItems; // +0x48
    NSString * _shootAppliedTemplateID; // +0x50
    NSString * _followWrapTemplateID; // +0x58
}
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)shouldDisplayTemplateWithID:(id)arg1;
- (id)fromTmplId;
- (void)setFromTmplId:(id)arg1;
- (unsigned long long)fromEventId;
- (void)setFromEventId:(unsigned long long)arg1;
- (id)musicId;
- (void)setMusicId:(id)arg1;
- (unsigned long long)tabId;
- (void)setTabId:(unsigned long long)arg1;
- (unsigned long long)enterScene;
- (void)setEnterScene:(unsigned long long)arg1;
- (unsigned long long)playId;
- (void)setPlayId:(unsigned long long)arg1;
- (id)feedId;
- (void)setFeedId:(id)arg1;
- (id)assetItems;
- (void)setAssetItems:(id)arg1;
- (BOOL)effectContextEnabled;
- (void)setEffectContextEnabled:(BOOL)arg1;
- (id)shootAppliedTemplateID;
- (void)setShootAppliedTemplateID:(id)arg1;
- (id)followWrapTemplateID;
- (void)setFollowWrapTemplateID:(id)arg1;
- (void).cxx_destruct;
@end
