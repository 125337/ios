@interface BTRecommendFinderFlowStyleItemCell : UICollectionViewCell <MMImageLoaderObserver, MMWebImageViewDelegate, WCFinderShareAbstractCell>
{
    id /* block */ _onClickCoverAreaBlock; // +0x8
    id /* block */ _onLongClickCoverAreaBlock; // +0x10
    BTFinderItemViewModel * _viewModel; // +0x18
    BTScrollabelFinderStyleCoverContainerView * _coverContainerView; // +0x20
    UIImageView * _coverBackgroundImageView; // +0x28
    MMWebImageView * _coverImageView; // +0x30
    WCFinderTagView * _membershipTagView; // +0x38
    UIView * _infoContainerView; // +0x40
    MMWebImageView * _headImageView; // +0x48
    UIView * _authorView; // +0x50
    MMUILabel * _nickNameLabel; // +0x58
    BTRichTextTagView * _titleLabel; // +0x60
    MMUILabel * _recommendLabel; // +0x68
    UIView * _recommendGradientView; // +0x70
    BTFinderRecommendRedPacketView * _redPacketView; // +0x78
}
+ (id)cellIdentifier;
+ (double)cellHeight;
+ (double)cellWidth;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (double)coverImageRatio;
- (id)realCoverView;
- (id)realTagView;
- (void)updateWithItemViewModel:(id)arg1;
- (void)setContentAreaHighlight:(BOOL)arg1;
- (void)setupSubviews;
- (id)coverContainerSubviews;
- (void)loadData;
- (void)onLoadCoverImage:(id)arg1;
- (double)getExpectedWHRatio;
- (void)onClickContentArea;
- (void)onLongClickContentArea:(id)arg1;
- (id)coverContainerView;
- (id)coverImageView;
- (id)membershipTagView;
- (id)authorView;
- (id)infoContainerView;
- (id)headImageView;
- (id)nickNameLabel;
- (id)titleLabel;
- (id)titleLabelStyles;
- (id)recommendLabel;
- (id)recommendGradientView;
- (id)redPacketView;
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
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void)setCoverContainerView:(id)arg1;
- (id)coverBackgroundImageView;
- (void)setCoverBackgroundImageView:(id)arg1;
- (void)setCoverImageView:(id)arg1;
- (void)setMembershipTagView:(id)arg1;
- (void)setInfoContainerView:(id)arg1;
- (void)setHeadImageView:(id)arg1;
- (void)setAuthorView:(id)arg1;
- (void)setNickNameLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setRecommendLabel:(id)arg1;
- (void)setRecommendGradientView:(id)arg1;
- (void)setRedPacketView:(id)arg1;
- (void).cxx_destruct;
@end

