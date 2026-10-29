@interface WCAdScratchCardView : UIView <WCAdPagViewDelegate>
{
    BOOL _isDragging; // +0x8
    BOOL _isAnimating; // +0x9
    BOOL _isCalculating; // +0xa
    BOOL _isScratched; // +0xb
    id <WCAdScratchCardViewDelegate> _delegate; // +0x10
    WCDataItem * _dataItem; // +0x18
    WCAdScratchCardInfo * _cardInfo; // +0x20
    unsigned long long _itemScene; // +0x28
    UIView * _bottomLayer; // +0x30
    UILabel * _afterScratchTitleLabel; // +0x38
    UILabel * _afterScratchSubTitleLabel; // +0x40
    UILabel * _couponNameLabel; // +0x48
    UILabel * _couponNumberLabel; // +0x50
    MMUIButton * _actionButton; // +0x58
    UIImageView * _leftVibeView; // +0x60
    UIImageView * _rightVibeView; // +0x68
    UIImageView * _coverImageView; // +0x70
    UIView * _coverView; // +0x78
    UILabel * _coverLabel; // +0x80
    UIView * _tempCursorView; // +0x88
    UIImage * _bottomSnapshotImage; // +0x90
    UIPanGestureRecognizer * _panGestureRecognizer; // +0x98
    UITapGestureRecognizer * _tapGestureRecognizer; // +0xa0
    WCAdPagView * _guidePagView; // +0xa8
    NSObject<OS_dispatch_queue> * _calculateQueue; // +0xb0
    long long _scratchCount; // +0xb8
    CGPoint _touchStartPoint; // +0xc0
    CGPoint _lastTouchPoint; // +0xd0
}
- (id)initWithFrame:(CGRect)arg1 dataItem:(id)arg2 contentItemScene:(unsigned long long)arg3;
- (void)setupUI;
- (void)setupGestures;
- (void)clearGestures;
- (void)layoutSubviews;
- (void)showActionButtonWithAnimate;
- (void)showActionButton;
- (void)hideActionButton;
- (void)configWithCardInfo:(id)arg1;
- (void)generateCoverImage;
- (id)snapshotView:(id)arg1;
- (id)snapshotBottomLayer;
- (id)bottomLayer;
- (id)coverImageView;
- (id)afterScratchTitleLabel;
- (id)afterScratchSubTitleLabel;
- (id)guidePagView;
- (id)coverView;
- (id)leftVibeView;
- (id)rightVibeView;
- (id)coverLabel;
- (id)couponNameLabel;
- (id)couponNumberLabel;
- (id)actionButton;
- (id)createVibeImageView;
- (void)handleTapGesture:(id)arg1;
- (void)handlePanGesture:(id)arg1;
- (void)startScratch:(CGPoint)arg1;
- (void)showTempCursorAtPoint:(CGPoint)arg1;
- (void)removeTempCursor;
- (void)animateTempCursorDismiss;
- (void)eraseLineFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2;
- (void)calculateScratchPercentage;
- (void)handleCalculationResult:(double)arg1;
- (void)handleScatchSuccess;
- (void)performAutoExpand;
- (id)createTapPagView;
- (id)leftSuccessPagView;
- (id)rightSuccessPagView;
- (void)playGuidePag;
- (void)playTapPagAtPoint:(CGPoint)arg1;
- (void)playSuccessPag;
- (void)handleScratchSuccessJump;
- (void)reportScratchSuccess;
- (void)handleActionButtonClick;
- (void)onPagViewPlayEnd:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)cardInfo;
- (void)setCardInfo:(id)arg1;
- (unsigned long long)itemScene;
- (void)setItemScene:(unsigned long long)arg1;
- (void)setBottomLayer:(id)arg1;
- (void)setAfterScratchTitleLabel:(id)arg1;
- (void)setAfterScratchSubTitleLabel:(id)arg1;
- (void)setCouponNameLabel:(id)arg1;
- (void)setCouponNumberLabel:(id)arg1;
- (void)setActionButton:(id)arg1;
- (void)setLeftVibeView:(id)arg1;
- (void)setRightVibeView:(id)arg1;
- (void)setCoverImageView:(id)arg1;
- (void)setCoverView:(id)arg1;
- (void)setCoverLabel:(id)arg1;
- (id)tempCursorView;
- (void)setTempCursorView:(id)arg1;
- (id)bottomSnapshotImage;
- (void)setBottomSnapshotImage:(id)arg1;
- (CGPoint)touchStartPoint;
- (void)setTouchStartPoint:(CGPoint)arg1;
- (CGPoint)lastTouchPoint;
- (void)setLastTouchPoint:(CGPoint)arg1;
- (BOOL)isDragging;
- (void)setIsDragging:(BOOL)arg1;
- (BOOL)isAnimating;
- (void)setIsAnimating:(BOOL)arg1;
- (BOOL)isCalculating;
- (void)setIsCalculating:(BOOL)arg1;
- (id)panGestureRecognizer;
- (void)setPanGestureRecognizer:(id)arg1;
- (id)tapGestureRecognizer;
- (void)setTapGestureRecognizer:(id)arg1;
- (void)setGuidePagView:(id)arg1;
- (id)calculateQueue;
- (void)setCalculateQueue:(id)arg1;
- (long long)scratchCount;
- (void)setScratchCount:(long long)arg1;
- (BOOL)isScratched;
- (void)setIsScratched:(BOOL)arg1;
- (void).cxx_destruct;
@end
