@interface WCFinderMJSetTemplateViewModel : NSObject
{
    id <WCFinderMJSetTemplateViewModelDelegate> _delegate; // +0x8
    WCFinderMJTempInfo * _mjTempInfo; // +0x10
    NSString * _topicId; // +0x18
    NSMutableArray * _mutTabs; // +0x20
    WCFinderMJSetInitParams * _params; // +0x28
}
+ (id)genShareToFriendMessageWrapWithItem:(id)arg1;
+ (unsigned long long)genFinderShareItemType;
- (id)initWithParams:(id)arg1;
- (id)tabs;
- (void)requestTabs;
- (void)shareToMoment:(id)arg1;
- (long long)genShareMomentType;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)mjTempInfo;
- (void)setMjTempInfo:(id)arg1;
- (id)topicId;
- (void)setTopicId:(id)arg1;
- (id)mutTabs;
- (void)setMutTabs:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (void).cxx_destruct;
@end
