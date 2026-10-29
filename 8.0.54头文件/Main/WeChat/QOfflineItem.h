@interface QOfflineItem : NSObject
{
    NSString * _name; // +0x8
    NSString * _pinyin; // +0x10
    long long _size; // +0x18
    long long _status; // +0x20
}
- (id)initWithKCOfflineItem:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)pinyin;
- (void)setPinyin:(id)arg1;
- (long long)size;
- (void)setSize:(long long)arg1;
- (long long)status;
- (void)setStatus:(long long)arg1;
- (void).cxx_destruct;
@end

