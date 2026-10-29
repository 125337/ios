@interface WCActionSheetWithScanWXCode : WCActionSheet <GetQRCodeInfoLogicDelegate>
{
    NSString * _appId; // +0x8
    NSString * _codeNickname; // +0x10
    NSString * _codeHeadImgUrl; // +0x18
    NSString * _codeCompanyName; // +0x20
    UILabel * _weAppOpLabel; // +0x28
    UILabel * _titleLabel; // +0x30
    UIView * _weAppSheetView; // +0x38
    MMWebImageView * _codeHeadImgView; // +0x40
    MMUIImageView * _loadingView; // +0x48
    UILabel * _companyNameLabel; // +0x50
    GetQRCodeInfoLogic * _getQRCodeInfoLogic; // +0x58
    unsigned long long _actionSheetLastShowTimeStamp; // +0x60
}
+ (BOOL)isItemTitleForCustomQRCode:(id)arg1;
+ (BOOL)isItemTitleForQRCode:(id)arg1;
+ (BOOL)isItemTitleForMultiQRCode:(id)arg1;
+ (BOOL)isItemTitleForCode:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (BOOL)hasCodeItem;
- (unsigned long long)actionSheetExposedDuration;
- (id)getQRCodeInfoLogic;
- (void)appendItemIfNeed:(id)arg1 qrCode:(id)arg2;
- (void)insertItemAtIndex:(unsigned long long)arg1 logicCtrl:(id)arg2 qrCode:(id)arg3;
- (void)setCode:(int)arg1 codeStr:(id)arg2;
- (void)setCode:(int)arg1 codeStr:(id)arg2 session:(id)arg3;
- (void)setWeAppCode:(id)arg1;
- (void)setBrandCode:(id)arg1;
- (void)setGroupChatCode:(id)arg1;
- (void)setPersonalCode:(id)arg1;
- (void)setWechatWorkCode:(id)arg1;
- (void)setRewardCode:(id)arg1;
- (void)setPaymentCode:(id)arg1 getUrlInfoReqSession:(id)arg2;
- (void)setFinderCode:(id)arg1;
- (void)getQRCodeInfo:(int)arg1 codeStr:(id)arg2 session:(id)arg3;
- (void)onGetQRCodeInfoResultSuccess:(unsigned int)arg1 qrCodeInfoItem:(id)arg2;
- (id)queryParamDictFromFullUrl:(id)arg1;
- (void)showInView:(id)arg1;
- (void)reloadInnerView;
- (void)onSheetItem:(id)arg1 makeView:(id)arg2;
- (void)fallbackOnGetFailed;
- (void)updateAvatarAndOpLabel;
- (void)removeCustomQRCodeItem;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)codeNickname;
- (void)setCodeNickname:(id)arg1;
- (id)codeHeadImgUrl;
- (void)setCodeHeadImgUrl:(id)arg1;
- (id)codeCompanyName;
- (void)setCodeCompanyName:(id)arg1;
- (id)weAppOpLabel;
- (void)setWeAppOpLabel:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)weAppSheetView;
- (void)setWeAppSheetView:(id)arg1;
- (id)codeHeadImgView;
- (void)setCodeHeadImgView:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)companyNameLabel;
- (void)setCompanyNameLabel:(id)arg1;
- (void)setGetQRCodeInfoLogic:(id)arg1;
- (unsigned long long)actionSheetLastShowTimeStamp;
- (void)setActionSheetLastShowTimeStamp:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

