@interface WCFinderTimelineTabBubbleController : NSObject <WCFinderPopupPanelViewProtocol>
{
    BOOL _forbidenDisplay; // +0x8
    BOOL _bubbleDismissing; // +0x9
    BOOL _animatingHidden; // +0xa
    id <WCFinderTimelineTabBubbleDelegate> _delegate; // +0x10
    long long _category; // +0x18
    WCFinderEnterStreamTipBubbleView * _enterStreamTipBubbleView; // +0x20
    WCFinderPopupPanelView * _popupPanelView; // +0x28
    UIView * _container; // +0x30
    WCFinderBubbleActionItem * _currentAnimationItem; // +0x38
    NSMutableArray * _animationItemArray; // +0x40
    NSMutableArray * _unreadyItemArray; // +0x48
    WCFinderTLTabBubble * _bubble; // +0x50
    NSArray * _anchorFrames; // +0x58
    double _bubbleHeight; // +0x60
    UILabel * _networkTipLabel; // +0x68
    WCFinderCornerTextBubbleView * _lastViewBubbleView; // +0x70
    WCFinderTimelineScrollTipsView * _statusTipsView; // +0x78
    unsigned long long _machineFeedMaxIndex; // +0x80
    NSMutableArray * _exposedTabTypes; // +0x88
    long long _currentSelectedTabType; // +0x90
    WCFinderShadowBubbleView * _refreshBubbleView; // +0x98
}
+ (int)convertTimelineTabTypeToTabFlag:(long long)arg1;
+ (long long)curEnterStreamTipSwitch;
+ (BOOL)curEnterStreamTipCanJump;
- (id)initWithContainer:(id)arg1;
- (void)resetAllSubviews;
- (id)animationItemArray;
- (id)unreadyItemArray;
- (void)layout;
- (id)refreshBubbleView;
- (id)popupPanelView;
- (void)onPopupPanelViewBubbleClick;
- (void)recardTabFrames:(id)arg1;
- (void)setCurrentAnimationItem:(id)arg1;
- (BOOL)displayStreamShowInfo:(id)arg1;
- (BOOL)_displayTipsWith:(id)arg1 requirements:(id)arg2;
- (long long)displayStyleForShowInfoType:(unsigned long long)arg1;
- (id)covertDisplayIconUrls:(id)arg1 mulitIcon:(BOOL)arg2;
- (void)showBubbleWithDslRender:(id)arg1 displayInfo:(id)arg2 requirements:(id)arg3;
- (void)showBubbleWithIconUrls:(id)arg1 text:(id)arg2 style:(long long)arg3 displayInfo:(id)arg4 requirements:(id)arg5;
- (void)showBubbleAnimation;
- (void)hideBubbleAnimation:(BOOL)arg1 completion:(id /* block */)arg2;
- (id)currentDisplayInfo;
- (void)updateBubbleFrame;
- (double)elementHeight;
- (BOOL)bubbleDisplaying;
- (void)setForbidenDisplay:(BOOL)arg1;
- (void)_createRedDotAnimationActionByCheckBlock:(id /* block */)arg1 prepareBlock:(id /* block */)arg2 requirements:(id)arg3 duration:(double)arg4;
- (void)_hiddenBubbleView:(BOOL)arg1;
- (void)onBubbleDidClick;
- (void)resetTopRefreshTips;
- (void)showTopRefreshTipsAtCenterX:(double)arg1;
- (void)resetPopupPanelViewUnexpReasonType:(unsigned long long)arg1;
- (void)checkPopupPanelViewAtTabType:(long long)arg1 feedIndex:(long long)arg2 fromFeedInfo:(id)arg3 enablePopUpShow:(BOOL)arg4;
- (void)checkAndShowNetworkTips;
- (id)networkTipLabel;
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
- (id)statusTipsView;
- (void)showStatusRefreshClickTips:(id /* block */)arg1 feedID:(id)arg2;
- (void)hideStatusRefreshByScrollToTid:(id)arg1;
- (void)hideStatusRefreshClickTips;
- (BOOL)timelineBubbleIsShowing;
- (double)timelineBubbleViewBottom;
- (void)timelineBubbleActionWhenChangeTab;
- (BOOL)bubbleAnimationInQueue:(unsigned long long)arg1;
- (id)getTargetBubbleActionItemBy:(unsigned long long)arg1;
- (void)checkAnimationQueueThrottled;
- (void)checkAnimationQueueThrottled:(double)arg1;
- (void)checkAnimationQueue;
- (void)notifyBottomChange;
- (void)checkUnreadyAnimationQueue;
- (void)addItemToQueue:(id)arg1;
- (void)appendAnimationItemType:(unsigned long long)arg1 showDuration:(long long)arg2 requirements:(id)arg3 checkBlock:(id /* block */)arg4 prepareBlock:(id /* block */)arg5 showBlock:(id /* block */)arg6 dismissBlock:(id /* block */)arg7;
- (void)changeTargetBubbleAlphaType:(unsigned long long)arg1 alpha:(double)arg2;
- (void)changeBubbleAlpha:(double)arg1;
- (void)notifyMachineFeedIndexChanged:(unsigned long long)arg1;
- (void)notifyTabSelected:(long long)arg1;
- (BOOL)haveTabExposed:(long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)forbidenDisplay;
- (long long)category;
- (void)setCategory:(long long)arg1;
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
- (id)bubble;
- (void)setBubble:(id)arg1;
- (BOOL)animatingHidden;
- (void)setAnimatingHidden:(BOOL)arg1;
- (id)anchorFrames;
- (void)setAnchorFrames:(id)arg1;
- (double)bubbleHeight;
- (void)setBubbleHeight:(double)arg1;
- (void)setNetworkTipLabel:(id)arg1;
- (void)setLastViewBubbleView:(id)arg1;
- (void)setStatusTipsView:(id)arg1;
- (unsigned long long)machineFeedMaxIndex;
- (void)setMachineFeedMaxIndex:(unsigned long long)arg1;
- (id)exposedTabTypes;
- (void)setExposedTabTypes:(id)arg1;
- (long long)currentSelectedTabType;
- (void)setCurrentSelectedTabType:(long long)arg1;
- (void)setRefreshBubbleView:(id)arg1;
- (void).cxx_destruct;
@end

