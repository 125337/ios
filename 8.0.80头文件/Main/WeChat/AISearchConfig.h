@interface AISearchConfig : NSObject
{
    unsigned int _scene; // +0x8
    unsigned int _businessType; // +0xc
    NSString * _hotword; // +0x10
    NSString * _extParams; // +0x18
    NSString * _navBarParms; // +0x20
}
- (id)hotword;
- (void)setHotword:(id)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (unsigned int)businessType;
- (void)setBusinessType:(unsigned int)arg1;
- (id)extParams;
- (void)setExtParams:(id)arg1;
- (id)navBarParms;
- (void)setNavBarParms:(id)arg1;
- (void).cxx_destruct;
@end
