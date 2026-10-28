@interface WCVideoProducerAssetCellViewModel : NSObject
{
    BOOL _isSegmentModified; // +0x8
    BOOL _isSelected; // +0x9
    BOOL _isEditing; // +0xa
    MMAssetInfo * _assetInfo; // +0x10
    OMJClipSegment * _clipSegment; // +0x18
    unsigned long long _editCount; // +0x20
    unsigned long long _modifyCount; // +0x28
    long long _cellOrder; // +0x30
    struct _modifiedAssetTimeRangeInSegment; // +0x38
}
+ (id)sectionId;
- (id)initWithAssetInfo:(id)arg1 clipSegment:(id)arg2;
- (void)onEditingSegmentStartTimeSec:(double)arg1;
- (void)modifySegmentStartTimeSec:(double)arg1;
- (void)resetDefaultSegmentTimeRange;
- (void)applyModifiedSegment;
- (struct)getSegmentCurrentTimeRange;
- (id)generateClipAssetInfoMap;
- (id)generateClipAssetInfoMapWithTimeScale:(unsigned int)arg1;
- (struct)_getFixedTimeRangeWithPreferedStartTime:(double)arg1;
- (id)assetInfo;
- (void)setAssetInfo:(id)arg1;
- (id)clipSegment;
- (void)setClipSegment:(id)arg1;
- (BOOL)isSegmentModified;
- (void)setIsSegmentModified:(BOOL)arg1;
- (unsigned long long)editCount;
- (void)setEditCount:(unsigned long long)arg1;
- (unsigned long long)modifyCount;
- (void)setModifyCount:(unsigned long long)arg1;
- (long long)cellOrder;
- (void)setCellOrder:(long long)arg1;
- (BOOL)isSelected;
- (void)setIsSelected:(BOOL)arg1;
- (struct)modifiedAssetTimeRangeInSegment;
- (void)setModifiedAssetTimeRangeInSegment:(struct)arg1;
- (BOOL)isEditing;
- (void)setIsEditing:(BOOL)arg1;
- (void).cxx_destruct;
@end
