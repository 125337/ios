@interface SectionInfo : MMObject
{
    long long _start; // +0x8
    long long _size; // +0x10
    NSString * _title; // +0x18
}
+ (id)create:(unsigned long long)arg1 size:(unsigned long long)arg2;
- (long long)start;
- (void)setStart:(long long)arg1;
- (long long)size;
- (void)setSize:(long long)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (void).cxx_destruct;
@end

