@interface WCTimelineReceivedAdIdMgr : MMUserService <MMServiceProtocol>
{
    NSMutableArray * _receivedAdList; // +0x8
}
- (void)mergeReceivedAdList:(id)arg1;
- (void)deleteAdvertiseDateItemList:(id)arg1;
- (BOOL)isAdReceived:(id)arg1;
- (BOOL)isAdReceivedBySnsId:(id)arg1;
- (id)receivedAdList;
- (void)setReceivedAdList:(id)arg1;
- (void).cxx_destruct;
@end
