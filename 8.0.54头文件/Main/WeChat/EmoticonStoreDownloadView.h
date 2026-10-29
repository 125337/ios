@interface EmoticonStoreDownloadView : UIView
{
    BOOL _useStaticWidth; // +0x8
    BOOL _isCurrentBtnGrayForWecoin; // +0x9
    id <EmoticonStoreDownloadViewDelegate> _delegate; // +0x10
    UIButton * _mainBtn; // +0x18
    MMUIActivityIndicatorView * _activityIndicatorView; // +0x20
    EmotionProgressView * _progressView; // +0x28
    UIButton * _downloadCancelBtn; // +0x30
}
+ (double)calBtnLengthFor:(long long)arg1;
- (id)init;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)loadSubView;
- (void)layoutSubviews;
- (void)createOrUpdateLayout;
- (void)changeBtnTo:(long long)arg1;
- (void)genBtnFor:(long long)arg1;
- (void)initDownloadProgressView;
- (void)initCancelButton;
- (void)prepareForStateUpdate;
- (void)changeLoadingStateTo:(BOOL)arg1;
- (void)setPrice:(id)arg1 isWeCoin:(BOOL)arg2;
- (id)getPriceAttrStrWithPrice:(id)arg1 isHighLighted:(BOOL)arg2 standardFont:(id)arg3;
- (void)updateViewForDownloadingWithProgress:(float)arg1 andCancelBtn:(BOOL)arg2;
- (void)onClickDownloadButton;
- (void)onClickButton;
- (void)onClickRewardButton;
- (void)onClickUseButton;
- (void)onUnstallButtonClick;
- (void)onCancelDownloadBtnClick;
- (void)onClickActivityDownloadButton;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)useStaticWidth;
- (void)setUseStaticWidth:(BOOL)arg1;
- (id)mainBtn;
- (void)setMainBtn:(id)arg1;
- (id)activityIndicatorView;
- (void)setActivityIndicatorView:(id)arg1;
- (id)progressView;
- (void)setProgressView:(id)arg1;
- (id)downloadCancelBtn;
- (void)setDownloadCancelBtn:(id)arg1;
- (BOOL)isCurrentBtnGrayForWecoin;
- (void)setIsCurrentBtnGrayForWecoin:(BOOL)arg1;
- (void).cxx_destruct;
@end

