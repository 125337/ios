@interface EcsWeShopInfoUpdateItem : NSObject
{
    NSString * _shopAppId; // +0x8
    double _updateTime; // +0x10
    unsigned long long _status; // +0x18
}
- (id)initWithShopAppId:(id)arg1;
- (void)updateStatus:(unsigned long long)arg1;
- (BOOL)isUnknown;
- (BOOL)isRunning;
- (BOOL)isFailed;
- (BOOL)isSuccess;
- (id)shopAppId;
- (double)updateTime;
- (unsigned long long)status;
- (void).cxx_destruct;
@end
