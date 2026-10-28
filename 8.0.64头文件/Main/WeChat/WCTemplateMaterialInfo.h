@interface WCTemplateMaterialInfo : NSObject
{
    OMJAssetInfo * _omjAssetInfo; // +0x8
}
+ (id)assetInfoWithPHLocalIdentifier:(id)arg1 error:(id *)arg2;
+ (id)assetInfoWithMediaFileAtPath:(id)arg1 identifier:(id)arg2 mediaType:(long long)arg3 error:(id *)arg4;
- (id)initWithPHLocalIdentifier:(id)arg1 error:(id *)arg2;
- (id)initWithMediaFileAtPath:(id)arg1 identifier:(id)arg2 mediaType:(long long)arg3 error:(id *)arg4;
- (id)omjAssetInfo;
- (void)setOmjAssetInfo:(id)arg1;
- (void).cxx_destruct;
@end
