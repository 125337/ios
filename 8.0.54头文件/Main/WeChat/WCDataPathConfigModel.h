@interface WCDataPathConfigModel : MMObject <PBCoding>
{
    BOOL _encrypt; // +0x8
    unsigned int _action; // +0xc
    NSString * _className; // +0x10
    NSString * _dataPath; // +0x18
    NSString * _expect; // +0x20
}
+ (void)PBArrayAdd_className;
+ (void)PBArrayAdd_dataPath;
+ (void)PBArrayAdd_action;
+ (void)PBArrayAdd_expect;
+ (void)PBArrayAdd_encrypt;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)initWithDataPath:(id)arg1 withExpect:(id)arg2;
- (id)initWithClassName:(id)arg1 withDataPath:(id)arg2 withAction:(unsigned int)arg3 withEncrypt:(BOOL)arg4;
- (id)initWithClassName:(id)arg1 withDataPath:(id)arg2;
- (id)toString;
- (id)className;
- (void)setClassName:(id)arg1;
- (id)dataPath;
- (void)setDataPath:(id)arg1;
- (unsigned int)action;
- (void)setAction:(unsigned int)arg1;
- (id)expect;
- (void)setExpect:(id)arg1;
- (BOOL)encrypt;
- (void)setEncrypt:(BOOL)arg1;
- (void).cxx_destruct;
@end

