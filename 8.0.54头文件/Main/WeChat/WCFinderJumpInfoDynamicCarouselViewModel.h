@interface WCFinderJumpInfoDynamicCarouselViewModel : NSObject <WCFinderJumpInfoAsyncLoadManagerExt>
{
    BOOL _isPlayingCarousel; // +0x8
    int _showPosition; // +0xc
    id <WCFinderJumpInfoDynamicCarouselViewModelDelegate> _delegate; // +0x10
    WCFinderFeedContentVM * _feedContentVM; // +0x18
    WCFinderJumpInfo * _jumpInfo; // +0x20
    FinderJumpInfo_Style * _originalShowStyle; // +0x28
    FinderJumpInfo_Style * _currentShowStyle; // +0x30
    FinderJumpInfo_DynamicCarouselCardStyle * _currentDynamicCarouselCardStyle; // +0x38
    unsigned long long _cardShape; // +0x40
    double _appearingDelayTimeInMS; // +0x48
    double _expandingDelayTimeInMS; // +0x50
    NSString * _iconURL; // +0x58
    WCFinderJumpInfoDynamicCarouselDetailSubViewItem * _iconStatusViewItem; // +0x60
    WCFinderJumpInfoDynamicCarouselTitleViewItem * _titleViewItem; // +0x68
    WCFinderJumpInfoDynamicCarouselDetailViewItem * _detailViewItem; // +0x70
    NSAttributedString * _bottomAttributedText; // +0x78
    NSString * _actionIconName; // +0x80
    NSString * _actionTitle; // +0x88
    UIColor * _actionTitleColor; // +0x90
    UIColor * _actionBackgroundColor; // +0x98
    MMTimer * _contentUpdatingTimer; // +0xa0
    NSTimer * _asyncLoadInfoDelayTimer; // +0xa8
    FinderJumpInfo_PartialCarouselCardStyle * _currentCardStyle; // +0xb0
    FinderJumpInfo_PartialCarouselCardStyle_CarouselDesc * _currentCarouselDesc; // +0xb8
}
+ (id)viewModelWithFeedContentVM:(id)arg1 jumpInfo:(id)arg2 showPosition:(int)arg3;
- (id)initWithFeedContentVM:(id)arg1 jumpInfo:(id)arg2 showPosition:(int)arg3;
- (void)dealloc;
- (id)actionTitleColor;
- (id)defaultActionTitleColor;
- (id)actionBackgroundColor;
- (id)defaultActionBackgroundColor;
- (void)updateJumpInfo:(id)arg1 showPosition:(int)arg2;
- (void)reloadCurrentShowStyle;
- (void)setCardShape:(unsigned long long)arg1;
- (void)reloadViewProperties;
- (void)reloadIconViewItem;
- (void)reloadTitleViewItem;
- (void)reloadDetailViewItem;
- (void)reloadBottomText;
- (void)asyncLoadInfo:(BOOL)arg1;
- (void)pendAsyncLoadInfo:(BOOL)arg1 afterDelay:(double)arg2;
- (void)cancelAsyncLoadInfo;
- (void)finderJumpInfoAsyncLoadManager:(id)arg1 didFetchJumpInfoStylesWithRecord:(id)arg2 updated:(BOOL)arg3;
- (void)startPlayingCarousel;
- (void)stopPlayingCarousel;
- (void)restartPlayingCarousel;
- (void)_pendNextCarouselItem;
- (void)_updateNextCarouselItem;
- (BOOL)shouldUpdateContentConstantly;
- (void)startContentUpdatingTimerIfNeeded;
- (void)stopContentUpdatingTimer;
- (void)handleContentUpdatingTimer:(id)arg1;
- (void)willDisplay;
- (void)didEndDisplaying;
- (void)notifyDidReloadViewProperties:(BOOL)arg1;
- (void)notifyDidSwitchCarouselContent;
- (void)notifyDidUpdateCarouselContent;
- (void)printCurrentCarouselInfo;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)feedContentVM;
- (id)jumpInfo;
- (int)showPosition;
- (id)originalShowStyle;
- (id)currentShowStyle;
- (id)currentDynamicCarouselCardStyle;
- (unsigned long long)cardShape;
- (double)appearingDelayTimeInMS;
- (void)setAppearingDelayTimeInMS:(double)arg1;
- (double)expandingDelayTimeInMS;
- (void)setExpandingDelayTimeInMS:(double)arg1;
- (id)iconURL;
- (void)setIconURL:(id)arg1;
- (id)iconStatusViewItem;
- (void)setIconStatusViewItem:(id)arg1;
- (id)titleViewItem;
- (void)setTitleViewItem:(id)arg1;
- (id)detailViewItem;
- (void)setDetailViewItem:(id)arg1;
- (id)bottomAttributedText;
- (void)setBottomAttributedText:(id)arg1;
- (id)actionIconName;
- (void)setActionIconName:(id)arg1;
- (id)actionTitle;
- (void)setActionTitle:(id)arg1;
- (void)setActionTitleColor:(id)arg1;
- (void)setActionBackgroundColor:(id)arg1;
- (BOOL)isPlayingCarousel;
- (id)contentUpdatingTimer;
- (void)setContentUpdatingTimer:(id)arg1;
- (id)asyncLoadInfoDelayTimer;
- (void)setAsyncLoadInfoDelayTimer:(id)arg1;
- (id)currentCardStyle;
- (void)setCurrentCardStyle:(id)arg1;
- (id)currentCarouselDesc;
- (void)setCurrentCarouselDesc:(id)arg1;
- (void).cxx_destruct;
@end

