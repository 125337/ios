@interface WNSaveImageCgi : MMObject <PBMessageObserverDelegate>
{
    unsigned int _curVersion; // +0x8
    NSMutableArray * _fontInfoList; // +0x10
    NSMutableArray * _backGroundInfoList; // +0x18
    NSMutableArray * _arrFontInfos; // +0x20
    NSMutableArray * _arrBkgImageInfos; // +0x28
    unsigned long long _fontInfosCount; // +0x30
    unsigned long long _imageInfosCount; // +0x38
}
- (id)init;
- (void)startRequest;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onReturnError;
- (void)onReturnSuccess;
- (void)onReturnNoNeedDownload;
- (void)handleMessageReturnWithResponse:(id)arg1;
- (void)clearCache;
- (void)checkDownLoadQueue;
- (void)downloadFont:(id)arg1;
- (void)generateWNBkgImageInfo;
- (id)decodeFontResourcesFromFile;
- (id)decodeBkgImageResourcesFromFile;
- (void)encodeResources:(id)arg1 toFilePath:(id)arg2;
- (id)getWNFontInfoArr;
- (id)getWNBkgImageInfoArr;
- (id)fontInfoList;
- (void)setFontInfoList:(id)arg1;
- (id)backGroundInfoList;
- (void)setBackGroundInfoList:(id)arg1;
- (id)arrFontInfos;
- (void)setArrFontInfos:(id)arg1;
- (id)arrBkgImageInfos;
- (void)setArrBkgImageInfos:(id)arg1;
- (unsigned int)curVersion;
- (void)setCurVersion:(unsigned int)arg1;
- (unsigned long long)fontInfosCount;
- (void)setFontInfosCount:(unsigned long long)arg1;
- (unsigned long long)imageInfosCount;
- (void)setImageInfosCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

