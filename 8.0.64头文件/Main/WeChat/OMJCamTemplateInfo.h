@interface OMJCamTemplateInfo : NSObject
{
    BOOL _isUseFrontCamera; // +0x8
    BOOL _isOSTEnabled; // +0x9
    BOOL _hasAIGCFeature; // +0xa
    BOOL _isAsyncAIGCEnabled; // +0xb
    BOOL _hasARFeature; // +0xc
    BOOL _isStaticContentTemplate; // +0xd
    unsigned long long _supportedImportedAssetCount; // +0x10
    NSArray * _musicInfos; // +0x18
    struct _minRecordingDuration; // +0x20
    struct _maxRecordingDuration; // +0x38
}
- (id)initWithBackingTemplateInfo:(XMJCamTemplateInfo)arg1;
- (BOOL)isUseFrontCamera;
- (BOOL)isOSTEnabled;
- (struct)minRecordingDuration;
- (struct)maxRecordingDuration;
- (unsigned long long)supportedImportedAssetCount;
- (BOOL)hasAIGCFeature;
- (BOOL)isAsyncAIGCEnabled;
- (BOOL)hasARFeature;
- (BOOL)isStaticContentTemplate;
- (id)musicInfos;
- (void).cxx_destruct;
@end
