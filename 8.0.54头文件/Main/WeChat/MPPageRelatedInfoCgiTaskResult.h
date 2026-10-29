@interface MPPageRelatedInfoCgiTaskResult : MMObject
{
    unsigned int _refreshIntervalSec; // +0x8
    unsigned int _maxRequestUrlCount; // +0xc
    NSArray * _relatedInfoArr; // +0x10
}
- (id)description;
- (id)relatedInfoArr;
- (void)setRelatedInfoArr:(id)arg1;
- (unsigned int)refreshIntervalSec;
- (void)setRefreshIntervalSec:(unsigned int)arg1;
- (unsigned int)maxRequestUrlCount;
- (void)setMaxRequestUrlCount:(unsigned int)arg1;
- (void).cxx_destruct;
@end

