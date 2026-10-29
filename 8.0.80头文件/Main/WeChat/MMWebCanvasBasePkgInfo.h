@interface MMWebCanvasBasePkgInfo : MMWebJsBasePkgInfo
{
    NSDictionary * _dicContextMetaInfo; // +0x8
    NSDictionary * _dicRenderMetaInfo; // +0x10
}
+ (id)pkgInfoFromFilePath:(id)arg1;
- (id)dicContextMetaInfo;
- (void)setDicContextMetaInfo:(id)arg1;
- (id)dicRenderMetaInfo;
- (void)setDicRenderMetaInfo:(id)arg1;
- (void).cxx_destruct;
@end
