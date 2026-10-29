@interface WCFinderGenOptionParams : NSObject
{
    BOOL _isSlowMotionVideo; // +0x8
    WCFinderVideoQualityScoreModel * _videoScoreModel; // +0x10
    EditVideoAttr * _editAttr; // +0x18
    NSArray * _selectedAssetIDs; // +0x20
    AVAsset * _fromAvAsset; // +0x28
    NSString * _postFinderUsername; // +0x30
    NSString * _originalVideoPath; // +0x38
}
- (id)videoScoreModel;
- (void)setVideoScoreModel:(id)arg1;
- (id)editAttr;
- (void)setEditAttr:(id)arg1;
- (id)selectedAssetIDs;
- (void)setSelectedAssetIDs:(id)arg1;
- (BOOL)isSlowMotionVideo;
- (void)setIsSlowMotionVideo:(BOOL)arg1;
- (id)fromAvAsset;
- (void)setFromAvAsset:(id)arg1;
- (id)postFinderUsername;
- (void)setPostFinderUsername:(id)arg1;
- (id)originalVideoPath;
- (void)setOriginalVideoPath:(id)arg1;
- (void).cxx_destruct;
@end

