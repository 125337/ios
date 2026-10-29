@interface MPGetChannelFeedsDataHandler : NSObject <PBMessageObserverDelegate>
{
    id /* block */ _completion; // +0x8
    MPGetChannelFeedsDataHandler * _selfRetain; // +0x10
}
+ (void)sendRequestWithCompletion:(id /* block */)arg1;
- (id)initWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (void)asyncReleaseSelf;
- (void)sendRequest;
- (void)handleChannelchannelFeedsDataResp:(id)arg1;
- (void)callbackCompletionIsSuccess:(BOOL)arg1 channelFeedsData:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (id)selfRetain;
- (void)setSelfRetain:(id)arg1;
- (void).cxx_destruct;
@end

