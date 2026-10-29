@interface TextStateViewCountButton : TextStateBlurButton
{
    BOOL _hasAutoTriggered; // +0x8
    BOOL _isAutoTrigger; // +0x9
    BOOL _hasPendingQuery; // +0xa
    TextStateViewCountBubbleHostView * _bubbleHostView; // +0x10
    TextStateViewCountButtonSettings * _settings; // +0x18
    id /* block */ _bubbleTapHandler; // +0x20
    unsigned long long _viewCount; // +0x28
    NSMutableArray * _animatingBubbles; // +0x30
    NSArray * _allUsernames; // +0x38
    unsigned long long _bubbleCursor; // +0x40
    unsigned long long _currentGroupActiveCount; // +0x48
    NSMutableSet * _onScreenUsernames; // +0x50
    NSString * _statusId; // +0x58
    double _lastReadQueryTime; // +0x60
    NSArray * _pendingUsernames; // +0x68
    NSMutableSet * _pendingRemovedUsernames; // +0x70
    double _lastConfigureTime; // +0x78
    unsigned long long _lastConfigureViewCount; // +0x80
    NSArray * _lastConfigureUsernames; // +0x88
    double _lastConfigureStatusIdTime; // +0x90
    NSString * _lastConfigureStatusId; // +0x98
    TextStateViewCountReportConfig * _reportConfig; // +0xa0
    NSMutableDictionary * _bubblePopTypeMap; // +0xa8
}
- (id)initWithFrame:(CGRect)arg1;
- (id)init;
- (void)commonInit;
- (void)configureWithViewCount:(unsigned long long)arg1 usernames:(id)arg2;
- (void)configureWithStatusId:(id)arg1;
- (void)autoTriggerBubbleIfNeeded;
- (void)replayAutoBubbleIfNeeded;
- (void)requestReadUsernamesIfNeeded;
- (void)queryReadUsernamesAsync;
- (void)applyNewUsernames:(id)arg1;
- (void)applyPendingUsernamesIfReady;
- (void)triggerPendingReadQueryIfNeeded;
- (void)updateWithViewCount:(unsigned long long)arg1;
- (void)configureWithViewCountOnly:(unsigned long long)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)applyStyle;
- (void)layoutSubviews;
- (void)onTapViewCountButton;
- (void)syncTapHandlerToHost;
- (void)setBubbleTapHandler:(id /* block */)arg1;
- (void)setBubbleHostView:(id)arg1;
- (void)triggerNextBubbleGroup;
- (BOOL)isStatusIdLatestForCurrentUser;
- (BOOL)isUsernameValidForBubble:(id)arg1;
- (BOOL)canTriggerWithUsernames:(id)arg1;
- (void)addBubbleForUsername:(id)arg1 centerX:(double)arg2 startY:(double)arg3 inContainer:(id)arg4 delay:(double)arg5;
- (id)shuffleArray:(id)arg1;
- (void)addBubbleWithUsername:(id)arg1 centerX:(double)arg2 startY:(double)arg3 inContainer:(id)arg4;
- (void)removeBubble:(id)arg1 reason:(id)arg2;
- (void)removeUsername:(id)arg1;
- (void)flushPendingRemovedUsernames;
- (void)onBubbleTap:(id)arg1;
- (void)resetBubbleState;
- (void)stopBubbleAnimation;
- (void)forceStopBubble:(id)arg1;
- (void)willMoveToWindow:(id)arg1;
- (void)dealloc;
- (void)updateAccessibility;
- (id)imageWithColor:(id)arg1 size:(CGSize)arg2 cornerRadius:(double)arg3;
- (void)configReportWithConfig:(id)arg1;
- (id)currentReportSessionId;
- (id)buildSelfReportParams;
- (void)reportSelfViewExpIfNeeded;
- (void)reportSelfViewClk;
- (void)reportAvatarPopoverEvent:(id)arg1 avatarUsername:(id)arg2 popType:(unsigned long long)arg3;
- (void)reportAvatarPopoverClickWithUsername:(id)arg1;
- (id)bubbleHostView;
- (id)settings;
- (void)setSettings:(id)arg1;
- (id /* block */)bubbleTapHandler;
- (unsigned long long)viewCount;
- (void)setViewCount:(unsigned long long)arg1;
- (id)animatingBubbles;
- (void)setAnimatingBubbles:(id)arg1;
- (id)allUsernames;
- (void)setAllUsernames:(id)arg1;
- (unsigned long long)bubbleCursor;
- (void)setBubbleCursor:(unsigned long long)arg1;
- (unsigned long long)currentGroupActiveCount;
- (void)setCurrentGroupActiveCount:(unsigned long long)arg1;
- (BOOL)hasAutoTriggered;
- (void)setHasAutoTriggered:(BOOL)arg1;
- (BOOL)isAutoTrigger;
- (void)setIsAutoTrigger:(BOOL)arg1;
- (id)onScreenUsernames;
- (void)setOnScreenUsernames:(id)arg1;
- (id)statusId;
- (void)setStatusId:(id)arg1;
- (double)lastReadQueryTime;
- (void)setLastReadQueryTime:(double)arg1;
- (BOOL)hasPendingQuery;
- (void)setHasPendingQuery:(BOOL)arg1;
- (id)pendingUsernames;
- (void)setPendingUsernames:(id)arg1;
- (id)pendingRemovedUsernames;
- (void)setPendingRemovedUsernames:(id)arg1;
- (double)lastConfigureTime;
- (void)setLastConfigureTime:(double)arg1;
- (unsigned long long)lastConfigureViewCount;
- (void)setLastConfigureViewCount:(unsigned long long)arg1;
- (id)lastConfigureUsernames;
- (void)setLastConfigureUsernames:(id)arg1;
- (double)lastConfigureStatusIdTime;
- (void)setLastConfigureStatusIdTime:(double)arg1;
- (id)lastConfigureStatusId;
- (void)setLastConfigureStatusId:(id)arg1;
- (id)reportConfig;
- (void)setReportConfig:(id)arg1;
- (id)bubblePopTypeMap;
- (void)setBubblePopTypeMap:(id)arg1;
- (void).cxx_destruct;
@end
