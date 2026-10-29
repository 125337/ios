@interface MMLivePollingFetchRequestModel : NSObject
{
    MMFinderLiveTaskId * _liveTaskId; // +0x8
    NSData * _liveCookies; // +0x10
    NSData * _lastBuffer; // +0x18
    NSArray * _reqBufferArray; // +0x20
}
- (id)initWithLiveTaskId:(id)arg1 liveCookies:(id)arg2;
- (id)liveTaskId;
- (void)setLiveTaskId:(id)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (id)reqBufferArray;
- (void)setReqBufferArray:(id)arg1;
- (void).cxx_destruct;
@end

