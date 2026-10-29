@interface WCVideoProducerEditSegmentOperation : WCVideoProducerBaseOperation
{
    MJVideoTemplate * _templateInfo; // +0x8
    NSMutableArray * _editAssetClipOperationList; // +0x10
    NSMutableArray * _editLaunchMJOperationList; // +0x18
}
- (id)initWithTemplateInfo:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)segmentDidFinishEditingAsset:(id)arg1 withClipSegment:(id)arg2 atIndex:(long long)arg3;
- (void)segmentDidCancelEditingAsset:(id)arg1 withClipSegment:(id)arg2 atIndex:(long long)arg3;
- (void)segmentDidLaunchMJApp;
- (void)_recordEditAssetClipOperationWithAsset:(id)arg1 clipSegment:(id)arg2 atIndex:(long long)arg3 forType:(long long)arg4;
- (id)templateInfo;
- (void)setTemplateInfo:(id)arg1;
- (id)editAssetClipOperationList;
- (void)setEditAssetClipOperationList:(id)arg1;
- (id)editLaunchMJOperationList;
- (void)setEditLaunchMJOperationList:(id)arg1;
- (void).cxx_destruct;
@end

