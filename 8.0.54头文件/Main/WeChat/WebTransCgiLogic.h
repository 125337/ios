@interface WebTransCgiLogic : NSObject
{
    int _hasRequestCgiNum; // +0x8
    int _concurrentNum; // +0xc
    int _minPackNodeCount; // +0x10
    int _allRequestCgiNum; // +0x14
    id <WebTransCgiLogicDelegate> _delegate; // +0x18
    double _bounceDelayForNonFirstScreen; // +0x20
    double _bounceDelayForFirstScreen; // +0x28
    NSString * _curWebPageUrl; // +0x30
    NSMutableArray * _cgiQueue; // +0x38
    NSMutableArray * _returnedNodelistRepository; // +0x40
    NSMutableArray * _returnedNodelistRepositoryForFirstScreen; // +0x48
}
- (id)init;
- (void)dealloc;
- (id)nodeListToJSON:(id)arg1;
- (void)slicePackAndSendCgi:(id)arg1 nodeCountPerPack:(long long)arg2 isFirstScreen:(BOOL)arg3;
- (void)sliceAndPack:(id)arg1;
- (void)doRequestCgi;
- (void)requestCgiAndReturn:(id)arg1;
- (void)handleCgiReturn:(id)arg1;
- (void)bounceForFirstScreen:(id)arg1;
- (void)bounceForNonFirstScreen:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (int)hasRequestCgiNum;
- (void)setHasRequestCgiNum:(int)arg1;
- (int)concurrentNum;
- (void)setConcurrentNum:(int)arg1;
- (int)minPackNodeCount;
- (void)setMinPackNodeCount:(int)arg1;
- (double)bounceDelayForNonFirstScreen;
- (void)setBounceDelayForNonFirstScreen:(double)arg1;
- (double)bounceDelayForFirstScreen;
- (void)setBounceDelayForFirstScreen:(double)arg1;
- (id)curWebPageUrl;
- (void)setCurWebPageUrl:(id)arg1;
- (int)allRequestCgiNum;
- (void)setAllRequestCgiNum:(int)arg1;
- (id)cgiQueue;
- (void)setCgiQueue:(id)arg1;
- (id)returnedNodelistRepository;
- (void)setReturnedNodelistRepository:(id)arg1;
- (id)returnedNodelistRepositoryForFirstScreen;
- (void)setReturnedNodelistRepositoryForFirstScreen:(id)arg1;
- (void).cxx_destruct;
@end

