@interface WAAppProfileViewModel : WAAppMessageBaseViewModel
{
    NSString * _sessionId; // +0x70
}
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)cellViewClassName;
- (id)cellIdentifier;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (id)sourceTitle;
- (id)sourceIcon;
- (id)profileIconUrl;
- (id)profileTitle;
- (id)tagsArray;
- (BOOL)shouldShowEasyBuyFlag;
- (BOOL)shouldShowFlagshipFlag;
- (id)scoreLabelText;
- (id)additionalAccessibilityDescription;
- (id)sessionId;
- (void)onReportExposureWithInterval:(long long)arg1 userInfo:(id)arg2;
- (void)onReportClickWithUserInfo:(id)arg1;
- (id)reportAppMessageItem:(unsigned int)arg1;
- (void)setSessionId:(id)arg1;
- (void).cxx_destruct;
@end

