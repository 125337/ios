@interface IPadAuthContainView : UIView
{
    double _limitWidth; // +0x8
    id <IPadAuthContainViewDelegate> _delegate; // +0x10
    UILabel * _titleLabel; // +0x18
    UILabel * _subtitleLabel; // +0x20
    UIImageView * _qrcodeImgView; // +0x28
    UILabel * _appNameLabel; // +0x30
    UIView * _dividingLine; // +0x38
    UILabel * _tailLabel; // +0x40
    MMUIButton * _cancelBtn; // +0x48
    MMUIActivityIndicatorView * _activityIndicatorView; // +0x50
    UIView * _scannedMaskView; // +0x58
    UIImageView * _scannedTipsIconView; // +0x60
    UIView * _refreshMaskView; // +0x68
    UIImageView * _refreshIconView; // +0x70
    UILabel * _refreshTipsLabel; // +0x78
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (void)onQRCodeScanned;
- (void)onQRCodeExpired;
- (void)startLoading;
- (void)stopLoading;
- (void)updateWithQRCodeData:(id)arg1 appName:(id)arg2;
- (void)layoutSubviews;
- (void)onCancelBtnClicked;
- (void)onTapRefreshMaskView;
- (double)limitWidth;
- (void)setLimitWidth:(double)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subtitleLabel;
- (void)setSubtitleLabel:(id)arg1;
- (id)qrcodeImgView;
- (void)setQrcodeImgView:(id)arg1;
- (id)appNameLabel;
- (void)setAppNameLabel:(id)arg1;
- (id)dividingLine;
- (void)setDividingLine:(id)arg1;
- (id)tailLabel;
- (void)setTailLabel:(id)arg1;
- (id)cancelBtn;
- (void)setCancelBtn:(id)arg1;
- (id)activityIndicatorView;
- (void)setActivityIndicatorView:(id)arg1;
- (id)scannedMaskView;
- (void)setScannedMaskView:(id)arg1;
- (id)scannedTipsIconView;
- (void)setScannedTipsIconView:(id)arg1;
- (id)refreshMaskView;
- (void)setRefreshMaskView:(id)arg1;
- (id)refreshIconView;
- (void)setRefreshIconView:(id)arg1;
- (id)refreshTipsLabel;
- (void)setRefreshTipsLabel:(id)arg1;
- (void).cxx_destruct;
@end
