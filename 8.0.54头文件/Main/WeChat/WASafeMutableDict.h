@interface WASafeMutableDict : NSObject
{
    BOOL _writable; // +0x8
    NSMutableDictionary * _dic; // +0x10
    NSObject * _holder; // +0x18
    NSString * _name; // +0x20
}
- (id)initWithHolder:(id)arg1 propName:(id)arg2 writable:(BOOL)arg3;
- (void)writeBack;
- (void)dealloc;
- (id)dic;
- (void)setDic:(id)arg1;
- (id)holder;
- (void)setHolder:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (BOOL)writable;
- (void)setWritable:(BOOL)arg1;
- (void).cxx_destruct;
@end

