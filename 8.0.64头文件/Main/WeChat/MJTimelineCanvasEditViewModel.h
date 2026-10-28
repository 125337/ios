@interface MJTimelineCanvasEditViewModel : NSObject
{
    MJTimelineViewModel * _timelineVM; // +0x8
    MJPlaybackViewModel * _playbackVM; // +0x10
    NSArray * _cellItems; // +0x18
    long long _selectedItemIndex; // +0x20
    id /* block */ _updateSelectionHandler; // +0x28
    NSMutableDictionary * _originalSegmentLayerSpatialInfos; // +0x30
    OMJAspectRatio * _originalAspectRatio; // +0x38
    unsigned long long _originalContentScaleMode; // +0x40
}
- (id)initWithTimelineViewModel:(id)arg1 playbackViewModel:(id)arg2;
- (void)setupData;
- (void)handleSelectItemAtIndexPath:(id)arg1;
- (BOOL)hasChanges;
- (id)timelineVM;
- (void)setTimelineVM:(id)arg1;
- (id)playbackVM;
- (void)setPlaybackVM:(id)arg1;
- (id)cellItems;
- (void)setCellItems:(id)arg1;
- (long long)selectedItemIndex;
- (void)setSelectedItemIndex:(long long)arg1;
- (id /* block */)updateSelectionHandler;
- (void)setUpdateSelectionHandler:(id /* block */)arg1;
- (id)originalSegmentLayerSpatialInfos;
- (void)setOriginalSegmentLayerSpatialInfos:(id)arg1;
- (id)originalAspectRatio;
- (void)setOriginalAspectRatio:(id)arg1;
- (unsigned long long)originalContentScaleMode;
- (void)setOriginalContentScaleMode:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
