@interface MuteBrandReport : NSObject
{
    BOOL _enableNumberNoticeAcctCountFromSearch; // +0x8
    unsigned long long _action; // +0x10
    unsigned long long _timestamp; // +0x18
    long long _totalUnreadCount; // +0x20
    long long _brandsCount; // +0x28
    long long _chooseBrandCount; // +0x30
}
+ (void)reportOpenAction;
+ (void)reportCloseAction;
+ (void)reportEntryListAction:(long long)arg1;
+ (void)reportExitListAction:(long long)arg1 totalCount:(long long)arg2 chooseBySearch:(BOOL)arg3;
+ (long long)genTotalUnreadBrandCount;
- (void)report;
- (unsigned long long)action;
- (void)setAction:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)setTimestamp:(unsigned long long)arg1;
- (long long)totalUnreadCount;
- (void)setTotalUnreadCount:(long long)arg1;
- (long long)brandsCount;
- (void)setBrandsCount:(long long)arg1;
- (long long)chooseBrandCount;
- (void)setChooseBrandCount:(long long)arg1;
- (BOOL)enableNumberNoticeAcctCountFromSearch;
- (void)setEnableNumberNoticeAcctCountFromSearch:(BOOL)arg1;
@end

