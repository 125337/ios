@interface JSObjCClassInfo2 : NSObject
{
    Class m_class; // +0x8
    BOOL m_block; // +0x10
    NakedPtr<OpaqueJSClass> m_classRef; // +0x18
    Weak<JSC2::JSObject> m_prototype; // +0x20
    Weak<JSC2::JSObject> m_constructor; // +0x28
    Weak<JSC2::Structure> m_structure; // +0x30
}
- (id)initForClass:(Class)arg1;
- (void)dealloc;
- (pair<JSC2::JSObject *, JSC2::JSObject *>)allocateConstructorAndPrototypeInContext:(id)arg1;
- (void *)wrapperForObject:(id)arg1 inContext:(id)arg2;
- (void *)constructorInContext:(id)arg1;
- (void *)prototypeInContext:(id)arg1;
- (void *)structureInContext:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
