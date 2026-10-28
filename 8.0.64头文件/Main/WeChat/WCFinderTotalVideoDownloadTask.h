@interface WCFinderTotalVideoDownloadTask : NSObject <WCFinderVideoDownLoadMgrExt>
{
    id /* block */ _resolver; // +0x8
    WCFinderDataItem * _dataItem; // +0x10
    WCFinderFeedMediaWrap * _mediaWrap; // +0x18
    NSString * _resolvedPath; // +0x20
    NSObject * _selfHolder; // +0x28
}
- (id)init;
- (id)downloadVideoAlone:(id)arg1;
- (void)cancel;
- (void)dowloadTimeOut;
- (void)finderMediaVideoStreamDownloadSuccessfulWithTid:(id)arg1;
- (id /* block */)resolver;
- (void)setResolver:(id /* block */)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)mediaWrap;
- (void)setMediaWrap:(id)arg1;
- (id)resolvedPath;
- (void)setResolvedPath:(id)arg1;
- (id)selfHolder;
- (void)setSelfHolder:(id)arg1;
- (void).cxx_destruct;
@end
