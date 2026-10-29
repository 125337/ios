@interface MMToastParameter : NSObject
{
    NSString * _text; // +0x8
    NSMutableAttributedString * _attributedString; // +0x10
    NSString * _svgIconName; // +0x18
    UIImage * _iconImage; // +0x20
    UIView<MultiLineTextView> * _customView; // +0x28
}
- (void)setSvgIconName:(id)arg1;
- (void)setIconImage:(id)arg1;
- (BOOL)isValid;
- (id)text;
- (void)setText:(id)arg1;
- (id)attributedString;
- (void)setAttributedString:(id)arg1;
- (id)svgIconName;
- (id)iconImage;
- (id)customView;
- (void)setCustomView:(id)arg1;
- (void).cxx_destruct;
@end

