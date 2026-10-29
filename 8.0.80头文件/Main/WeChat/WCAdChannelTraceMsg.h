@interface WCAdChannelTraceMsg : NSObject
{
    int _actType; // +0x8
    int _actCount; // +0xc
    NSString * _tag; // +0x10
    long long _actValue; // +0x18
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (int)actType;
- (void)setActType:(int)arg1;
- (int)actCount;
- (void)setActCount:(int)arg1;
- (id)tag;
- (void)setTag:(id)arg1;
- (long long)actValue;
- (void)setActValue:(long long)arg1;
- (void).cxx_destruct;
@end
