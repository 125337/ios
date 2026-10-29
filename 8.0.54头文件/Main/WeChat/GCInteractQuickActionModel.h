@interface GCInteractQuickActionModel : NSObject
{
    NSString * _svgImgStr; // +0x8
    NSString * _title; // +0x10
    id /* block */ _touchBlock; // +0x18
    UIColor * _textColor; // +0x20
}
- (id)svgImgStr;
- (void)setSvgImgStr:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id /* block */)touchBlock;
- (void)setTouchBlock:(id /* block */)arg1;
- (id)textColor;
- (void)setTextColor:(id)arg1;
- (void).cxx_destruct;
@end

