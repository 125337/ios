@interface MMLiteAppOpenParam : NSObject
{
    long long _isHalfScreen; // +0x8
    double _heightPercent; // +0x10
    NSString * _page; // +0x18
    NSString * _query; // +0x20
}
- (id)init;
- (long long)isHalfScreen;
- (void)setIsHalfScreen:(long long)arg1;
- (double)heightPercent;
- (void)setHeightPercent:(double)arg1;
- (id)page;
- (void)setPage:(id)arg1;
- (id)query;
- (void)setQuery:(id)arg1;
- (void).cxx_destruct;
@end

