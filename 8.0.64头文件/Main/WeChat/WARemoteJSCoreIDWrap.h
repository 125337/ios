@interface WARemoteJSCoreIDWrap : NSObject
{
    unsigned int _jscType; // +0x8
    unsigned int _jscIndex; // +0xc
    NSString * _jscID; // +0x10
    NSString * _jscName; // +0x18
}
+ (id)jscIDForType:(unsigned int)arg1 jscIndex:(unsigned int)arg2;
+ (id)jscNameForType:(unsigned int)arg1 jscIndex:(unsigned int)arg2;
- (id)initWithType:(unsigned int)arg1 jscIndex:(unsigned int)arg2;
- (id)jscID;
- (void)setJscID:(id)arg1;
- (id)jscName;
- (void)setJscName:(id)arg1;
- (unsigned int)jscType;
- (void)setJscType:(unsigned int)arg1;
- (unsigned int)jscIndex;
- (void)setJscIndex:(unsigned int)arg1;
- (void).cxx_destruct;
@end
