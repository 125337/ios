@interface WCFinderLongVideoChooseHelper : NSObject <WCActionSheetDelegate>
{
    BOOL _isSlowMotionVideo; // +0x8
    AVAsset * _asset; // +0x10
    NSString * _assetId; // +0x18
    NSURL * _url; // +0x20
    FinderFromAppInfo * _fromAppInfo; // +0x28
    MMUIViewController * _context; // +0x30
    id <WCFinderLongVideoChooseHelperDelegate> _delegate; // +0x38
    id /* block */ _shortAction; // +0x40
}
- (void)showLongVideoPostEntryWithShortAction:(id /* block */)arg1;
- (void)startLongVideoPostWithAsset:(id)arg1 videoUrl:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)actionSheetCancel:(id)arg1;
- (id)genTimelineVideoTimeFormatByUInt:(unsigned int)arg1;
- (id)asset;
- (void)setAsset:(id)arg1;
- (id)assetId;
- (void)setAssetId:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (BOOL)isSlowMotionVideo;
- (void)setIsSlowMotionVideo:(BOOL)arg1;
- (id)fromAppInfo;
- (void)setFromAppInfo:(id)arg1;
- (id)context;
- (void)setContext:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id /* block */)shortAction;
- (void)setShortAction:(id /* block */)arg1;
- (void).cxx_destruct;
@end

