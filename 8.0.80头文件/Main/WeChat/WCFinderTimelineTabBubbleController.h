@interface WCFinderTimelineTabBubbleController : NSObject <WCFinderPopupPanelViewProtocol>
{
    BOOL _forbidenDisplay; // +0x8
    BOOL _bubbleDismissing; // +0x9
    BOOL _animatingHidden; // +0xa
    id <WCFinderTimelineTabBubbleDelegate> _delegate; // +0x10
    WCFinderEnterStreamTipBubbleView * _enterStreamTipBubbleView; // +0x18
    WCFinderPopupPanelView * _popupPanelView; // +0x20
    UIView * _container; // +0x28
    WCFinderBubbleActionItem * _currentAnimationItem; // +0x30
    NSMutableArray * _animationItemArray; // +0x38
    NSMutableArray * _unreadyItemArray; // +0x40
    unsigned long long _bubbleEraseReason; // +0x48
    WCFinderTLTabBubble * _bubble; // +0x50
    NSArray * _anchorFrames; // +0x58
    double _bubbleHeight; // +0x60
    long long _tabType; // +0x68
    WCFinderCornerTextBubbleView * _lastViewBubbleView; // +0x70
    WCFinderTimelineScrollTipsView * _statusTipsView; // +0x78
    unsigned long long _machineFeedMaxIndex; // +0x80
    NSMutableDictionary * _exposedExpiredTimeMap; // +0x88
    long long _currentSelectedTabType; // +0x90
    id /* block */ _localBubbleExposeBlock; // +0x98
    id /* block */ _localBubbleClickBlock; // +0xa0
    id /* block */ _localBubbleDismissBlock; // +0xa8
    WCFinderShadowBubbleView * _refreshBubbleView; // +0xb0
    WCFinderPostStateBubbleView * _postBubbleView; // +0xb8
    CGRect _personalFrame; // +0xc0
}
+ (int)convertTimelineTabTypeToTabFlag:(long long)arg1;
+ (long long)curEnterStreamTipSwitch;
+ (BOOL)curEnterStreamTipCanJump;
- (id)initWithContainer:(id)arg1;
- (void)resetAllSubviews;
- (id)animationItemArray;
- (id)unreadyItemArray;
- (void)layout;
- (double)bubbleBeginExposedTime;
- (id)refreshBubbleView;
- (id)popupPanelView;
- (void)onPopupPanelViewBubbleClick;
- (void)recordTabFrames:(id)arg1 personalFrame:(CGRect)arg2;
- (BOOL)refreshAnchorFramesBeforeDisplay;
- (void)setCurrentAnimationItem:(id)arg1;
- (BOOL)displayStreamShowInfo:(id)arg1;
- (BOOL)displayLocalDramaBubbleWithText:(id)arg1 exposeBlock:(id /* block */)arg2 clickBlock:(id /* block */)arg3 reportParamsBlock:(id /* block */)arg4 dismissBlock:(id /* block */)arg5;
- (BOOL)_displayTipsWith:(id)arg1 requirements:(id)arg2 darkBG:(BOOL)arg3;
- (long long)displayStyleForShowInfoType:(unsigned long long)arg1;
- (id)covertDisplayIconUrls:(id)arg1 mulitIcon:(BOOL)arg2;
- (void)showBubbleWithDslRender:(id)arg1 displayInfo:(id)arg2 requirements:(id)arg3 darkBG:(BOOL)arg4;
- (void)showBubbleWithIconUrls:(id)arg1 text:(id)arg2 style:(long long)arg3 darkBG:(BOOL)arg4 displayInfo:(id)arg5 requirements:(id)arg6;
- (void)showBubbleAnimation;
- (void)hideBubbleAnimation:(BOOL)arg1 completion:(id /* block */)arg2;
- (id)currentDisplayInfo;
- (void)updateBubbleFrame;
- (double)elementHeight;
- (BOOL)bubbleDisplaying;
- (void)setForbidenDisplay:(BOOL)arg1;
- (void)_createBubbleAnimationActionWithItemType:(unsigned long long)arg1 checkBlock:(id /* block */)arg2 prepareBlock:(id /* block */)arg3 requirements:(id)arg4 duration:(double)arg5;
- (void)_hiddenBubbleView:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)onBubbleDidClick;
- (BOOL)clickLocalDramaBubbleIfDisplaying;
- (void)notifyLocalBubbleDismiss;
- (void)resetTopRefreshTips;
- (void)showTopRefreshTipsAtCenterX:(double)arg1;
- (void)resetPopupPanelViewUnexpReasonType:(unsigned long long)arg1;
- (void)checkPopupPanelViewAtTabType:(long long)arg1 feedIndex:(long long)arg2 fromFeedInfo:(id)arg3 enablePopUpShow:(BOOL)arg4;
- (unsigned long long)currentNetworkTipsStyle;
- (double)networkTipsMaxWidth;
- (void)checkAndShowNetworkTips;
- (void)checkAndShowNetOffTips:(id)arg1;
- (void)ensureBubbleView;
- (void)checkAndShowEnterStreamTipWithScene:(int)arg1;
- (void)updateEnterStreamTip;
- (void)showEnterStreamTipAnimation;
- (void)hideEnterStreamTipAnimation:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)onenterStreamTipBubbleDidClick;
- (void)ensureEnterStreamTipBubbleView;
- (void)showLocalCacheScrollBubble:(id)arg1;
- (id)lastViewBubbleView;
- (void)hideTargetBubbleType:(unsigned long long)arg1 animated:(BOOL)arg2;
- (BOOL)checkTargetBubbleIsShowing:(unsigned long long)arg1;
- (id)postBubbleView;
- (BOOL)showPostBubbleViewByLastContentVM:(id)arg1 currentContentVM:(id)arg2 beginBubbleState:(unsigned long long)arg3;
- (void)resetPostBubbleView;
- (id)statusTipsView;
- (void)showStatusRefreshClickTips:(id /* block */)arg1 feedID:(id)arg2 animatePreconditionBlock:(id /* block */)arg3;
- (void)hideStatusRefreshByScrollToTid:(id)arg1;
- (void)hideStatusRefreshClickTips;
- (BOOL)timelineBubbleIsShowing;
- (BOOL)hasBubblePendingInPipeline;
- (unsigned long long)timelineBubbleShowType;
- (unsigned long long)timelineBubblePendingType;
- (double)timelineBubbleViewBottom;
- (void)timelineBubbleActionWhenChangeTab;
- (BOOL)bubbleAnimationInQueue:(unsigned long long)arg1;
- (id)getTargetBubbleActionItemBy:(unsigned long long)arg1;
- (id)popupBubbleActionItem;
- (void)checkAnimationQueueThrottled;
- (void)checkAnimationQueueThrottled:(double)arg1;
- (void)checkAnimationQueue;
- (void)notifyBottomChange;
- (void)checkUnreadyAnimationQueue;
- (void)_notifyBubbleItemDidEnqueue:(unsigned long long)arg1;
- (void)_notifyBubbleItemDidShow:(unsigned long long)arg1;
- (void)_notifyBubbleItemDidDismiss:(unsigned long long)arg1;
- (void)addItemToQueue:(id)arg1;
- (void)appendAnimationItemType:(unsigned long long)arg1 showDuration:(long long)arg2 requirements:(id)arg3 checkBlock:(id /* block */)arg4 prepareBlock:(id /* block */)arg5 showBlock:(id /* block */)arg6 dismissBlock:(id /* block */)arg7;
- (void)changeTargetBubbleAlphaType:(unsigned long long)arg1 alpha:(double)arg2;
- (void)changeBubbleAlpha:(double)arg1;
- (void)notifyMachineFeedIndexChanged:(unsigned long long)arg1;
- (void)notifyTabSelected:(long long)arg1;
- (void)notifyBubbleExpired:(long long)arg1;
- (BOOL)haveTabExposed:(long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)forbidenDisplay;
- (id)enterStreamTipBubbleView;
- (void)setEnterStreamTipBubbleView:(id)arg1;
- (void)setPopupPanelView:(id)arg1;
- (id)container;
- (void)setContainer:(id)arg1;
- (id)currentAnimationItem;
- (void)setAnimationItemArray:(id)arg1;
- (void)setUnreadyItemArray:(id)arg1;
- (BOOL)bubbleDismissing;
- (void)setBubbleDismissing:(BOOL)arg1;
- (unsigned long long)bubbleEraseReason;
- (void)setBubbleEraseReason:(unsigned long long)arg1;
- (id)bubble;
- (void)setBubble:(id)arg1;
- (BOOL)animatingHidden;
- (void)setAnimatingHidden:(BOOL)arg1;
- (id)anchorFrames;
- (void)setAnchorFrames:(id)arg1;
- (CGRect)personalFrame;
- (void)setPersonalFrame:(CGRect)arg1;
- (double)bubbleHeight;
- (void)setBubbleHeight:(double)arg1;
- (long long)tabType;
- (void)setTabType:(long long)arg1;
- (void)setLastViewBubbleView:(id)arg1;
- (void)setStatusTipsView:(id)arg1;
- (unsigned long long)machineFeedMaxIndex;
- (void)setMachineFeedMaxIndex:(unsigned long long)arg1;
- (id)exposedExpiredTimeMap;
- (void)setExposedExpiredTimeMap:(id)arg1;
- (long long)currentSelectedTabType;
- (void)setCurrentSelectedTabType:(long long)arg1;
- (id /* block */)localBubbleExposeBlock;
- (void)setLocalBubbleExposeBlock:(id /* block */)arg1;
- (id /* block */)localBubbleClickBlock;
- (void)setLocalBubbleClickBlock:(id /* block */)arg1;
- (id /* block */)localBubbleDismissBlock;
- (void)setLocalBubbleDismissBlock:(id /* block */)arg1;
- (void)setRefreshBubbleView:(id)arg1;
- (void)setPostBubbleView:(id)arg1;
- (void).cxx_destruct;
@end
