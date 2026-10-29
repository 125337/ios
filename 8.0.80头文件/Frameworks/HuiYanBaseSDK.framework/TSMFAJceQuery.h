@interface TSMFAJceQuery : TSMFAQuery
{
    int _requestCommandID; // +0x8
    int _responseCommandID; // +0xc
    long long _remainedRetrying; // +0x10
    unsigned long long _postID; // +0x18
}
- (id)initWithRequestCommand:(int)arg1 withResponseCommandID:(int)arg2;
- (void)executeWithCompletion:(id /* block */)arg1;
- (void)cancel;
- (id)onSettingupRequest:(id)arg1;
- (id)onProcessingResponse:(id)arg1;
- (BOOL)isValuableToRetryForError:(id)arg1;
- (void)reset;
- (int)requestCommandID;
- (void)setRequestCommandID:(int)arg1;
- (int)responseCommandID;
- (void)setResponseCommandID:(int)arg1;
- (long long)remainedRetrying;
- (void)setRemainedRetrying:(long long)arg1;
- (unsigned long long)postID;
- (void)setPostID:(unsigned long long)arg1;
@end
