@interface WNHTMLTagNode : NSObject
{
    WNContentStorage * m_contentStorage; // +0x8
    NSString * _tagName; // +0x10
    NSMutableString * _textContent; // +0x18
    NSMutableArray * _attributes; // +0x20
    NSDictionary * _tagAttributes; // +0x28
    WNHTMLTagNode * _parentNode; // +0x30
    NSMutableArray * _childNodes; // +0x38
}
- (id)initWithTagName:(id)arg1 parentNode:(id)arg2;
- (void)dealloc;
- (void)addChildNode:(id)arg1;
- (void)addAttribute:(id)arg1;
- (id)contentStorage;
- (id)tagName;
- (void)setTagName:(id)arg1;
- (id)textContent;
- (void)setTextContent:(id)arg1;
- (id)attributes;
- (void)setAttributes:(id)arg1;
- (id)tagAttributes;
- (void)setTagAttributes:(id)arg1;
- (id)parentNode;
- (void)setParentNode:(id)arg1;
- (id)childNodes;
- (void)setChildNodes:(id)arg1;
- (void).cxx_destruct;
@end
