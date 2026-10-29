@interface OMJTemplateInfo : NSObject
{
    NSString * _templateName; // +0x8
    NSString * _templateID; // +0x10
    NSURL * _coverImageURL; // +0x18
    NSString * _coverImageFileMD5; // +0x20
    NSURL * _previewImageGifURL; // +0x28
    NSString * _previewImageGifFileMD5; // +0x30
    NSURL * _previewImageWxAMURL; // +0x38
    NSString * _previewImageWxAMFileMD5; // +0x40
    OMJChannelEventConfig * _channelEventConfig; // +0x48
    NSString * _templateDescURL; // +0x50
    NSString * _templateDescFileMD5; // +0x58
    unsigned long long _templateDescVersion; // +0x60
    unsigned long long _minimumiOSSDKVersion; // +0x68
    unsigned long long _minimumAndroidSDKVersion; // +0x70
    unsigned long long _minimumAssetCount; // +0x78
    unsigned long long _maximumAssetCount; // +0x80
    NSData * _sessionBuffer; // +0x88
    NSString * _aiModelType; // +0x90
}
+ (id)templateWithName:(id)arg1 coverUrls:(id)arg2 templateId:(id)arg3;
+ (id)templateWithName:(id)arg1 coverUrls:(id)arg2 templateId:(id)arg3 localSVGIconName:(id)arg4;
+ (id)templateWithName:(id)arg1 coverUrls:(id)arg2 templateId:(id)arg3 descUrl:(id)arg4 descVer:(unsigned long long)arg5 localSVGIconName:(id)arg6;
+ (id)templateWithName:(id)arg1 coverUrl:(id)arg2 coverFileMd5:(id)arg3 previewWxamUrl:(id)arg4 previewWxamFileMd5:(id)arg5 previewGifUrl:(id)arg6 previewGifFileMd5:(id)arg7 templateId:(id)arg8 descUrl:(id)arg9 descFileMd5:(id)arg10 descVer:(unsigned long long)arg11 localSVGIconName:(id)arg12;
+ (id)finderDefaultTemplateId;
+ (id)emptyImageTemplateInfo;
+ (id)emptyTemplateInfo;
+ (id)loadingTemplateInfo;
+ (id)templateWithMJVideoTemplate:(id)arg1;
- (id)getLocalSVGName;
- (BOOL)isEmptyImageTemplate;
- (BOOL)isFinderDefaultTemplate;
- (BOOL)isEmptyTemplate;
- (BOOL)isLoadingTemplate;
- (BOOL)isRecommendTemplate;
- (id)initWithBackingInfo:(const void *)arg1;
- (id)initWithTemplateID:(id)arg1 templateName:(id)arg2 coverImageURL:(id)arg3 previewImageGifURL:(id)arg4 previewImageWxAMURL:(id)arg5 channelEventConfig:(id)arg6 templateDescURL:(id)arg7 templateDescVersion:(unsigned long long)arg8 minimumiOSSDKVersion:(unsigned long long)arg9 minimumAndroidSDKVersion:(unsigned long long)arg10 sessionBuffer:(id)arg11;
- (id)initWithTemplateID:(id)arg1 templateName:(id)arg2 coverImageURL:(id)arg3 coverImageFileMD5:(id)arg4 previewImageGifURL:(id)arg5 previewImageGifFileMD5:(id)arg6 previewImageWxAMURL:(id)arg7 previewImageWxAMFileMD5:(id)arg8 channelEventConfig:(id)arg9 templateDescURL:(id)arg10 templateDescFileMD5:(id)arg11 templateDescVersion:(unsigned long long)arg12 minimumiOSSDKVersion:(unsigned long long)arg13 minimumAndroidSDKVersion:(unsigned long long)arg14 sessionBuffer:(id)arg15 aiModelType:(id)arg16;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)templateName;
- (id)templateID;
- (id)coverImageURL;
- (id)coverImageFileMD5;
- (id)previewImageGifURL;
- (id)previewImageGifFileMD5;
- (id)previewImageWxAMURL;
- (id)previewImageWxAMFileMD5;
- (id)channelEventConfig;
- (id)templateDescURL;
- (id)templateDescFileMD5;
- (unsigned long long)templateDescVersion;
- (unsigned long long)minimumiOSSDKVersion;
- (unsigned long long)minimumAndroidSDKVersion;
- (unsigned long long)minimumAssetCount;
- (void)setMinimumAssetCount:(unsigned long long)arg1;
- (unsigned long long)maximumAssetCount;
- (void)setMaximumAssetCount:(unsigned long long)arg1;
- (id)sessionBuffer;
- (id)aiModelType;
- (void).cxx_destruct;
@end

