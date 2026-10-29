@interface TXLiveAudioSessionCategorySetParam : NSObject
{
    BOOL _optionsForbidModify; // +0x8
    NSString * _category; // +0x10
    NSString * _mode; // +0x18
    unsigned long long _options; // +0x20
}
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)genFromCategorySetParam:(id)arg1;
- (id)category;
- (void)setCategory:(id)arg1;
- (id)mode;
- (void)setMode:(id)arg1;
- (unsigned long long)options;
- (void)setOptions:(unsigned long long)arg1;
- (BOOL)optionsForbidModify;
- (void)setOptionsForbidModify:(BOOL)arg1;
- (void).cxx_destruct;
@end
