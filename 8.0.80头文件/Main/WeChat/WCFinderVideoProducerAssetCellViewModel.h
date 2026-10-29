@interface WCFinderVideoProducerAssetCellViewModel : NSObject
{
    BOOL _isSegmentModified; // +0x8
    BOOL _isAssetAdjustmentOptimizationEnabled; // +0x9
    BOOL _isSelected; // +0xa
    BOOL _isEditing; // +0xb
    MMAssetInfo * _assetInfo; // +0x10
    NSString * _slotToken; // +0x18
    MMAssetInfo * _stagedReplacementAssetInfo; // +0x20
    long long _segmentType; // +0x28
    OMJClipSegment * _clipSegment; // +0x30
    OMCClipSegment * _composingClipSegment; // +0x38
    OMJID * _composingSegmentID; // +0x40
    unsigned long long _editCount; // +0x48
    unsigned long long _modifyCount; // +0x50
    long long _cellOrder; // +0x58
    struct _modifiedAssetTimeRangeInSegment; // +0x60
    struct _originalAssetTimeRangeInSegment; // +0x90
}
+ (id)sectionId;
- (id)initWithAssetInfo:(id)arg1 clipSegment:(id)arg2;
- (id)initWithAssetInfo:(id)arg1 composingClipSegment:(id)arg2;
- (void)configureWithAssetInfo:(id)arg1 segmentType:(long long)arg2;
- (id)effectiveAssetInfo;
- (BOOL)bindSlotToken:(id)arg1;
- (void)updateStagedReplacementAssetInfo:(id)arg1;
- (BOOL)supportsTimeRangeEditing;
- (void)onEditingSegmentStartTimeSec:(double)arg1;
- (void)modifySegmentStartTimeSec:(double)arg1;
- (void)resetDefaultSegmentTimeRange;
- (BOOL)applyModifiedSegment;
- (void)syncTimeRangeFromCurrentSessionSegment;
- (struct)getSegmentCurrentTimeRange;
- (struct)getSegmentOriginalTimeRange;
- (id)generateClipAssetInfoMap;
- (id)generateClipAssetInfoMapWithTimeScale:(unsigned int)arg1;
- (struct)_getFixedTimeRangeWithPreferedStartTime:(double)arg1;
- (struct)legacyFixedTimeRangeWithPreferredStartTime:(double)arg1;
- (struct)getSegmentBoundingTimeRange;
- (struct)currentSessionSegmentTimeRange;
- (id)assetInfo;
- (void)setAssetInfo:(id)arg1;
- (id)slotToken;
- (void)setSlotToken:(id)arg1;
- (id)stagedReplacementAssetInfo;
- (void)setStagedReplacementAssetInfo:(id)arg1;
- (long long)segmentType;
- (void)setSegmentType:(long long)arg1;
- (id)clipSegment;
- (void)setClipSegment:(id)arg1;
- (id)composingClipSegment;
- (void)setComposingClipSegment:(id)arg1;
- (id)composingSegmentID;
- (void)setComposingSegmentID:(id)arg1;
- (BOOL)isSegmentModified;
- (void)setIsSegmentModified:(BOOL)arg1;
- (BOOL)isAssetAdjustmentOptimizationEnabled;
- (void)setIsAssetAdjustmentOptimizationEnabled:(BOOL)arg1;
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
- (struct)originalAssetTimeRangeInSegment;
- (void)setOriginalAssetTimeRangeInSegment:(struct)arg1;
- (BOOL)isEditing;
- (void)setIsEditing:(BOOL)arg1;
- (void).cxx_destruct;
@end
