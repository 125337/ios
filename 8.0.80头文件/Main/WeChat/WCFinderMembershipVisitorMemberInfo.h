@interface WCFinderMembershipVisitorMemberInfo : NSObject <PBCoding>
{
    NSString * _finderMemberTicket; // +0x8
    FinderLiveNoticeListInfo * _liveNoticeListInfo; // +0x10
    unsigned long long _unreadFeedNum; // +0x18
    unsigned long long _unreadLiveNum; // +0x20
    unsigned long long _unreadDynamicNum; // +0x28
    unsigned long long _totalFeedNum; // +0x30
    unsigned long long _totalLiveNum; // +0x38
    unsigned long long _totalDynamicNum; // +0x40
}
+ (void)PBArrayAdd_finderMemberTicket;
+ (void)PBArrayAdd_liveNoticeListInfo;
+ (void)PBArrayAdd_totalFeedNum;
+ (void)PBArrayAdd_totalLiveNum;
+ (void)PBArrayAdd_totalDynamicNum;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnTypeForWCDB;
- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (id)initWithVisitorMemberInfo:(id)arg1;
- (id)finderMemberTicket;
- (void)setFinderMemberTicket:(id)arg1;
- (id)liveNoticeListInfo;
- (void)setLiveNoticeListInfo:(id)arg1;
- (unsigned long long)unreadFeedNum;
- (void)setUnreadFeedNum:(unsigned long long)arg1;
- (unsigned long long)unreadLiveNum;
- (void)setUnreadLiveNum:(unsigned long long)arg1;
- (unsigned long long)unreadDynamicNum;
- (void)setUnreadDynamicNum:(unsigned long long)arg1;
- (unsigned long long)totalFeedNum;
- (void)setTotalFeedNum:(unsigned long long)arg1;
- (unsigned long long)totalLiveNum;
- (void)setTotalLiveNum:(unsigned long long)arg1;
- (unsigned long long)totalDynamicNum;
- (void)setTotalDynamicNum:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
