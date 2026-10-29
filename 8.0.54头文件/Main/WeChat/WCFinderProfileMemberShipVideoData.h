@interface WCFinderProfileMemberShipVideoData : NSObject
{
    WCFinderFeedArray * _feedArray; // +0x8
    WCFinderMemberShipIntroduceListData * _listData; // +0x10
    NSString * _memberShipTicket; // +0x18
}
- (id)feedArray;
- (void)setFeedArray:(id)arg1;
- (id)listData;
- (void)setListData:(id)arg1;
- (id)memberShipTicket;
- (void)setMemberShipTicket:(id)arg1;
- (void).cxx_destruct;
@end

