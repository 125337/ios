@interface WCFinderProfileMusicView : UIView <WCFinderMusicFeedVMExt, MMMusicPlayerContollerDelegate>
{
    BOOL _isFirstRow; // +0x8
    id <WCFinderProfileMusicViewDelegate> _delegate; // +0x10
    WCFinderMusicFeedVM * _feedVM; // +0x18
    UIView * _accessiblityView; // +0x20
    UIView * _coverView; // +0x28
    UIView * _viewCountContainer; // +0x30
    UILabel * _viewCountLabel; // +0x38
    UIImageView * _likeIconView; // +0x40
    UIImageView * _mvIconView; // +0x48
    MMMusicPlayerContoller * _musicPlayerCtrl; // +0x50
    UILabel * _titleLabel; // +0x58
    UILabel * _timeLabel; // +0x60
    WCFinderAnimationLoadingView * _loadingView; // +0x68
    UIImageView * _failedIconView; // +0x70
    UILabel * _statusLabel; // +0x78
    UILabel * _typeLabel; // +0x80
    UIButton * _delButton; // +0x88
    UIButton * _retryButton; // +0x90
    WCFinderProgressView * _progressView; // +0x98
    UIView * _leftContainer; // +0xa0
    UIView * _rightContainer; // +0xa8
    unsigned long long _type; // +0xb0
    NSString * _oldObserveKey; // +0xb8
}
+ (double)displayHeightWithIndexPath:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)prepareForReuse;
- (void)setupUI;
- (void)addSubviews:(id)arg1 toRoot:(id)arg2;
- (void)setFeedVM:(id)arg1;
- (void)update:(id)arg1 type:(unsigned long long)arg2 isFirstRow:(BOOL)arg3;
- (void)updateLabel:(id)arg1 hidden:(BOOL)arg2 text:(id)arg3 fatWidth:(double)arg4;
- (void)updateTypeInfo:(id)arg1;
- (BOOL)updateCoverViewWithMediaInfo:(id)arg1 coverUrl:(id)arg2;
- (id)fetchCovertDisplayViewFromContainer:(id)arg1 viewClass:(Class)arg2;
- (id)statusTextForStatus:(long long)arg1;
- (void)layoutSubviews;
- (void)layoutContainer:(id)arg1 spacing:(double)arg2 maxWidth:(double)arg3;
- (void)layoutRightViewWithStyle:(long long)arg1;
- (BOOL)displayAlignCenterWithStyle:(long long)arg1;
- (void)layoutArrangeViews:(id)arg1 originX:(double)arg2;
- (id)curThumbImage;
- (void)feedVMDidUpdate:(id)arg1;
- (void)feedVMProgressDidUpdate:(id)arg1;
- (void)onClickToPlayMusic:(id)arg1 playState:(long long)arg2 clickedOnBtn:(BOOL)arg3;
- (id)createButton:(id)arg1 iconName:(id)arg2 action:(SEL)arg3;
- (void)configLoadingView:(id)arg1 hidden:(BOOL)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)onClickRetry;
- (void)onClickDelete;
- (void)onFeedContent:(id)arg1 likedDataChanged:(id)arg2;
- (id)collectionCell;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)feedVM;
- (id)accessiblityView;
- (void)setAccessiblityView:(id)arg1;
- (id)coverView;
- (void)setCoverView:(id)arg1;
- (id)viewCountContainer;
- (void)setViewCountContainer:(id)arg1;
- (id)viewCountLabel;
- (void)setViewCountLabel:(id)arg1;
- (id)likeIconView;
- (void)setLikeIconView:(id)arg1;
- (id)mvIconView;
- (void)setMvIconView:(id)arg1;
- (id)musicPlayerCtrl;
- (void)setMusicPlayerCtrl:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)timeLabel;
- (void)setTimeLabel:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)failedIconView;
- (void)setFailedIconView:(id)arg1;
- (id)statusLabel;
- (void)setStatusLabel:(id)arg1;
- (id)typeLabel;
- (void)setTypeLabel:(id)arg1;
- (id)delButton;
- (void)setDelButton:(id)arg1;
- (id)retryButton;
- (void)setRetryButton:(id)arg1;
- (id)progressView;
- (void)setProgressView:(id)arg1;
- (id)leftContainer;
- (void)setLeftContainer:(id)arg1;
- (id)rightContainer;
- (void)setRightContainer:(id)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)oldObserveKey;
- (void)setOldObserveKey:(id)arg1;
- (BOOL)isFirstRow;
- (void)setIsFirstRow:(BOOL)arg1;
- (void).cxx_destruct;
@end
