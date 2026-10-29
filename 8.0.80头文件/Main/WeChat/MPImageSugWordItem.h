@interface MPImageSugWordItem : MMObject
{
    unsigned int _type; // +0x8
    float _score; // +0xc
    NSString * _word; // +0x10
    NSData * _s1sStatInfo; // +0x18
    NSData * _s1sContextInfo; // +0x20
}
- (id)word;
- (void)setWord:(id)arg1;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (float)score;
- (void)setScore:(float)arg1;
- (id)s1sStatInfo;
- (void)setS1sStatInfo:(id)arg1;
- (id)s1sContextInfo;
- (void)setS1sContextInfo:(id)arg1;
- (void).cxx_destruct;
@end
