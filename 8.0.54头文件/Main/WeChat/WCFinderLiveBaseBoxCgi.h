@interface WCFinderLiveBaseBoxCgi : WCFinderLiveBaseCgi
{
    NSMutableArray * _boxIdList; // +0x8
}
- (void)setRequest:(id)arg1;
- (BOOL)hasChatRoomBox;
- (id)boxIdList;
- (void)addBoxIdArr:(id)arg1;
- (void)addBoxId:(id)arg1;
- (void)setBoxIdList:(id)arg1;
- (void).cxx_destruct;
@end

