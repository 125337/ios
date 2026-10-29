@interface WAAppTaskPageRecord : MMObject <PBCoding>
{
    BOOL _isRecoverReloaded; // +0x8
    BOOL _hasHtmlWeb; // +0x9
    BOOL _isSkyline; // +0xa
    unsigned int _webviewId; // +0xc
    NSString * _pagePath; // +0x10
    NSString * _lastPageJsError; // +0x18
    NSString * _openType; // +0x20
    NSString * _navId; // +0x28
    NSMutableArray * _downloadedModulesWhenRoute; // +0x30
}
+ (void)PBArrayAdd_webviewId;
+ (void)PBArrayAdd_pagePath;
+ (void)PBArrayAdd_lastPageJsError;
+ (void)PBArrayAdd_openType;
+ (void)PBArrayAdd_navId;
+ (void)PBArrayAdd_isRecoverReloaded;
+ (void)PBArrayAdd_hasHtmlWeb;
+ (void)PBArrayAdd_isSkyline;
+ (void)initialize;
- (id)getPBPropertyTable;
- (unsigned int)webviewId;
- (void)setWebviewId:(unsigned int)arg1;
- (id)pagePath;
- (void)setPagePath:(id)arg1;
- (id)lastPageJsError;
- (void)setLastPageJsError:(id)arg1;
- (id)openType;
- (void)setOpenType:(id)arg1;
- (id)navId;
- (void)setNavId:(id)arg1;
- (BOOL)isRecoverReloaded;
- (void)setIsRecoverReloaded:(BOOL)arg1;
- (BOOL)hasHtmlWeb;
- (void)setHasHtmlWeb:(BOOL)arg1;
- (BOOL)isSkyline;
- (void)setIsSkyline:(BOOL)arg1;
- (id)downloadedModulesWhenRoute;
- (void)setDownloadedModulesWhenRoute:(id)arg1;
- (void).cxx_destruct;
@end

