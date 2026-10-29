@interface WxpayConfigSnapshotEntry : NSObject
{
    NSString * _key; // +0x8
    id _value; // +0x10
    NSString * _source; // +0x18
    long long _version; // +0x20
}
- (id)initWithKey:(id)arg1 value:(id)arg2 source:(id)arg3 version:(long long)arg4;
- (id)key;
- (id)value;
- (id)source;
- (long long)version;
- (void).cxx_destruct;
@end
