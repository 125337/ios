@interface TencentLBSTrace : NSObject
{
    unsigned long long _maxSize; // +0x8
    unsigned long long _coreSize; // +0x10
    NSMutableArray * _lines; // +0x18
    TencentLBSCalman * _calman; // +0x20
}
- (id)initWithMaxSize:(unsigned long long)arg1 coreSize:(unsigned long long)arg2;
- (void)reset;
- (void)addWithTencentLBSLocation:(id)arg1;
- (BOOL)isCurrentOKWithTencentLBSLocation:(id)arg1;
- (BOOL)isCurrentOK:(id)arg1;
- (BOOL)isFilterEnabled;
- (void)calmanFilter:(id)arg1;
- (unsigned long long)maxSize;
- (void)setMaxSize:(unsigned long long)arg1;
- (unsigned long long)coreSize;
- (void)setCoreSize:(unsigned long long)arg1;
- (id)lines;
- (void)setLines:(id)arg1;
- (id)calman;
- (void)setCalman:(id)arg1;
- (void).cxx_destruct;
@end

