@interface MagicAdGetAdInfoOutcome : NSObject
{
    unsigned char _value; // +0x8
    MagicAdInfo * _adInfo; // +0x10
    NSString * _extra; // +0x18
}
+ (id)outcomeWithAdInfo:(id)arg1 value:(unsigned char)arg2 extra:(id)arg3;
- (id)adInfo;
- (void)setAdInfo:(id)arg1;
- (unsigned char)value;
- (void)setValue:(unsigned char)arg1;
- (id)extra;
- (void)setExtra:(id)arg1;
- (void).cxx_destruct;
@end
