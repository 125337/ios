@interface BTRecommendFinderItemCell : UICollectionViewCell <MMImageLoaderObserver, MMWebImageViewDelegate, WCFinderShareAbstractCell>
{
    BOOL _forceAutoBlurHeight; // +0x8
    id /* block */ _onClickCoverAreaBlock; // +0x10
    id /* block */ _onLongClickCoverAreaBlock; // +0x18
    id /* block */ _onClickInfoAreaBlock; // +0x20
    BTFinderItemViewModel * _viewModel; // +0x28
    BTScrollabelFinderItemCoverContainerView * _coverContainerView; // +0x30
    BTScrollableFinderItemBackgroundImageView * _backgroundCoverImageView; // +0x38
    MMWebImageView * _coverImageView; // +0x40
    UIView * _infoContainerView; // +0x48
    BTFinderItemBlurView * _blurView; // +0x50
    MMWebImageView * _headImageView; // +0x58
    UIView * _authorView; // +0x60
    MMUILabel * _nickNameLabel; // +0x68
    MMUILabel * _timeLabel; // +0x70
    BTRichTextTagView * _titleLabel; // +0x78
    MMUILabel * _recommendLabel; // +0x80
}
+ (id)cellIdentifier;
+ (double)cellHeight;
+ (double)cellWidth;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)updateWithItemViewModel:(id)arg1;
- (void)setContentAreaHighlight:(BOOL)arg1;
- (void)setupSubviews;
- (void)loadData;
- (void)onLoadCoverImage:(id)arg1;
- (double)getExpectedWHRatio;
- (void)onClickInfoArea;
- (void)onClickContentArea;
- (void)onLongClickContentArea:(id)arg1;
- (id)coverContainerView;
- (id)backgroundCoverImageView;
- (id)coverImageView;
- (id)blurView;
- (id)authorView;
- (id)infoContainerView;
- (id)headImageView;
- (id)nickNameLabel;
- (id)timeLabel;
- (id)titleLabel;
- (id)titleLabelStyles;
- (id)recommendLabel;
- (void)onLoadImageOK:(id)arg1;
- (void)onLoadImageFail:(id)arg1 extraInfo:(id)arg2;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)transitionStartImage;
- (CGRect)transitionStartImageRectInView:(id)arg1 willPresent:(BOOL)arg2;
- (void)doShareAnimation;
- (id /* block */)onClickCoverAreaBlock;
- (void)setOnClickCoverAreaBlock:(id /* block */)arg1;
- (id /* block */)onLongClickCoverAreaBlock;
- (void)setOnLongClickCoverAreaBlock:(id /* block */)arg1;
- (id /* block */)onClickInfoAreaBlock;
- (void)setOnClickInfoAreaBlock:(id /* block */)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void)setCoverContainerView:(id)arg1;
- (void)setBackgroundCoverImageView:(id)arg1;
- (void)setCoverImageView:(id)arg1;
- (void)setInfoContainerView:(id)arg1;
- (void)setBlurView:(id)arg1;
- (void)setHeadImageView:(id)arg1;
- (void)setAuthorView:(id)arg1;
- (void)setNickNameLabel:(id)arg1;
- (void)setTimeLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setRecommendLabel:(id)arg1;
- (BOOL)forceAutoBlurHeight;
- (void)setForceAutoBlurHeight:(BOOL)arg1;
- (void).cxx_destruct;
@end

