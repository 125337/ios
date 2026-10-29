@interface BizRecentReadBaseViewModel : MMObject
{
    unsigned int _readTime; // +0x8
    NSString * _title; // +0x10
}
- (unsigned int)readTime;
- (void)setReadTime:(unsigned int)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (void).cxx_destruct;
@end

