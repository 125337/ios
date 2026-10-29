@interface WNSaveImageResourceMgr : MMUserService <WNSaveImageCgiExt, MMServiceProtocol>
{
    BOOL _bDownload; // +0x8
    unsigned int _localId; // +0xc
    WNSaveImageCgi * _resourceCgi; // +0x10
    NSArray * _arrFontInfos; // +0x18
    NSArray * _arrBkgImageInfos; // +0x20
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)startDownloadResources:(unsigned int)arg1;
- (id)getWNFontInfoArr;
- (id)getWNBkgImageInfoArr;
- (void)onDownloadSuccess;
- (void)onDownloadFail;
- (void)onDownloadNone;
- (void)handleNetworkResource;
- (id)wnFontOfSize:(double)arg1 fileName:(id)arg2 andFamilyName:(id)arg3 andZipFile:(id)arg4;
- (void)loadFontWithFileName:(id)arg1 andZipFile:(id)arg2;
- (id)resourceCgi;
- (void)setResourceCgi:(id)arg1;
- (id)arrFontInfos;
- (void)setArrFontInfos:(id)arg1;
- (id)arrBkgImageInfos;
- (void)setArrBkgImageInfos:(id)arg1;
- (BOOL)bDownload;
- (void)setBDownload:(BOOL)arg1;
- (unsigned int)localId;
- (void)setLocalId:(unsigned int)arg1;
- (void).cxx_destruct;
@end
