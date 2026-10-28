@interface WebGetTranslateResultCGIHandler : NSObject <PBMessageObserverDelegate>
{
    id /* block */ _completion; // +0x8
    WebGetTranslateResultCGIHandler * _selfRetain; // +0x10
    NSString * _barNowTitle; // +0x18
    MMWebTransPack * _sendPack; // +0x20
    NSDate * _sendTime; // +0x28
    NSDate * _receiveTime; // +0x30
    unsigned long long _interval; // +0x38
}
+ (void)sendRequestWithSendPack:(id)arg1 webUrl:(id)arg2 completion:(id /* block */)arg3;
- (id)initWithCompletion:(id /* block */)arg1;
- (void)asyncReleaseSelf;
- (void)dealloc;
- (void)sendRequest:(id)arg1 webUrl:(id)arg2;
- (void)handleCheckTranslateFeedsDataResp:(id)arg1;
- (void)callbackCompletionIsSuccess:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (id)selfRetain;
- (void)setSelfRetain:(id)arg1;
- (id)barNowTitle;
- (void)setBarNowTitle:(id)arg1;
- (id)sendPack;
- (void)setSendPack:(id)arg1;
- (id)sendTime;
- (void)setSendTime:(id)arg1;
- (id)receiveTime;
- (void)setReceiveTime:(id)arg1;
- (unsigned long long)interval;
- (void)setInterval:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
