@interface BTFeedbackPanelInitParams : NSObject
{
    NSString * _title; // +0x8
    NSString * _confirmBtnWording; // +0x10
    NSArray * _feedbackReasonArr; // +0x18
    NSObject * _contextInfo; // +0x20
}
- (id)title;
- (void)setTitle:(id)arg1;
- (id)confirmBtnWording;
- (void)setConfirmBtnWording:(id)arg1;
- (id)feedbackReasonArr;
- (void)setFeedbackReasonArr:(id)arg1;
- (id)contextInfo;
- (void)setContextInfo:(id)arg1;
- (void).cxx_destruct;
@end

