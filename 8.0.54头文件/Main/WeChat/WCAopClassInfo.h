@interface WCAopClassInfo : NSObject
{
    BOOL _returnValueOnStack; // +0x8
    BOOL _isClassMethod; // +0x9
    NSArray * _beforeActions; // +0x10
    WCAopBlockImp * _replaceBlock; // +0x18
    NSArray * _afterActions; // +0x20
    unsigned long long _frameLength; // +0x28
    unsigned long long _instanceCount; // +0x30
    NSArray * _parameterInfo; // +0x38
    void * * _originIMP; // +0x40
    Class _currentClass; // +0x48
    Class _metaClass; // +0x50
    const char * _methodType; // +0x58
    WCAopLock * _classLock; // +0x60
    WCAopIMP * _aopIMP; // +0x68
    SEL _selector; // +0x70
}
- (BOOL)isClear;
- (id)beforeActions;
- (void)setBeforeActions:(id)arg1;
- (id)replaceBlock;
- (void)setReplaceBlock:(id)arg1;
- (id)afterActions;
- (void)setAfterActions:(id)arg1;
- (unsigned long long)frameLength;
- (void)setFrameLength:(unsigned long long)arg1;
- (unsigned long long)instanceCount;
- (void)setInstanceCount:(unsigned long long)arg1;
- (BOOL)returnValueOnStack;
- (void)setReturnValueOnStack:(BOOL)arg1;
- (id)parameterInfo;
- (void)setParameterInfo:(id)arg1;
- (void * *)originIMP;
- (void)setOriginIMP:(void * *)arg1;
- (Class)currentClass;
- (void)setCurrentClass:(Class)arg1;
- (Class)metaClass;
- (void)setMetaClass:(Class)arg1;
- (const char *)methodType;
- (void)setMethodType:(const char *)arg1;
- (id)classLock;
- (void)setClassLock:(id)arg1;
- (WCAopIMP *)aopIMP;
- (void)setAopIMP:(WCAopIMP *)arg1;
- (SEL)selector;
- (void)setSelector:(SEL)arg1;
- (BOOL)isClassMethod;
- (void)setIsClassMethod:(BOOL)arg1;
- (void).cxx_destruct;
@end

