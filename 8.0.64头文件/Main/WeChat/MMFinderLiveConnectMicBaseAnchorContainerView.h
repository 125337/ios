@interface MMFinderLiveConnectMicBaseAnchorContainerView : MMFinderLiveConnectMicBaseContainerView
{
    NSMutableArray * _candicateAnchorList; // +0x30
    NSArray * _connectingAnchorUserList; // +0x38
    FinderLiveAiAssistantNotification * _aiAssistantInfo; // +0x40
    MMFinderLiveConnectMicAnchorContainerReporterExtInfo * _anchorContainerReporterExtInfo; // +0x48
    MMFinderLiveLastBufferHandler * _candicateLastBufferCache; // +0x50
}
- (void)resetCandicateAnchorList;
- (void)updateWithConnectMicUserList:(id)arg1 connectingAnchorUserList:(id)arg2 forceDisableApplySectionCellButton:(BOOL)arg3 animted:(BOOL)arg4;
- (id)anchorContainerReporterExtInfo;
- (id)candicateAnchorList;
- (id)connectingAnchorUserList;
- (id)aiAssistantInfo;
- (void)setAiAssistantInfo:(id)arg1;
- (void)setAnchorContainerReporterExtInfo:(id)arg1;
- (id)candicateLastBufferCache;
- (void)setCandicateLastBufferCache:(id)arg1;
- (void).cxx_destruct;
@end
