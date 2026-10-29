@interface WCFinderFindPageEntranceStatusCache : NSObject
{
    unsigned long long _updateMs; // +0x8
    FindPageEntranceStatus * _status; // +0x10
}
- (unsigned long long)updateMs;
- (void)setUpdateMs:(unsigned long long)arg1;
- (id)status;
- (void)setStatus:(id)arg1;
- (void).cxx_destruct;
@end
