@interface BTFixedFinderBaseItemView : MMUIView <MMImageLoaderObserver, MMWebImageViewDelegate, WCFinderShareAbstractCell>
{
    BTFinderItemViewModel * _viewModel; // +0x8
    MMWebImageView * _coverImageView; // +0x10
    RichTextView * _titleTextView; // +0x18
    BTFinderItemBackgroundImageView * _backgroundCoverImageView; // +0x20
    SightIconView * _playIconView; // +0x28
    MMUILabel * _digestLabel; // +0x30
    MMUILabel * _timeLabel; // +0x38
    MMUIButton * _feedbackBtn; // +0x40
    UIImageView * _timeLabelBackgroundImageView; // +0x48
    id /* block */ _onClickCoverAreaBlock; // +0x50
    id /* block */ _onLongClickCoverAreaBlock; // +0x58
    id /* block */ _onClickInfoAreaBlock; // +0x60
    id /* block */ _onLongClickInfoAreaBlock; // +0x68
    id /* block */ _onClickFeedbackBtnBlock; // +0x70
    BTFinderItemHeaderContainerView * _headerContainerView; // +0x78
    MMWebImageView * _headImageView; // +0x80
    MMUILabel * _nickNameLabel; // +0x88
    UIImageView * _finderImageView; // +0x90
    BTFinderItemCoverContainerView * _coverContainerView; // +0x98
    MMUILabel * _createTimeLabel; // +0xa0
    WCFinderTagView * _membershipTagView; // +0xa8
    MMUILabel * _recommendTipLabel; // +0xb0
}
- (id)initWithFrame:(CGRect)arg1 itemViewModel:(id)arg2;
- (void)updateWithItemViewModel:(id)arg1;
- (void)setupHeader:(id)arg1;
- (void)setHeaderContainerViewToOpaque;
- (void)setupCoverContainer:(id)arg1;
- (void)setInfoAreaHighlight:(BOOL)arg1;
- (void)setContentAreaHighlight:(BOOL)arg1;
- (CGRect)getInfoAreaFrame;
- (CGRect)getContentAreaFrame;
- (id)getContentView;
- (void)setupSubviews;
- (void)loadData:(BOOL)arg1;
- (void)layoutTitleTextView;
- (void)layoutHeader;
- (void)layoutCoverContainerView:(id)arg1;
- (void)layoutSubviews;
- (void)onLoadCoverImage:(id)arg1;
- (double)getExpectedWHRatio;
- (id)headerContainerView;
- (id)headImageView;
- (id)nickNameLabel;
- (id)finderImageView;
- (id)coverContainerView;
- (id)coverImageView;
- (id)membershipTagView;
- (id)backgroundCoverImageView;
- (id)playIconView;
- (id)titleTextView;
- (id)digestLabel;
- (id)timeLabel;
- (id)timeLabelBackgroundImageView;
- (id)createTimeLabel;
- (id)recommendTipLabel;
- (id)feedbackBtn;
- (void)onClickFeedbackBtn;
- (void)onClickInfoArea;
- (void)onLongClickInfoArea;
- (void)onClickContentArea;
- (void)onLongClickContentArea;
- (void)onLoadImageOK:(id)arg1;
- (void)onLoadImageFail:(id)arg1 extraInfo:(id)arg2;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)transitionStartImage;
- (CGRect)transitionStartImageRectInView:(id)arg1 willPresent:(BOOL)arg2;
- (void)doShareAnimation;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void)setCoverImageView:(id)arg1;
- (void)setTitleTextView:(id)arg1;
- (void)setBackgroundCoverImageView:(id)arg1;
- (void)setPlayIconView:(id)arg1;
- (void)setDigestLabel:(id)arg1;
- (void)setTimeLabel:(id)arg1;
- (void)setFeedbackBtn:(id)arg1;
- (void)setTimeLabelBackgroundImageView:(id)arg1;
- (id /* block */)onClickCoverAreaBlock;
- (void)setOnClickCoverAreaBlock:(id /* block */)arg1;
- (id /* block */)onLongClickCoverAreaBlock;
- (void)setOnLongClickCoverAreaBlock:(id /* block */)arg1;
- (id /* block */)onClickInfoAreaBlock;
- (void)setOnClickInfoAreaBlock:(id /* block */)arg1;
- (id /* block */)onLongClickInfoAreaBlock;
- (void)setOnLongClickInfoAreaBlock:(id /* block */)arg1;
- (id /* block */)onClickFeedbackBtnBlock;
- (void)setOnClickFeedbackBtnBlock:(id /* block */)arg1;
- (void)setHeaderContainerView:(id)arg1;
- (void)setHeadImageView:(id)arg1;
- (void)setNickNameLabel:(id)arg1;
- (void)setFinderImageView:(id)arg1;
- (void)setCoverContainerView:(id)arg1;
- (void)setCreateTimeLabel:(id)arg1;
- (void)setMembershipTagView:(id)arg1;
- (void)setRecommendTipLabel:(id)arg1;
- (void).cxx_destruct;
@end
