@interface WAColdLaunchPreFetchResult : NSObject
{
    BOOL _ret; // +0x8
    unsigned int _fetchType; // +0xc
    NSString * _fetchData; // +0x10
    unsigned long long _status; // +0x18
}
- (id)safeGetFetchData;
- (unsigned int)fetchType;
- (void)setFetchType:(unsigned int)arg1;
- (BOOL)ret;
- (void)setRet:(BOOL)arg1;
- (id)fetchData;
- (void)setFetchData:(id)arg1;
- (unsigned long long)status;
- (void)setStatus:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
