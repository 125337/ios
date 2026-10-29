@interface EcsRichTextViewModel : NSObject
{
    EcsRichText * _richText; // +0x8
    NSAttributedString * _lightAttrStr; // +0x10
    NSAttributedString * _darkAttrStr; // +0x18
}
+ (id)createWithRichText:(id)arg1;
- (id)initWithRichText:(id)arg1;
- (void)setRichText:(id)arg1;
- (id)getFont;
- (id)richText;
- (id)lightAttrStr;
- (id)darkAttrStr;
- (void).cxx_destruct;
@end
