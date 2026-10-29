@interface MMFinderLiveFeedTransferLogic : NSObject
{
    BOOL _hasReusedOut; // +0x8
    MMFinderLiveFeedTransferInData * _in; // +0x10
    MMFinderLiveFeedTransferOutData * _out; // +0x18
    MMFinderLiveFeedDataLogic * _context; // +0x20
}
- (id)initWithContext:(id)arg1;
- (void)prepareEnterLive;
- (void)prepareGoBackFeedStream:(id)arg1;
- (void)resetTransferData;
- (void)resetTransferInData;
- (void)resetTransferOutData;
- (void)assembleTransferInData;
- (void)assembleTransferOutData:(id)arg1;
- (BOOL)hasReusedOut;
- (void)setHasReusedOut:(BOOL)arg1;
- (id)in;
- (void)setIn:(id)arg1;
- (id)out;
- (void)setOut:(id)arg1;
- (id)context;
- (void)setContext:(id)arg1;
- (void).cxx_destruct;
@end
