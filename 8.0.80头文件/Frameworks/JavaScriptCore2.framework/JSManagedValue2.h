@interface JSManagedValue2 : NSObject
{
    Weak<JSC2::JSGlobalObject> m_globalObject; // +0x8
    RefPtr<JSC2::JSLock, WTF2::RawPtrTraits<JSC2::JSLock>, WTF2::DefaultRefDerefTraits<JSC2::JSLock>> m_lock; // +0x10
    JSWeakValue m_weakValue; // +0x18
    RetainPtr<NSMapTable> m_owners; // +0x28
}
+ (id)managedValueWithValue:(id)arg1;
+ (id)managedValueWithValue:(id)arg1 andOwner:(id)arg2;
- (id)init;
- (id)initWithValue:(id)arg1;
- (void)dealloc;
- (void)didAddOwner:(id)arg1;
- (void)didRemoveOwner:(id)arg1;
- (id)value;
- (void)disconnectValue;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
