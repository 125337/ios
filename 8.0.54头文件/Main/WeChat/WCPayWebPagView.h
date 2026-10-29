@interface WCPayWebPagView : PAGView <WCPaySingleDownloadLogicExt>
{
    BOOL _isNeedFlush; // +0x8
    BOOL _isForceUpdate; // +0x9
    int _replaceIndex; // +0xc
    id <WCPayWebPagViewDelegate> _delegate; // +0x10
    NSMutableDictionary * _extraInfoDict; // +0x18
    NSString * _pagUrl; // +0x20
    WCPaySingleDownloadLogic * _singleDownloadLogic; // +0x28
    PAGImage * _relplacePagImage; // +0x30
}
- (id)getCurrentPagUrl;
- (void)setReplaceImage:(id)arg1 index:(int)arg2;
- (void)setPagURL:(id)arg1;
- (void)setPagURL:(id)arg1 forceUpdate:(BOOL)arg2 pagLoadDelegate:(id)arg3;
- (void)startLoadPagData;
- (void)onDownloadTaskCompletion:(long long)arg1 taskUrl:(id)arg2 extraInfo:(id)arg3 filePath:(id)arg4 totalLength:(unsigned long long)arg5;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)extraInfoDict;
- (void)setExtraInfoDict:(id)arg1;
- (BOOL)isNeedFlush;
- (void)setIsNeedFlush:(BOOL)arg1;
- (id)pagUrl;
- (void)setPagUrl:(id)arg1;
- (BOOL)isForceUpdate;
- (void)setIsForceUpdate:(BOOL)arg1;
- (id)singleDownloadLogic;
- (void)setSingleDownloadLogic:(id)arg1;
- (id)relplacePagImage;
- (void)setRelplacePagImage:(id)arg1;
- (int)replaceIndex;
- (void)setReplaceIndex:(int)arg1;
- (void).cxx_destruct;
@end

