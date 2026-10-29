@interface YYTextHighlight : NSObject <NSCoding, NSCopying>
{
    NSDictionary * _attributes; // +0x8
    NSDictionary * _userInfo; // +0x10
    id /* block */ _tapAction; // +0x18
    id /* block */ _longPressAction; // +0x20
}
+ (id)highlightWithAttributes:(id)arg1;
+ (id)highlightWithBackgroundColor:(id)arg1;
- (void)setAttributes:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)_makeMutableAttributes;
- (void)setFont:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setStrokeWidth:(id)arg1;
- (void)setStrokeColor:(id)arg1;
- (void)setTextAttribute:(id)arg1 value:(id)arg2;
- (void)setShadow:(id)arg1;
- (void)setInnerShadow:(id)arg1;
- (void)setUnderline:(id)arg1;
- (void)setStrikethrough:(id)arg1;
- (void)setBackgroundBorder:(id)arg1;
- (void)setBorder:(id)arg1;
- (void)setAttachment:(id)arg1;
- (id)attributes;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (id /* block */)tapAction;
- (void)setTapAction:(id /* block */)arg1;
- (id /* block */)longPressAction;
- (void)setLongPressAction:(id /* block */)arg1;
- (void).cxx_destruct;
@end

