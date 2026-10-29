@interface EcsRichLabelViewModel : NSObject
{
    EcsRichLabelPriorityAdapter * _priorityAdaptar; // +0x8
    EcsRichLabel * _label; // +0x10
    NSAttributedString * _lightAttrStr; // +0x18
    NSAttributedString * _darkAttrStr; // +0x20
    NSArray * _textVMs; // +0x28
    YYTextLayout * _layout; // +0x30
}
+ (id)createWithLabel:(id)arg1;
- (id)initWithLabel:(id)arg1;
- (void)setLabel:(id)arg1;
- (id)addParagraphStyle:(id)arg1 richLabel:(id)arg2;
- (id)priorityAdaptar;
- (CGSize)size;
- (id)label;
- (id)lightAttrStr;
- (id)darkAttrStr;
- (id)textVMs;
- (id)layout;
- (void)setLayout:(id)arg1;
- (void).cxx_destruct;
@end
