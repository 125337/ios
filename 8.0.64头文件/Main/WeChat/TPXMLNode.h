@interface TPXMLNode : NSObject <NSCopying>
{
    _xmlNode * xmlNode_; // +0x8
    BOOL shouldFreeXMLNode_; // +0x10
    NSString * cachedName_; // +0x18
    NSArray * cachedChildren_; // +0x20
    NSArray * cachedAttributes_; // +0x28
}
+ (void)load;
+ (id)elementWithName:(id)arg1;
+ (id)elementWithName:(id)arg1 stringValue:(id)arg2;
+ (id)elementWithName:(id)arg1 URI:(id)arg2;
+ (id)attributeWithName:(id)arg1 stringValue:(id)arg2;
+ (id)attributeWithName:(id)arg1 URI:(id)arg2 stringValue:(id)arg3;
+ (id)textWithStringValue:(id)arg1;
+ (id)namespaceWithName:(id)arg1 stringValue:(id)arg2;
+ (id)nodeConsumingXMLNode:(_xmlNode *)arg1;
+ (id)nodeBorrowingXMLNode:(_xmlNode *)arg1;
+ (id)localNameForName:(id)arg1;
+ (id)prefixForName:(id)arg1;
- (id)initConsumingXMLNode:(_xmlNode *)arg1;
- (id)initBorrowingXMLNode:(_xmlNode *)arg1;
- (void)releaseCachedValues;
- (id)stringFromXMLString:(const char *)arg1;
- (void)dealloc;
- (void)setStringValue:(id)arg1;
- (id)stringValue;
- (id)XMLString;
- (id)localName;
- (id)prefix;
- (id)URI;
- (id)qualifiedName;
- (id)name;
- (unsigned long long)childCount;
- (id)children;
- (id)childAtIndex:(unsigned int)arg1;
- (unsigned long long)kind;
- (id)nodesForXPath:(id)arg1 error:(id *)arg2;
- (id)nodesForXPath:(id)arg1 namespaces:(id)arg2 error:(id *)arg3;
- (id)description;
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)methodSignatureForSelector:(SEL)arg1;
- (_xmlNode *)XMLNodeCopy;
- (_xmlNode *)XMLNode;
- (BOOL)shouldFreeXMLNode;
- (void)setShouldFreeXMLNode:(BOOL)arg1;
@end
