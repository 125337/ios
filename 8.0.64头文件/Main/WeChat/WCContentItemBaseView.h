@interface WCContentItemBaseView : MMUIView <WCForceTouchTriggerLongPressProtocol>
{
    UINavigationController * _navigationController; // +0x8
    WCDataItem * _oDataItem; // +0x10
    long long _touchCount; // +0x18
    BOOL _bShowDetail; // +0x20
    BOOL _bIsLongPressHandled; // +0x21
    BOOL _bTouchEnds; // +0x22
    BOOL _bFromDetail; // +0x23
    BOOL _bSnsScene; // +0x24
    CGSize _fixMediaSize; // +0x28
    WCContentItemViewOptions * _options; // +0x38
    unsigned long long _contentItemScene; // +0x40
    ShareDataToOpenSDKController * _shareDataToOpenSDKController; // +0x48
    id <WCContentItemBaseViewDelegate> _itemViewDelegate; // +0x50
    long long _homepageType; // +0x58
}
+ (double)heightForMedia:(id)arg1;
+ (double)heightForMedia:(id)arg1 showDetail:(BOOL)arg2;
+ (double)heightForMedia:(id)arg1 showDetail:(BOOL)arg2 appID:(id)arg3;
+ (double)heightForMedia:(id)arg1 pageContext:(id)arg2 showDetail:(BOOL)arg3;
+ (CGSize)getImageSize:(id)arg1;
- (id)initWithDataItem:(id)arg1 options:(id)arg2;
- (id)initWithWCDataItem:(id)arg1;
- (id)initWithWCDataItem:(id)arg1 showDetail:(BOOL)arg2;
- (id)initWithWCDataItem:(id)arg1 showDetail:(BOOL)arg2 withScene:(unsigned long long)arg3;
- (id)initWithWCDataItem:(id)arg1 showDetail:(BOOL)arg2 withScene:(unsigned long long)arg3 fixMediaSize:(CGSize)arg4;
- (id)initWithWCDataItem:(id)arg1 showDetail:(BOOL)arg2 snsScene:(BOOL)arg3;
- (void)initViewsWithWCDataItem:(id)arg1;
- (void)dealloc;
- (id)pageContext;
- (id)getTopViewController;
- (id)getMainContentView;
- (long long)menuTriggerScene;
- (BOOL)canBecomeFirstResponder;
- (void)setHighlightedColor;
- (void)setNormalColor;
- (void)autoPlayWithoutSound;
- (void)autoPauseWithoutSound;
- (double)fetchVideoCurrentPlaybackTime;
- (void)contentItemWillDisplay;
- (void)contentItemDidEndDisplaying;
- (void)contentItemWillDisappear;
- (void)contentItemDidEndDecelerating;
- (void)contentItemInteractedByUser;
- (void)contentItemBecomeInvisible;
- (void)setNonInteractive;
- (void)setFromDetail;
- (void)onVoiceOverClick;
- (id)getVoiceOverStrForTimeline;
- (void)throwUrlMessage;
- (void)onLongTouch;
- (void)onMore:(id)arg1;
- (void)LongPressEvents;
- (void)onMenuItemClickWithActionType:(long long)arg1;
- (void)onMenuItemWillShow;
- (void)onVoiceOverTogglePlay;
- (BOOL)hasPlayButton;
- (BOOL)isPlaying;
- (void)triggerLongPressFor3DTouchAtLocation:(CGPoint)arg1 inCoordinateView:(id)arg2;
- (void)addFavorite;
- (void)shareToOpenSDK;
- (BOOL)canShareToOpenSDK;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (BOOL)isMenuItemsVisiable;
- (void)onMenuControllerWillHide:(id)arg1;
- (id)navigationController;
- (void)setNavigationController:(id)arg1;
- (id)oDataItem;
- (void)setODataItem:(id)arg1;
- (BOOL)bShowDetail;
- (void)setBShowDetail:(BOOL)arg1;
- (BOOL)bSnsScene;
- (void)setBSnsScene:(BOOL)arg1;
- (id)options;
- (unsigned long long)contentItemScene;
- (void)setContentItemScene:(unsigned long long)arg1;
- (id)shareDataToOpenSDKController;
- (void)setShareDataToOpenSDKController:(id)arg1;
- (id)itemViewDelegate;
- (void)setItemViewDelegate:(id)arg1;
- (long long)homepageType;
- (void)setHomepageType:(long long)arg1;
- (void).cxx_destruct;
@end
