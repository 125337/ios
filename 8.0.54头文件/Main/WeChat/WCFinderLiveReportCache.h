@interface WCFinderLiveReportCache : NSObject
{
    BOOL _sIsFloat; // +0x8
    NSString * _sLastEnterRoomCommentScene; // +0x10
    NSString * _sLastEnterRoomScenenote; // +0x18
    long long _sLastClickEnterIconType; // +0x20
    NSString * _sLastClickCommentScene; // +0x28
    unsigned long long _sLastClickFeedIndex; // +0x30
    NSString * _sLastClickFeedId; // +0x38
    NSString * _sLastClickSessionBuffer; // +0x40
    long long _sLastShareClickType; // +0x48
    NSString * _sLastShareUserName; // +0x50
    NSString * _sLastShareTimelineFeedId; // +0x58
    unsigned long long _sLastEnterEntryScene; // +0x60
    NSString * _sLastClickChannelExtra; // +0x68
    NSString * _sLastRefPageId; // +0x70
    NSString * _sLastEnterFromScene; // +0x78
    NSString * _sOriginEnterFromScene; // +0x80
    long long _sPageType; // +0x88
    unsigned long long _sEnterSessionId; // +0x90
    NSDictionary * _sReportParamsDic; // +0x98
    unsigned long long _identityPrivacySettingFromSrc; // +0xa0
    unsigned long long _identityPrivacySettingEnterTS; // +0xa8
}
+ (id)sharedReportCache;
- (id)getLastEnterRoomScenenote;
- (void)setLastEnterRoomScenenote:(id)arg1;
- (id)getLastEnterRoomCommentScene;
- (void)setLastEnterRoomCommentScene:(id)arg1;
- (long long)getLastClickEnterIconType;
- (void)setLastClickEnterIconType:(long long)arg1;
- (id)getLastClickCommentScene;
- (void)setLastClickCommentScene:(id)arg1;
- (id)getLastEnterFromScene;
- (id)getOriginEnterFromScene;
- (unsigned long long)getLastClickFeedIndex;
- (void)setLastClickFeedIndex:(unsigned long long)arg1;
- (id)getLastClickFeedId;
- (void)setLastClickFeedId:(id)arg1;
- (id)getLastClickSessionBuffer;
- (void)setLastClickSessionBuffer:(id)arg1;
- (long long)getLastShareClickType;
- (void)setLastShareClickType:(long long)arg1;
- (id)getLastShareUserName;
- (void)setLastShareUserName:(id)arg1;
- (id)getLastShareTimelineFeedId;
- (void)setLastShareTimelineFeedId:(id)arg1;
- (unsigned long long)getLastEnterEntryScene;
- (void)setLastEnterEntryScene:(unsigned long long)arg1;
- (id)getLastClickChannelExtra;
- (void)setLastClickChannelExtra:(id)arg1;
- (id)getLastRefPageId;
- (void)setLastRefPageId:(id)arg1;
- (void)setIsFloat:(BOOL)arg1;
- (BOOL)getIsFloat;
- (void)setLivePageType:(long long)arg1;
- (long long)getLivePageType;
- (void)setEnterSessionId:(unsigned long long)arg1;
- (unsigned long long)getEnterSessionId;
- (void)cleanCacheExitLive;
- (void)resetEnterFromScene;
- (void)resetLastClickChannelExtra;
- (void)setReportParamsDic:(id)arg1;
- (id)getReportParamsDic:(BOOL)arg1;
- (BOOL)getIsLiveScroll;
- (unsigned long long)getLastIdentityPrivacySettingFromSrc;
- (void)setLastIdentityPrivacySettingFromSrc:(unsigned long long)arg1;
- (unsigned long long)getLastIdentityPrivacySettingTS;
- (void)setLastIdentityPrivacySettingTS:(unsigned long long)arg1;
- (id)sLastEnterRoomCommentScene;
- (void)setSLastEnterRoomCommentScene:(id)arg1;
- (id)sLastEnterRoomScenenote;
- (void)setSLastEnterRoomScenenote:(id)arg1;
- (long long)sLastClickEnterIconType;
- (void)setSLastClickEnterIconType:(long long)arg1;
- (id)sLastClickCommentScene;
- (void)setSLastClickCommentScene:(id)arg1;
- (unsigned long long)sLastClickFeedIndex;
- (void)setSLastClickFeedIndex:(unsigned long long)arg1;
- (id)sLastClickFeedId;
- (void)setSLastClickFeedId:(id)arg1;
- (id)sLastClickSessionBuffer;
- (void)setSLastClickSessionBuffer:(id)arg1;
- (long long)sLastShareClickType;
- (void)setSLastShareClickType:(long long)arg1;
- (id)sLastShareUserName;
- (void)setSLastShareUserName:(id)arg1;
- (id)sLastShareTimelineFeedId;
- (void)setSLastShareTimelineFeedId:(id)arg1;
- (unsigned long long)sLastEnterEntryScene;
- (void)setSLastEnterEntryScene:(unsigned long long)arg1;
- (id)sLastClickChannelExtra;
- (void)setSLastClickChannelExtra:(id)arg1;
- (id)sLastRefPageId;
- (void)setSLastRefPageId:(id)arg1;
- (id)sLastEnterFromScene;
- (void)setSLastEnterFromScene:(id)arg1;
- (id)sOriginEnterFromScene;
- (void)setSOriginEnterFromScene:(id)arg1;
- (BOOL)sIsFloat;
- (void)setSIsFloat:(BOOL)arg1;
- (long long)sPageType;
- (void)setSPageType:(long long)arg1;
- (unsigned long long)sEnterSessionId;
- (void)setSEnterSessionId:(unsigned long long)arg1;
- (id)sReportParamsDic;
- (void)setSReportParamsDic:(id)arg1;
- (unsigned long long)identityPrivacySettingFromSrc;
- (void)setIdentityPrivacySettingFromSrc:(unsigned long long)arg1;
- (unsigned long long)identityPrivacySettingEnterTS;
- (void)setIdentityPrivacySettingEnterTS:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

