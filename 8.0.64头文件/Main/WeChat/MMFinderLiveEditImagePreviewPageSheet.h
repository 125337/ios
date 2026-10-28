@interface MMFinderLiveEditImagePreviewPageSheet : UIView <MMPageSheetAdapterDelegate, MMPageSheetBottomViewDelegate>
{
    BOOL _isOpening; // +0x8
    MMFinderLiveEditImagePreviewPageSheetModel * _model; // +0x10
    UIView * _contentView; // +0x18
    double _maxHeight; // +0x20
    MMPageSheetAdapter * _pageSheetAdapter; // +0x28
    MMUILabel * _leftSubTitleLabel; // +0x30
    MMUILabel * _rightSubTitleLabel; // +0x38
    UIImageView * _coverForShareCardImageView; // +0x40
    UIImageView * _coverForSquareImageView; // +0x48
    WCFinderLiveNowView * _liveNowView; // +0x50
    UIView * _authorView; // +0x58
    UIView * _avatorContainer; // +0x60
    WCFinderHeadImageView * _avatorImageView; // +0x68
    RichTextView * _nicknameTV; // +0x70
    WCFinderAuthInfoIconView * _authInfoIconView; // +0x78
    UILabel * _audienceNumLabel; // +0x80
    UIImageView * _gradientViewForSquare; // +0x88
    UIImageView * _gradientViewForShare; // +0x90
    UIImageView * _finderIconImageView; // +0x98
    RichTextView * _nicknameTVForShare; // +0xa0
    WCFinderAuthInfoIconView * _authInfoIconViewForShare; // +0xa8
    RichTextView * _mediaTitleTextViewForShare; // +0xb0
    RichTextView * _mediaTitleTextViewForSquare; // +0xb8
}
- (id)initWithFrame:(CGRect)arg1 bottomSafeAreaHeight:(double)arg2;
- (void)setupWithBottomSafeArea:(double)arg1;
- (void)relayoutNickname;
- (void)layoutSubviews;
- (void)layoutImageViews;
- (void)layoutBottomSubView;
- (double)targetCoverImageViewWidth:(double)arg1;
- (double)shareCardImageWidth;
- (double)squareImageWidthWithViewWidth:(double)arg1;
- (double)targetCoverImageViewHeight:(double)arg1 ratio:(double)arg2;
- (id)contentView;
- (id)leftSubTitleLabel;
- (id)rightSubTitleLabel;
- (id)buildSubTitleLabel;
- (id)coverForShareCardImageView;
- (id)coverForSquareImageView;
- (id)liveNowView;
- (id)avatorImageView;
- (id)avatorContainer;
- (id)nicknameTV;
- (id)authInfoIconView;
- (id)authorView;
- (id)audienceNumLabel;
- (id)gradientViewForSquare;
- (id)gradientViewForShare;
- (id)finderIconImageView;
- (id)nicknameTVForShare;
- (id)genNickNameTextView;
- (id)authInfoIconViewForShare;
- (id)mediaTitleTextViewForShare;
- (id)mediaTitleTextViewForSquare;
- (void)updatePageSheetModel:(id)arg1;
- (void)openWithAnimation:(BOOL)arg1 completeBlock:(id /* block */)arg2;
- (void)closeWithAnimation:(BOOL)arg1;
- (void)onClickPageSheetConfirmButton;
- (id)titleForPageSheetConfirmButton;
- (double)pageSheetContentHeight;
- (id)model;
- (void)setModel:(id)arg1;
- (void)setContentView:(id)arg1;
- (double)maxHeight;
- (void)setMaxHeight:(double)arg1;
- (BOOL)isOpening;
- (id)pageSheetAdapter;
- (void)setPageSheetAdapter:(id)arg1;
- (void)setLeftSubTitleLabel:(id)arg1;
- (void)setRightSubTitleLabel:(id)arg1;
- (void)setCoverForShareCardImageView:(id)arg1;
- (void)setCoverForSquareImageView:(id)arg1;
- (void)setLiveNowView:(id)arg1;
- (void)setAuthorView:(id)arg1;
- (void)setAvatorContainer:(id)arg1;
- (void)setAvatorImageView:(id)arg1;
- (void)setNicknameTV:(id)arg1;
- (void)setAuthInfoIconView:(id)arg1;
- (void)setAudienceNumLabel:(id)arg1;
- (void)setGradientViewForSquare:(id)arg1;
- (void)setGradientViewForShare:(id)arg1;
- (void)setFinderIconImageView:(id)arg1;
- (void)setNicknameTVForShare:(id)arg1;
- (void)setAuthInfoIconViewForShare:(id)arg1;
- (void)setMediaTitleTextViewForShare:(id)arg1;
- (void)setMediaTitleTextViewForSquare:(id)arg1;
- (void).cxx_destruct;
@end
