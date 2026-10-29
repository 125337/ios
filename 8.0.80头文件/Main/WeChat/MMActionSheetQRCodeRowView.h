@interface MMActionSheetQRCodeRowView : MMUIView <GetQRCodeInfoLogicDelegate>
{
    BOOL _isUrlInfoHasUpdated; // +0x8
    unsigned int _businessType; // +0xc
    MMScrollableActionSheetVerticalRowInfo * _rowInfo; // +0x10
    id <MMActionSheetQRCodeRowViewDelegate> _delegate; // +0x18
    UIButton * _backgroundButton; // +0x20
    UIImageView * _loadingView; // +0x28
    MMWebImageView * _iconImageView; // +0x30
    UIImageView * _arrowImageView; // +0x38
    UILabel * _titleLabel; // +0x40
    UILabel * _subtitleLabel; // +0x48
    GetQRCodeInfoLogic * _qrCodeInfoLogic; // +0x50
    NSString * _codeStr; // +0x58
    NSString * _title; // +0x60
}
+ (double)rowViewHeight;
- (id)initWithCodeType:(unsigned int)arg1 codeStr:(id)arg2 title:(id)arg3 getUrlInfoReqSession:(id)arg4;
- (void)updateQRCodeInfoWithSession:(id)arg1;
- (void)setupAllSubviews;
- (void)setRowInfo:(id)arg1;
- (void)layoutSubviews;
- (void)onTappedRowInfo;
- (void)getQRCodeInfoWithSession:(id)arg1;
- (void)cancelQRCodeInfoCallback;
- (void)onTimeout:(id)arg1;
- (void)updateRowInfoUseDefaultInfo:(unsigned int)arg1;
- (void)onGetQRCodeInfoResultFailure:(unsigned int)arg1;
- (void)onGetQRCodeInfoResultSuccess:(unsigned int)arg1 qrCodeInfoItem:(id)arg2;
- (id)rowInfo;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)backgroundButton;
- (void)setBackgroundButton:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subtitleLabel;
- (void)setSubtitleLabel:(id)arg1;
- (id)qrCodeInfoLogic;
- (void)setQrCodeInfoLogic:(id)arg1;
- (BOOL)isUrlInfoHasUpdated;
- (void)setIsUrlInfoHasUpdated:(BOOL)arg1;
- (id)codeStr;
- (void)setCodeStr:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (unsigned int)businessType;
- (void)setBusinessType:(unsigned int)arg1;
- (void).cxx_destruct;
@end
