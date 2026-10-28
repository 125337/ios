@interface WCFinderXMLBuilder : NSObject
{
    NSString * _tagName; // +0x8
    NSMutableDictionary * _elements; // +0x10
}
+ (id)builderForTagName:(id)arg1;
- (void)addElementWithLabel:(id)arg1 content:(id)arg2;
- (id)xmlString;
- (id)tagName;
- (void)setTagName:(id)arg1;
- (id)elements;
- (void)setElements:(id)arg1;
- (void).cxx_destruct;
@end
