@interface TPXMLElement : TPXMLNode
+ (void)deleteNamespacePtr:(_xmlNs *)arg1 fromXMLNode:(_xmlNode *)arg2;
+ (void)fixQualifiedNamesForNode:(_xmlNode *)arg1 graftingToTreeNode:(_xmlNode *)arg2;
+ (void)fixDuplicateNamespacesForNode:(_xmlNode *)arg1 graftingToTreeNode:(_xmlNode *)arg2 namespaceSubstitutionMap:(id)arg3;
+ (void)fixUpNamespacesForNode:(_xmlNode *)arg1 graftingToTreeNode:(_xmlNode *)arg2 namespaceSubstitutionMap:(id)arg3;
+ (void)fixUpNamespacesForNode:(_xmlNode *)arg1 graftingToTreeNode:(_xmlNode *)arg2;
- (id)initWithXMLString:(id)arg1 error:(id *)arg2;
- (id)namespaces;
- (void)setNamespaces:(id)arg1;
- (void)addNamespace:(id)arg1;
- (void)addChild:(id)arg1;
- (void)removeChild:(id)arg1;
- (id)elementsForName:(id)arg1;
- (id)elementsForLocalName:(id)arg1 URI:(id)arg2;
- (id)attributes;
- (void)addAttribute:(id)arg1;
- (id)attributeForXMLNode:(_xmlAttr *)arg1;
- (id)attributeForName:(id)arg1;
- (id)attributeForLocalName:(id)arg1 URI:(id)arg2;
- (id)resolvePrefixForNamespaceURI:(id)arg1;
@end
