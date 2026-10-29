@interface WAFileStorageStatusSortAppItem : NSObject
{
    NSString * _appID; // +0x8
    WAFileSpaceStatusAppItem * _appItem; // +0x10
}
- (id)description;
- (long long)compare:(id)arg1;
- (id)appID;
- (void)setAppID:(id)arg1;
- (id)appItem;
- (void)setAppItem:(id)arg1;
- (void).cxx_destruct;
@end

