@interface MMWebCanvasBizPkgInfo : MMWebJsBasePkgInfo
{
    NSDictionary * _dicClientMetaInfo; // +0x8
}
+ (id)pkgMetaInfoKey;
+ (id)pkgInfoFromFilePath:(id)arg1;
- (id)getBizJsWithType:(id)arg1;
- (long long)minBasePkgVersionRequired;
- (id)dicClientMetaInfo;
- (void)setDicClientMetaInfo:(id)arg1;
- (void).cxx_destruct;
@end

