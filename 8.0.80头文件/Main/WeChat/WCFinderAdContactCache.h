@interface WCFinderAdContactCache : NSObject
{
    WCFinderContact * _contact; // +0x8
    unsigned long long _refreshTime; // +0x10
}
- (id)contact;
- (void)setContact:(id)arg1;
- (unsigned long long)refreshTime;
- (void)setRefreshTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
