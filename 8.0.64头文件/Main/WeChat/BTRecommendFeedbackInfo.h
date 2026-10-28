@interface BTRecommendFeedbackInfo : NSObject
{
    BOOL _bShowFeedback; // +0x8
    NSArray * _feedbackReasonArr; // +0x10
    NSString * _negativeFeedbackTitle; // +0x18
}
- (id)feedbackReasonArr;
- (void)setFeedbackReasonArr:(id)arg1;
- (BOOL)bShowFeedback;
- (void)setBShowFeedback:(BOOL)arg1;
- (id)negativeFeedbackTitle;
- (void)setNegativeFeedbackTitle:(id)arg1;
- (void).cxx_destruct;
@end
