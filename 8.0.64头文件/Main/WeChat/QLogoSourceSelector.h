@interface QLogoSourceSelector : NSObject
{
    NSMutableDictionary * _logoSourceDict; // +0x8
    NSMutableDictionary * _logoImageDict; // +0x10
    NSMutableDictionary * _downloadingList; // +0x18
}
+ (id)instance;
- (BOOL)hasLocalConfigWithIsBing:(BOOL)arg1;
- (id)getLogoWithMapStatus:(id)arg1 forBingSource:(BOOL)arg2 orSource:(id)arg3;
- (BOOL)validateCustomLogoImageReplace:(id)arg1;
- (id)getQLogoWithMapStatus:(id)arg1 isBing:(BOOL)arg2;
- (id)resolveLogoSourceDict:(id)arg1;
- (id)getLogoImageBasePath;
- (id)getLogoImagePath:(id)arg1;
- (id)readLocalLogoImage:(id)arg1;
- (void)clearLogoImageCache;
- (void)downloadLogo:(id)arg1 withURL:(id)arg2;
- (id)getLogoSourceFilePathWithIsBing:(BOOL)arg1;
- (id)readLocalLogoSourceFileWithIsBing:(BOOL)arg1;
- (void)updateLogoSourceFile:(id)arg1 isBing:(BOOL)arg2;
- (void)setLocalLogoResourceDictWithIsBing:(BOOL)arg1;
- (id)init;
- (id)logoSourceDict;
- (void)setLogoSourceDict:(id)arg1;
- (id)logoImageDict;
- (void)setLogoImageDict:(id)arg1;
- (id)downloadingList;
- (void)setDownloadingList:(id)arg1;
- (void).cxx_destruct;
@end
