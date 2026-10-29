@interface JSWrapperMap2 : NSObject
{
    RetainPtr<NSMutableDictionary> m_classMap; // +0x8
    unique_ptr<JSC2::WeakGCMap<id, JSC2::JSObject>, std::default_delete<JSC2::WeakGCMap<id, JSC2::JSObject>>> m_cachedJSWrappers; // +0x10
    RetainPtr<NSMapTable> m_cachedObjCWrappers; // +0x18
}
- (id)initWithGlobalContextRef:(OpaqueJSContext *)arg1;
- (id)classInfoForClass:(Class)arg1;
- (id)jsWrapperForObject:(id)arg1 inContext:(id)arg2;
- (id)objcWrapperForJSValueRef:(OpaqueJSValue *)arg1 inContext:(id)arg2;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
