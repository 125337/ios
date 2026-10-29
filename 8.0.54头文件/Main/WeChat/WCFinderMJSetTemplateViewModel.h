@interface WCFinderMJSetTemplateViewModel : NSObject <ForwardMessageLogicDelegate>
{
    id <WCFinderMJSetTemplateViewModelDelegate> _delegate; // +0x8
    WCFinderMJTempInfo * _mjTempInfo; // +0x10
    NSString * _topicId; // +0x18
    NSMutableArray * _mutTabs; // +0x20
    ForwardMessageLogicController * _forwardLogic; // +0x28
    WCFinderMJSetInitParams * _params; // +0x30
}
- (id)initWithParams:(id)arg1;
- (id)tabs;
- (void)requestTabs;
- (void)shareToFriend:(id)arg1;
- (void)shareToMoment:(id)arg1;
- (unsigned long long)genFinderShareItemType;
- (long long)genShareMomentType;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)mjTempInfo;
- (void)setMjTempInfo:(id)arg1;
- (id)topicId;
- (void)setTopicId:(id)arg1;
- (id)mutTabs;
- (void)setMutTabs:(id)arg1;
- (id)forwardLogic;
- (void)setForwardLogic:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (void).cxx_destruct;
@end

