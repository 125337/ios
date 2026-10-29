@interface MJStickerEditingContext : NSObject
{
    BOOL _active; // +0x8
    BOOL _previousFocusedSegmentWasTrimPrepared; // +0x9
    MJComposingPagePanelView * _panel; // +0x10
    OMJID * _previousFocusedSegmentID; // +0x18
    MJTimelineViewConfiguration * _parentTimelineConfiguration; // +0x20
    OMJID * _selectedSegmentID; // +0x28
    OMJID * _pendingLocationSegmentID; // +0x30
    id /* block */ _pendingAdditionCompletion; // +0x38
    NSString * _entranceMaterialID; // +0x40
    NSString * _entranceEmoticonFilePath; // +0x48
    NSString * _restorationOperationTitle; // +0x50
}
- (id)description;
- (BOOL)active;
- (void)setActive:(BOOL)arg1;
- (id)panel;
- (void)setPanel:(id)arg1;
- (id)previousFocusedSegmentID;
- (void)setPreviousFocusedSegmentID:(id)arg1;
- (id)parentTimelineConfiguration;
- (void)setParentTimelineConfiguration:(id)arg1;
- (BOOL)previousFocusedSegmentWasTrimPrepared;
- (void)setPreviousFocusedSegmentWasTrimPrepared:(BOOL)arg1;
- (id)selectedSegmentID;
- (void)setSelectedSegmentID:(id)arg1;
- (id)pendingLocationSegmentID;
- (void)setPendingLocationSegmentID:(id)arg1;
- (id /* block */)pendingAdditionCompletion;
- (void)setPendingAdditionCompletion:(id /* block */)arg1;
- (id)entranceMaterialID;
- (void)setEntranceMaterialID:(id)arg1;
- (id)entranceEmoticonFilePath;
- (void)setEntranceEmoticonFilePath:(id)arg1;
- (id)restorationOperationTitle;
- (void)setRestorationOperationTitle:(id)arg1;
- (void).cxx_destruct;
@end
