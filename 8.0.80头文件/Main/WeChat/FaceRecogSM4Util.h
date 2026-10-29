@interface FaceRecogSM4Util : NSObject
{
    BOOL _useSM4; // +0x8
    BOOL _cdnUseSM4; // +0x9
    NSString * _cdnSm4Key; // +0x10
    NSString * _cdnSm4Iv; // +0x18
    NSData * _cachedSM4Key; // +0x20
    NSString * _cachedBioId; // +0x28
}
+ (id)sharedInstance;
+ (id)dataFromHexString:(id)arg1;
- (void)reset;
- (id)generateSM4Key:(id)arg1;
- (id)faceEncryptSM4:(id)arg1 bioId:(id)arg2;
- (id)getEncSM4Key;
- (id)getEncKey:(id)arg1;
- (BOOL)useSM4;
- (void)setUseSM4:(BOOL)arg1;
- (BOOL)cdnUseSM4;
- (void)setCdnUseSM4:(BOOL)arg1;
- (id)cdnSm4Key;
- (void)setCdnSm4Key:(id)arg1;
- (id)cdnSm4Iv;
- (void)setCdnSm4Iv:(id)arg1;
- (id)cachedSM4Key;
- (void)setCachedSM4Key:(id)arg1;
- (id)cachedBioId;
- (void)setCachedBioId:(id)arg1;
- (void).cxx_destruct;
@end
