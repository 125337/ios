@interface MMFinderLiveStickerTextTemplateFont : NSObject <MMFinderLiveStickerTextTemplateRemoteDeliveredResource>
{
    NSString * _backendId; // +0x8
    unsigned long long _type; // +0x10
    NSString * _resourceId; // +0x18
    NSString * _resourceUri; // +0x20
    NSString * _resourceMd5Hash; // +0x28
    NSString * _unextractedResourcePath; // +0x30
    NSString * _extractedResourcePath; // +0x38
}
+ (id)createLocalSourcedWithResourceId:(id)arg1 resourcePath:(id)arg2;
+ (id)createRemoteDeliveredWithBackendEntity:(id)arg1;
- (id)backendId;
- (void)setBackendId:(id)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)resourceId;
- (void)setResourceId:(id)arg1;
- (id)resourceUri;
- (void)setResourceUri:(id)arg1;
- (id)resourceMd5Hash;
- (void)setResourceMd5Hash:(id)arg1;
- (id)unextractedResourcePath;
- (void)setUnextractedResourcePath:(id)arg1;
- (id)extractedResourcePath;
- (void)setExtractedResourcePath:(id)arg1;
- (void).cxx_destruct;
@end
