@interface JSScript2 : NSObject
{
    WeakObjCPtr<JSVirtualMachine2> m_virtualMachine; // +0x8
    long long m_type; // +0x10
    MappedFileData m_mappedSource; // +0x18
    String m_source; // +0x30
    RetainPtr<NSURL> m_sourceURL; // +0x38
    RetainPtr<NSURL> m_cachePath; // +0x40
    RefPtr<JSC2::CachedBytecode, WTF2::RawPtrTraits<JSC2::CachedBytecode>, WTF2::DefaultRefDerefTraits<JSC2::CachedBytecode>> m_cachedBytecode; // +0x48
    unsigned long long m_cachedHash; // +0x50
    unsigned long long m_version; // +0x58
    unsigned long long m_codeCacheSize; // +0x60
    array<unsigned char, 20UL> m_digest; // +0x68
    long long m_err; // +0x80
    BOOL m_hasCache; // +0x88
    char m_flag; // +0x89
}
+ (id)scriptOfType:(long long)arg1 withScript:(void *)arg2 andSourceURL:(id)arg3 andBytecodeCache:(id)arg4 inVirtualMachine:(id)arg5 error:(id *)arg6;
+ (id)scriptOfType:(long long)arg1 withSource:(id)arg2 andSourceURL:(id)arg3 andBytecodeCache:(id)arg4 inVirtualMachine:(id)arg5 error:(id *)arg6;
+ (id)scriptOfType:(long long)arg1 memoryMappedFromASCIIFile:(id)arg2 withSourceURL:(id)arg3 andBytecodeCache:(id)arg4 inVirtualMachine:(id)arg5 error:(id *)arg6;
- (id)init;
- (unsigned int)hash;
- (const void *)source;
- (RefPtr<JSC2::CachedBytecode, WTF2::RawPtrTraits<JSC2::CachedBytecode>, WTF2::DefaultRefDerefTraits<JSC2::CachedBytecode>>)cachedBytecode;
- (SourceCode)sourceCode;
- (void *)jsSourceCode;
- (BOOL)writeCache:(void *)arg1;
- (void)readCache;
- (BOOL)cacheBytecodeWithError:(id *)arg1;
- (BOOL)isUsingBytecodeCache;
- (id)sourceURL;
- (id)cacheURL;
- (long long)type;
- (unsigned long long)version;
- (unsigned long long)codeCacheSize;
- (BOOL)validate;
- (BOOL)isBytecodeValid;
- (BOOL)isBytecodeValid:(long long *)arg1;
- (id)virtualMachine;
- (long long)errorCode;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

