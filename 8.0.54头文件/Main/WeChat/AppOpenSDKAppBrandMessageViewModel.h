@interface AppOpenSDKAppBrandMessageViewModel : CommonMessageViewModel
{
    double _cacheTitleHeight; // +0x70
    double _cacheDescHeight; // +0x78
    BOOL _updatedWaContact; // +0x80
    double m_titleHeight; // +0x88
    NSString * _sessionId; // +0x90
}
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)cellViewClassName;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (void)tryUpdateWaContact;
- (BOOL)isShowSourceView;
- (id)sourceTitle;
- (id)sourceIcon;
- (double)titleHeight;
- (double)imageHeight;
- (id)thumbImage;
- (id)appIconUrl;
- (id)appId;
- (id)pagePath;
- (id)getWAAppName;
- (id)tagsArray;
- (BOOL)shouldShowEasyBuyFlag;
- (BOOL)shouldShowFlagshipFlag;
- (double)imageViewHieghtScale;
- (BOOL)hasReferImage;
- (id)getReferImage;
- (id)additionalAccessibilityDescription;
- (void)onMessageDownloadThumbImageOK;
- (id)sessionId;
- (void)onReportExposureWithInterval:(long long)arg1 userInfo:(id)arg2;
- (void)onReportClickWithUserInfo:(id)arg1;
- (id)reportAppMessageItem:(unsigned int)arg1;
- (void)setSessionId:(id)arg1;
- (BOOL)updatedWaContact;
- (void)setUpdatedWaContact:(BOOL)arg1;
- (void).cxx_destruct;
@end

