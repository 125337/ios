@interface MMWebViewPreloadContentMPPageHandler : NSObject <MPPageFastLoadMgrExt, MMWebViewPreloadContentHandler>
{
    BOOL _isOfflineCache; // +0x8
    unsigned int _checkInterval; // +0xc
    unsigned int _templateType; // +0x10
    unsigned int _templateVersion; // +0x14
    unsigned int _templateReportId; // +0x18
    unsigned int _scene; // +0x1c
    unsigned int _enterType; // +0x20
    NSString * _pageFrameUrl; // +0x28
    NSString * _templateFullVersion; // +0x30
    NSString * _templateVersionGroup; // +0x38
    NSString * _latestTemplateFullVersion; // +0x40
    NSString * _sourceUserName; // +0x48
    NSString * _pageUrl; // +0x50
    NSString * _pageDataKeyUrl; // +0x58
    id /* block */ _pageDataUpdateBlock; // +0x60
    NSString * _a8KeyFullUrl; // +0x68
    NSString * _passTicket; // +0x70
    NSDictionary * _requestHeaderDic; // +0x78
}
- (id)initWithParameter:(id)arg1;
- (unsigned int)getPageTemplateType;
- (unsigned int)getPageTemplateVersion;
- (id)getPageTemplateFullVersion;
- (id)getLatestPageTemplateFullVersion;
- (id)getPageTemplateHttpHeader;
- (unsigned int)getPageCheckInterval;
- (unsigned int)getPageTemplateReportId;
- (id)pageFrameUrlString;
- (id)pageFrameHtmlString;
- (void)setupPageUrl:(id)arg1 pageDataKeyUrl:(id)arg2 scene:(unsigned int)arg3 enterType:(unsigned int)arg4 sourceUserName:(id)arg5;
- (id)getPageForceUrl;
- (BOOL)getPageForceUrlFullScreenValidState;
- (unsigned int)getPageDataRequiredTemplateVersion;
- (id)pageDataString;
- (void)updatePageDataWithCompletion:(id /* block */)arg1;
- (void)saveA8KeyInfoWithUrl:(id)arg1 header:(id)arg2;
- (void)onInjectPageDataNotifySuccessWithA8keyScene:(unsigned int)arg1 useFlag:(unsigned long long)arg2;
- (id)addSessoinQueryForRequestUrl:(id)arg1;
- (unsigned long long)useFlagForIsUsePreCreateWebView:(BOOL)arg1 isSyncGetPageData:(BOOL)arg2;
- (id)addTemplateQueryForUrl:(id)arg1 useFlag:(unsigned long long)arg2;
- (id)requestSessionHeader;
- (void)setIsOfflineCache;
- (BOOL)getIsOfflineCache;
- (id)getPageDataKeyUrl;
- (unsigned int)getPageEnterType;
- (void)setupParamter:(id)arg1;
- (void)onMPPageDataUpdate:(id)arg1;
- (void)checkForceUrlWithCompletion:(id /* block */)arg1;
- (void)deleteOfflineCache;
- (id)pageFrameUrl;
- (void)setPageFrameUrl:(id)arg1;
- (unsigned int)checkInterval;
- (void)setCheckInterval:(unsigned int)arg1;
- (unsigned int)templateType;
- (void)setTemplateType:(unsigned int)arg1;
- (unsigned int)templateVersion;
- (void)setTemplateVersion:(unsigned int)arg1;
- (id)templateFullVersion;
- (void)setTemplateFullVersion:(id)arg1;
- (id)templateVersionGroup;
- (void)setTemplateVersionGroup:(id)arg1;
- (id)latestTemplateFullVersion;
- (void)setLatestTemplateFullVersion:(id)arg1;
- (unsigned int)templateReportId;
- (void)setTemplateReportId:(unsigned int)arg1;
- (BOOL)isOfflineCache;
- (void)setIsOfflineCache:(BOOL)arg1;
- (id)sourceUserName;
- (void)setSourceUserName:(id)arg1;
- (id)pageUrl;
- (void)setPageUrl:(id)arg1;
- (id)pageDataKeyUrl;
- (void)setPageDataKeyUrl:(id)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (unsigned int)enterType;
- (void)setEnterType:(unsigned int)arg1;
- (id /* block */)pageDataUpdateBlock;
- (void)setPageDataUpdateBlock:(id /* block */)arg1;
- (id)a8KeyFullUrl;
- (void)setA8KeyFullUrl:(id)arg1;
- (id)passTicket;
- (void)setPassTicket:(id)arg1;
- (id)requestHeaderDic;
- (void)setRequestHeaderDic:(id)arg1;
- (void).cxx_destruct;
@end
