@interface MultipleTextStateCardView : UIView <UIScrollViewDelegate, WCStatusViewDelegate>
{
    BOOL _showDraggingGuide; // +0x8
    BOOL _scrollEnabled; // +0x9
    BOOL _passthroughTouches; // +0xa
    BOOL _forbidUpdateData; // +0xb
    id <MultipleTextStateCardViewDataSource> _dataSource; // +0x10
    id <MultipleTextStateCardViewDelegate> _delegate; // +0x18
    id <TextStateBaseCardContentViewDelegate> _cardContentDelegate; // +0x20
    NSArray * _infoList; // +0x28
    TextStateHeaderSectionView * _headerView; // +0x30
    double _headerTopPadding; // +0x38
    double _footerBottomPadding; // +0x40
    MultipleTextStateCardFooterDotsView * _dotsView; // +0x48
    double _cornerRadius; // +0x50
    unsigned long long _startPosition; // +0x58
    long long _contactInfoViewSource; // +0x60
    unsigned long long _positionInCardList; // +0x68
    NSString * _cardListId; // +0x70
    double _contentAlpha; // +0x78
    id <WCStatusViewDelegate> _statusViewDelegate; // +0x80
    unsigned long long _activeIndex; // +0x88
    MMLRUCache * _cardViewCache; // +0x90
    unsigned long long _candidateActiveIndex; // +0x98
    UIScrollView * _autoLoopView; // +0xa0
    UIView * _draggingGuideView; // +0xa8
    UIEdgeInsets _hitTestEdgeInsets; // +0xb0
}
+ (id)popAnimationForView:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)initData;
- (void)initView;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)updateAutoLoopView;
- (void)updateDotsView;
- (void)setFrame:(CGRect)arg1;
- (void)setHeaderTopPadding:(double)arg1;
- (void)setFooterBottomPadding:(double)arg1;
- (void)setCardContentDelegate:(id)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setContentAlpha:(double)arg1;
- (BOOL)isSameInfoList:(id)arg1;
- (void)setInfoList:(id)arg1;
- (void)setShouldShowLocationDistance:(BOOL)arg1;
- (BOOL)shouldShowLocationDistance;
- (double)contentBottomPadding;
- (void)setScrollEnabled:(BOOL)arg1;
- (void)updateScrollEnabled;
- (void)setShowDraggingGuide:(BOOL)arg1;
- (id)draggingGuideView;
- (id)autoLoopView;
- (id)dotsView;
- (id)activeTextState;
- (id)activeCardView;
- (id)cardViewAtIndex:(unsigned long long)arg1;
- (BOOL)isSingle;
- (void)createOrUpdatePopAnimation;
- (void)removePopAnimation;
- (void)startCardViewAtIndex:(unsigned long long)arg1 needReset:(BOOL)arg2;
- (void)setStatusViewDelegate:(id)arg1;
- (void)onWCStatusViewShowGroup:(id)arg1 view:(id)arg2;
- (void)pauseCardViewAtIndex:(unsigned long long)arg1;
- (void)pauseActiveCardView;
- (void)stopActiveCardView;
- (void)residentStopActiveCardView;
- (void)startActiveCardView;
- (void)restartActiveCardView;
- (void)updateActiveIndex;
- (void)updateIndexByInnerIndex:(unsigned long long)arg1;
- (void)updateActiveIndexToIndex:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)reloadAutoLoopView;
- (BOOL)ensureCreateCardViewAtIndex:(unsigned long long)arg1;
- (void)updateAutoLoopContent;
- (void)handlePanGesture:(id)arg1;
- (unsigned long long)nextIndexForIndex:(unsigned long long)arg1;
- (unsigned long long)prevIndexForIndex:(unsigned long long)arg1;
- (void)onWillDisplayCardViewAtIndex:(unsigned long long)arg1;
- (void)showFromStartPosition;
- (void)showTextStateAtIndex:(unsigned long long)arg1;
- (void)showNextTextStateAnimated;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)cardContentDelegate;
- (id)infoList;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (double)headerTopPadding;
- (double)footerBottomPadding;
- (BOOL)showDraggingGuide;
- (void)setDotsView:(id)arg1;
- (double)cornerRadius;
- (unsigned long long)startPosition;
- (void)setStartPosition:(unsigned long long)arg1;
- (long long)contactInfoViewSource;
- (void)setContactInfoViewSource:(long long)arg1;
- (BOOL)scrollEnabled;
- (BOOL)passthroughTouches;
- (void)setPassthroughTouches:(BOOL)arg1;
- (unsigned long long)positionInCardList;
- (void)setPositionInCardList:(unsigned long long)arg1;
- (id)cardListId;
- (void)setCardListId:(id)arg1;
- (double)contentAlpha;
- (BOOL)forbidUpdateData;
- (void)setForbidUpdateData:(BOOL)arg1;
- (UIEdgeInsets)hitTestEdgeInsets;
- (void)setHitTestEdgeInsets:(UIEdgeInsets)arg1;
- (id)statusViewDelegate;
- (unsigned long long)activeIndex;
- (void)setActiveIndex:(unsigned long long)arg1;
- (id)cardViewCache;
- (void)setCardViewCache:(id)arg1;
- (unsigned long long)candidateActiveIndex;
- (void)setCandidateActiveIndex:(unsigned long long)arg1;
- (void)setAutoLoopView:(id)arg1;
- (void)setDraggingGuideView:(id)arg1;
- (void).cxx_destruct;
@end
