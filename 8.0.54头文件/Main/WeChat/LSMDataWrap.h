@interface LSMDataWrap : NSObject
{
    unsigned int _modifyTime; // +0x8
    NSData * _data; // +0x10
}
- (id)initWithData:(id)arg1 modifyTime:(unsigned int)arg2;
- (id)data;
- (void)setData:(id)arg1;
- (unsigned int)modifyTime;
- (void)setModifyTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end

