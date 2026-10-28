@interface HLCarriorInfo : NSObject
{
    long long _netType; // +0x8
    NSString * _carriorName; // +0x10
}
- (id)tag;
- (long long)netType;
- (void)setNetType:(long long)arg1;
- (id)carriorName;
- (void)setCarriorName:(id)arg1;
- (void).cxx_destruct;
@end
