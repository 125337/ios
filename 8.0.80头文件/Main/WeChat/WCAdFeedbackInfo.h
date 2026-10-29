@interface WCAdFeedbackInfo : NSObject <NSCoding>
{
    NSArray * _feedbackList; // +0x8
    WCAdLiteAppInfo * _receivedReasonClickAction; // +0x10
    WCAdLiteAppInfo * _likedAdsClickAction; // +0x18
    WCAdLiteAppInfo * _reasonToastClickAction; // +0x20
}
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)validFeedbackList;
- (long long)validFeedbackCnt;
- (id)feedbackList;
- (void)setFeedbackList:(id)arg1;
- (id)receivedReasonClickAction;
- (void)setReceivedReasonClickAction:(id)arg1;
- (id)likedAdsClickAction;
- (void)setLikedAdsClickAction:(id)arg1;
- (id)reasonToastClickAction;
- (void)setReasonToastClickAction:(id)arg1;
- (void).cxx_destruct;
@end
