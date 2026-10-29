@interface SayHelloUpToCloudDeleteHello : NSObject
{
    unsigned int _uiIndex; // +0x8
    unsigned int _uiSection; // +0xc
    NSString * _userName; // +0x10
}
- (id)initWithUserName:(id)arg1 uiIndex:(unsigned int)arg2 uiSection:(unsigned int)arg3;
- (id)userName;
- (void)setUserName:(id)arg1;
- (unsigned int)uiIndex;
- (void)setUiIndex:(unsigned int)arg1;
- (unsigned int)uiSection;
- (void)setUiSection:(unsigned int)arg1;
- (void).cxx_destruct;
@end
