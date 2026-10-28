@interface BTRecommendUserInfo : NSObject
{
    BTRecommendFeedbackInfo * _feedbackInfo; // +0x8
    NSString * _versionInfo; // +0x10
}
- (id)feedbackInfo;
- (void)setFeedbackInfo:(id)arg1;
- (id)versionInfo;
- (void)setVersionInfo:(id)arg1;
- (void).cxx_destruct;
@end
