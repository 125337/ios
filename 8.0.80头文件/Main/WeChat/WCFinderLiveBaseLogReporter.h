@interface WCFinderLiveBaseLogReporter : NSObject <MMFinderLiveContentVMExt, MMLiveTaskMgrExt, IWCFinderLiveBaseLogReporterExt>
{
    BOOL _isPrivateAccount; // +0x8
    BOOL _liveStatus; // +0x9
    BOOL _isFloat; // +0xa
    BOOL _isShowWaApp; // +0xb
    unsigned int _shopPermit; // +0xc
    unsigned int _shareTimelineCount; // +0x10
    unsigned int _shareSingleChatCount; // +0x14
    unsigned int _shareGroupChatCount; // +0x18
    unsigned int _minizaionCount; // +0x1c
    long long _roleType; // +0x20
    unsigned long long _liveStartTime; // +0x28
    MMFinderLiveTaskId * _liveTaskId; // +0x30
    unsigned long long _liveId; // +0x38
    NSString * _finderFeedId; // +0x40
    NSString * _finderUserName; // +0x48
    NSString * _liveTopic; // +0x50
    NSString * _sessionBuffer; // +0x58
    unsigned long long _profileViewShowTime; // +0x60
    NSString * _commentScene; // +0x68
    NSString * _scenenote; // +0x70
    long long _enterIconType; // +0x78
    unsigned long long _enterRoomTime; // +0x80
    NSString * _tagName; // +0x88
    NSString * _subTagName; // +0x90
    unsigned long long _visiableMode; // +0x98
    unsigned long long _visiableCount; // +0xa0
    unsigned long long _liveEndTime; // +0xa8
    unsigned long long _lastFullTS; // +0xb0
    unsigned long long _lastFloatTS; // +0xb8
    unsigned long long _totalFullTime; // +0xc0
    unsigned long long _totalFloatTime; // +0xc8
    NSString * _channelExtra; // +0xd0
    NSDictionary * _channelExtraDict; // +0xd8
}
+ (id)genSwitchExtraDic;
+ (id)getLiveCommonActionInfo:(id)arg1;
+ (id)supplyLiveCommonInfo:(id)arg1 toChannelExtra:(id)arg2;
+ (id)genDictionaryOf:(id)arg1;
- (id)init;
- (id)initWithRoleType:(long long)arg1;
- (id)initWithRoleType:(long long)arg1 dataItem:(id)arg2;
- (void)updateEnterSessionId;
- (void)updateLiveEndTime:(unsigned long long)arg1;
- (void)registerBaseExtension;
- (void)unRegisterBaseExtension;
- (void)setChannelExtraDict:(id)arg1;
- (id)liveTask;
- (void)enterLive:(id)arg1;
- (void)onDoneForwardForForwardViewWithContentVM:(id)arg1 isCertificateType:(BOOL)arg2;
- (void)onDoneForwardMessageWithContentVM:(id)arg1 andUserArray:(id)arg2 isCertificateType:(BOOL)arg3;
- (void)onForwardSharePreConfirmSend:(id)arg1 wxUsernameArray:(id)arg2;
- (void)onCancelForwardForForwardViewWithContentVM:(id)arg1;
- (void)onForwardMessageCancelWithContentVM:(id)arg1 andUserArray:(id)arg2;
- (void)reportShareTextState;
- (void)reportShareTextStateWithIsCertificateType:(BOOL)arg1;
- (void)onMinimizeWindowWillDisplay:(id)arg1;
- (void)onMinimizeWindowDidHide:(id)arg1;
- (void)onCollapseAnimationWillStart:(id)arg1;
- (void)onMinimizeInteractiveWillEnd:(id)arg1;
- (void)onExtendFromCollapseAnimationDidEndWithLiveTask:(id)arg1;
- (void)onWAWebViewControllerAppear:(id)arg1;
- (void)onWAWebViewControllerDisappear:(id)arg1;
- (void)notifyVerifyAction:(unsigned long long)arg1;
- (void)reportVerifyAction:(unsigned long long)arg1;
- (void)reportEnterFloat:(id)arg1;
- (void)reportQuitFloat:(id)arg1;
- (void)reportOpenWxaShopWithLiveTask:(id)arg1 clickScene:(long long)arg2 appId:(id)arg3 clickId:(id)arg4;
- (void)onShareTimeline;
- (void)onShareSession:(id)arg1;
- (void)onCancleShareTimeline;
- (void)onCancleShareSession:(id)arg1;
- (void)onFloatOperation:(unsigned long long)arg1;
- (void)onVerifyAction:(unsigned long long)arg1;
- (void)onShareTextState;
- (void)onShareOlympicWinterTimeline;
- (void)onShareOlympicWinterSession:(id)arg1;
- (void)onShareOlympicWinterTextState;
- (id)replaceCommaToSemicolon:(id)arg1;
- (id)replaceSemicolonToComma:(id)arg1;
- (long long)roleType;
- (void)setRoleType:(long long)arg1;
- (unsigned long long)liveStartTime;
- (void)setLiveStartTime:(unsigned long long)arg1;
- (id)liveTaskId;
- (void)setLiveTaskId:(id)arg1;
- (unsigned long long)liveId;
- (void)setLiveId:(unsigned long long)arg1;
- (id)finderFeedId;
- (void)setFinderFeedId:(id)arg1;
- (id)finderUserName;
- (void)setFinderUserName:(id)arg1;
- (id)liveTopic;
- (void)setLiveTopic:(id)arg1;
- (BOOL)isPrivateAccount;
- (void)setIsPrivateAccount:(BOOL)arg1;
- (id)sessionBuffer;
- (void)setSessionBuffer:(id)arg1;
- (BOOL)liveStatus;
- (void)setLiveStatus:(BOOL)arg1;
- (unsigned long long)profileViewShowTime;
- (void)setProfileViewShowTime:(unsigned long long)arg1;
- (id)commentScene;
- (void)setCommentScene:(id)arg1;
- (id)scenenote;
- (void)setScenenote:(id)arg1;
- (long long)enterIconType;
- (void)setEnterIconType:(long long)arg1;
- (unsigned long long)enterRoomTime;
- (void)setEnterRoomTime:(unsigned long long)arg1;
- (unsigned int)shopPermit;
- (void)setShopPermit:(unsigned int)arg1;
- (id)tagName;
- (void)setTagName:(id)arg1;
- (id)subTagName;
- (void)setSubTagName:(id)arg1;
- (unsigned long long)visiableMode;
- (void)setVisiableMode:(unsigned long long)arg1;
- (unsigned long long)visiableCount;
- (void)setVisiableCount:(unsigned long long)arg1;
- (unsigned long long)liveEndTime;
- (void)setLiveEndTime:(unsigned long long)arg1;
- (unsigned int)shareTimelineCount;
- (void)setShareTimelineCount:(unsigned int)arg1;
- (unsigned int)shareSingleChatCount;
- (void)setShareSingleChatCount:(unsigned int)arg1;
- (unsigned int)shareGroupChatCount;
- (void)setShareGroupChatCount:(unsigned int)arg1;
- (unsigned long long)lastFullTS;
- (void)setLastFullTS:(unsigned long long)arg1;
- (unsigned long long)lastFloatTS;
- (void)setLastFloatTS:(unsigned long long)arg1;
- (unsigned long long)totalFullTime;
- (void)setTotalFullTime:(unsigned long long)arg1;
- (unsigned long long)totalFloatTime;
- (void)setTotalFloatTime:(unsigned long long)arg1;
- (BOOL)isFloat;
- (void)setIsFloat:(BOOL)arg1;
- (BOOL)isShowWaApp;
- (void)setIsShowWaApp:(BOOL)arg1;
- (unsigned int)minizaionCount;
- (void)setMinizaionCount:(unsigned int)arg1;
- (id)channelExtra;
- (void)setChannelExtra:(id)arg1;
- (id)channelExtraDict;
- (void).cxx_destruct;
@end
