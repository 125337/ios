@interface WAPrefetchInvalidateResourceLogic : NSObject
{
    WAPrefetchInvalidateResourceInfo * _info; // +0x8
}
- (id)init;
- (void)executeInvalidateCodeCmd:(id)arg1;
- (void)executeInvalidateContactCmd:(id)arg1;
- (void)resumeLocalData;
- (void)saveLocalData;
- (BOOL)isContactInvalidateWithAppid:(id)arg1 updateTime:(unsigned int)arg2;
- (BOOL)isCodePkgInvalidateWithAppid:(id)arg1 updateTime:(unsigned int)arg2;
- (unsigned int)reportIdForInvalidateContact:(id)arg1;
- (unsigned int)reportIdForInvalidateCode:(id)arg1;
- (id)allInvalidateCodeAppid;
- (id)allInvalidateContactAppid;
- (void)clearInvalidateContactWithAppid:(id)arg1;
- (void)clearInvalidateCodeWithAppid:(id)arg1;
- (id)info;
- (void)setInfo:(id)arg1;
- (void).cxx_destruct;
@end
