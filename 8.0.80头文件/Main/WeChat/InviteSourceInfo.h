@interface InviteSourceInfo : MMObject
{
    unsigned int _sourceTag; // +0x8
    NSString * _sourceName; // +0x10
    NSString * _sourceIconName; // +0x18
    SEL _sourceActionSel; // +0x20
}
- (unsigned int)sourceTag;
- (void)setSourceTag:(unsigned int)arg1;
- (id)sourceName;
- (void)setSourceName:(id)arg1;
- (id)sourceIconName;
- (void)setSourceIconName:(id)arg1;
- (SEL)sourceActionSel;
- (void)setSourceActionSel:(SEL)arg1;
- (void).cxx_destruct;
@end
