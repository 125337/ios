@interface WCAdSliderCardButton : NSObject <NSCoding>
{
    NSString * _icon; // +0x8
    NSString * _title; // +0x10
    WCAdCardBtnInfo * _clickActionInfo; // +0x18
}
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)icon;
- (void)setIcon:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)clickActionInfo;
- (void)setClickActionInfo:(id)arg1;
- (void).cxx_destruct;
@end

