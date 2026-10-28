@interface WCFinderMembershipAuthorMemberInfo : NSObject <PBCoding>
{
    unsigned long long _memberCount; // +0x8
    FinderLiveNoticeListInfo * _liveNoticeListInfo; // +0x10
    NSString * _memberCenterURL; // +0x18
    unsigned long long _unreadDynamicNum; // +0x20
    unsigned long long _totalFeedNum; // +0x28
    unsigned long long _totalLiveNum; // +0x30
    unsigned long long _totalDynamicNum; // +0x38
}
+ (void)PBArrayAdd_memberCount;
+ (void)PBArrayAdd_liveNoticeListInfo;
+ (void)PBArrayAdd_memberCenterURL;
+ (void)PBArrayAdd_unreadDynamicNum;
+ (void)PBArrayAdd_totalFeedNum;
+ (void)PBArrayAdd_totalLiveNum;
+ (void)PBArrayAdd_totalDynamicNum;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnTypeForWCDB;
- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (id)initWithAuthorMemberInfo:(id)arg1;
- (unsigned long long)memberCount;
- (void)setMemberCount:(unsigned long long)arg1;
- (id)liveNoticeListInfo;
- (void)setLiveNoticeListInfo:(id)arg1;
- (id)memberCenterURL;
- (void)setMemberCenterURL:(id)arg1;
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
