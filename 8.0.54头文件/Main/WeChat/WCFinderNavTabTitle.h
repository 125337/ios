@interface WCFinderNavTabTitle : NSObject
{
    NSString * _text; // +0x8
    NSAttributedString * _richText; // +0x10
}
+ (id)titleWithText:(id)arg1;
+ (id)titleWithView:(id)arg1;
+ (id)titleWithIcon:(id)arg1 text:(id)arg2;
+ (id)defaultFont;
- (id)text;
- (void)setText:(id)arg1;
- (id)richText;
- (void)setRichText:(id)arg1;
- (void).cxx_destruct;
@end

