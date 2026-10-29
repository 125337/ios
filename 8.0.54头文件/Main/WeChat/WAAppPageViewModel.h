@interface WAAppPageViewModel : WAAppMessageBaseViewModel <IWAUpdatableMsgMgrExt>
{
    double _cacheNameWidth; // +0x70
    double _cacheTitleHeight; // +0x78
    double _cacheDescHeight; // +0x80
    double _cacheUpdatableContentHeight; // +0x88
    CContact * _appContact; // +0x90
    NSString * _sessionId; // +0x98
}
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
- (id)additionalAccessibilityDescription;
- (id)cellViewClassName;
- (id)cellIdentifier;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (CGSize)measure:(CGSize)arg1;
- (id)tagsArray;
- (BOOL)shouldShowEasyBuyFlag;
- (BOOL)shouldShowFlagshipFlag;
- (double)nameWidth;
- (double)titleHeight;
- (double)updatableContentHeight;
- (double)descHeight;
- (double)imageHeight;
- (CGSize)waSystemTextViewSize;
- (BOOL)canShowFavoriteBtn;
- (unsigned int)thumbDownloadStatus;
- (id)originThumbImage;
- (id)scaleFixOriginThumbImage;
- (id)getImageIfDownFail;
- (double)waSystemTextFontSize;
- (BOOL)shouldShowUpdatableContent;
- (id)getLatestUpdatableMsgInfo;
- (BOOL)shouldShowSubscribeEntry;
- (BOOL)shouldShowPlayButton;
- (id)getSubscribeMsgText;
- (void)onUpdatableMsgEntryStateChanged:(id)arg1;
- (BOOL)hasReferImage;
- (id)getReferImage;
- (id)sessionId;
- (void)onReportExposureWithInterval:(long long)arg1 userInfo:(id)arg2;
- (void)onReportClickWithUserInfo:(id)arg1;
- (id)reportAppMessageItem:(unsigned int)arg1;
- (void)reportEcsData:(id)arg1;
- (id)appContact;
- (void)setAppContact:(id)arg1;
- (void)setSessionId:(id)arg1;
- (void).cxx_destruct;
@end

