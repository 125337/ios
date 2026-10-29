@interface GameCenterMsgRemarkInfo : NSObject
{
    unsigned int _remark_type; // +0x8
    NSString * _text_color; // +0x10
    NSString * _background_color; // +0x18
}
- (unsigned int)remark_type;
- (void)setRemark_type:(unsigned int)arg1;
- (id)text_color;
- (void)setText_color:(id)arg1;
- (id)background_color;
- (void)setBackground_color:(id)arg1;
- (void).cxx_destruct;
@end
