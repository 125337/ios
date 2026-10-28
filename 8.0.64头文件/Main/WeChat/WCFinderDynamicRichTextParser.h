@interface WCFinderDynamicRichTextParser : NSObject
{
    NSString * _richText; // +0x8
    NSMutableArray * _items; // +0x10
}
+ (id)parserWithRichText:(id)arg1;
- (void)parse;
- (id)parseCustomLinkItem:(XmlReaderNode_t *)arg1;
- (id)createAttributedStringWith:(id)arg1 color:(id)arg2 iconSize:(CGSize)arg3 iconPadding:(CGSize)arg4 textAlignment:(long long)arg5 delegate:(id)arg6;
- (id)createRichTextContentWithColor:(id)arg1 iconSize:(CGSize)arg2;
- (id)richText;
- (void)setRichText:(id)arg1;
- (id)items;
- (void)setItems:(id)arg1;
- (void).cxx_destruct;
@end
