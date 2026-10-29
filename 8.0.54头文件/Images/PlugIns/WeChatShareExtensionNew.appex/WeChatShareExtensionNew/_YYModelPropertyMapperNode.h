@interface _YYModelPropertyMapperNode : NSObject
{
    void * _tag; // +0x8
    _YYModelPropertyMeta * _propertyMeta; // +0x10
    BOOL _isXmlAttribute; // +0x18
    _YYModelPropertyMapperNode * _firstChildNode; // +0x20
    _YYModelPropertyMapperNode * _nextSibling; // +0x28
    id /* block */ _preProcess; // +0x30
    _YYModelPropertyMapperNode * _parentNode; // +0x38
}
- (id)init;
- (void)dealloc;
- (id)parentNode;
- (void)setParentNode:(id)arg1;
- (void).cxx_destruct;
@end

