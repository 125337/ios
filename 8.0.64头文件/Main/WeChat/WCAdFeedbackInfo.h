@interface WCAdFeedbackInfo : NSObject <NSCoding>
{
    NSArray * _feedbackList; // +0x8
}
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)validFeedbackList;
- (long long)validFeedbackCnt;
- (id)feedbackList;
- (void)setFeedbackList:(id)arg1;
- (void).cxx_destruct;
@end
