@interface MessageInteractionOptionList : NSObject
{
    NSArray * _buttons; // +0x8
}
+ (id)fromXMLNode:(XmlReaderNode_t *)arg1;
- (id)toXMLString;
- (id)buttons;
- (void)setButtons:(id)arg1;
- (void).cxx_destruct;
@end
