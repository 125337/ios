@interface WCFinderAIMessageOpenContext : NSObject
{
    WCFinderShareToMomentsItem * _shareItem; // +0x8
    NSString * _shareEnterUsername; // +0x10
    id <WCFinderShareAbstractCell> _fromCell; // +0x18
    NSString * _entranceGMsgID; // +0x20
}
- (id)shareItem;
- (void)setShareItem:(id)arg1;
- (id)shareEnterUsername;
- (void)setShareEnterUsername:(id)arg1;
- (id)fromCell;
- (void)setFromCell:(id)arg1;
- (id)entranceGMsgID;
- (void)setEntranceGMsgID:(id)arg1;
- (void).cxx_destruct;
@end
