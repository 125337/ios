@interface WCFinderFeedAudioHelper : NSObject <WCPlayerDownloaderExt, WCFinderVideoDownLoadMgrExt>
{
    int _commentScene; // +0x8
    WCFinderDataItem * _bindDataItem; // +0x10
    NSMutableDictionary * _parseDic; // +0x18
    id /* block */ _sucBlock; // +0x20
    id /* block */ _failBlock; // +0x28
}
+ (BOOL)videoHasDownloaded:(id)arg1 commentScene:(int)arg2;
+ (id)genFeedOutputPathBy:(id)arg1 commentScene:(int)arg2;
+ (BOOL)videoHasBeFollowed:(id)arg1;
- (BOOL)enableUseFeedDirectly:(id)arg1;
- (BOOL)enableUseFeedDirectlyByDataItem:(id)arg1;
- (id)parseDic;
- (id)initWithCommentScene:(int)arg1;
- (id)genDownloadMediaInfo;
- (void)dealloc;
- (void)resetDataItem;
- (void)parseTargetAudioDataItem:(id)arg1 sucBlock:(id /* block */)arg2 failBlock:(id /* block */)arg3;
- (void)finderMediaVideoStreamDownloadSuccessfulWithTid:(id)arg1;
- (void)extractAudioTrackFromOutputPath:(id)arg1;
- (void)OnCdnDownloadError:(id)arg1;
- (id)bindDataItem;
- (void)setBindDataItem:(id)arg1;
- (void)setParseDic:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (id /* block */)sucBlock;
- (void)setSucBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

