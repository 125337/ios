@interface GlobalSearchInputCheckBoxConfig : NSObject
{
    BOOL _selected; // +0x8
    NSString * _key; // +0x10
    NSString * _text; // +0x18
}
- (id)description;
- (id)key;
- (void)setKey:(id)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (BOOL)selected;
- (void)setSelected:(BOOL)arg1;
- (void).cxx_destruct;
@end
