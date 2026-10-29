@interface VoiceRecordSelectLanguageButton : EmoticonCellLikeButton
{
    unsigned int _type; // +0x8
    NSString * _name; // +0x10
    UIView * _separatorView; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (CGRect)titleRectForContentRect:(CGRect)arg1;
- (CGRect)imageRectForContentRect:(CGRect)arg1;
- (void)setName:(id)arg1;
- (void)layoutSubviews;
- (id)name;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (id)separatorView;
- (void)setSeparatorView:(id)arg1;
- (void).cxx_destruct;
@end

