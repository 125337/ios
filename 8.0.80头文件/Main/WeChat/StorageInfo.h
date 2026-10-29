@interface StorageInfo : NSObject
{
    NSString * _data; // +0x8
    NSString * _type; // +0x10
    NSString * _size; // +0x18
}
- (BOOL)isEmpty;
- (id)data;
- (void)setData:(id)arg1;
- (id)type;
- (void)setType:(id)arg1;
- (id)size;
- (void)setSize:(id)arg1;
- (void).cxx_destruct;
@end
