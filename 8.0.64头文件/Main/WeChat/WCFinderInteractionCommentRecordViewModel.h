@interface WCFinderInteractionCommentRecordViewModel : NSObject
{
    BOOL _isNoMoreData; // +0x8
    id <WCFinderInteractionCommentRecordViewModelDelegate> _delegate; // +0x10
    WCFinderFeedContentVM * _jumpFeedContentVM; // +0x18
    NSString * _targetUserName; // +0x20
    NSMutableArray * _mentionList; // +0x28
    NSMutableArray * _mentionListConfigs; // +0x30
    WCFinderFooterConfiguration * _footerConfig; // +0x38
    long long _latestEvent; // +0x40
    NSData * _pageBuffer; // +0x48
}
- (id)initWithTargetUserName:(id)arg1;
- (id)selfContact;
- (id)sections;
- (id)snapshot;
- (id)_footerSection;
- (void)fetchCommentLists;
- (void)fetchFeedContentVMForIndexPath:(id)arg1;
- (void)_appendMentionList:(id)arg1;
- (void)_cgiFetchCommentList;
- (void)_cgiFetchDataItemWithMention:(id)arg1;
- (BOOL)isCGILoading;
- (void)setLatestEvent:(long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)jumpFeedContentVM;
- (void)setJumpFeedContentVM:(id)arg1;
- (id)targetUserName;
- (void)setTargetUserName:(id)arg1;
- (id)mentionList;
- (void)setMentionList:(id)arg1;
- (id)mentionListConfigs;
- (void)setMentionListConfigs:(id)arg1;
- (id)footerConfig;
- (void)setFooterConfig:(id)arg1;
- (BOOL)isNoMoreData;
- (void)setIsNoMoreData:(BOOL)arg1;
- (long long)latestEvent;
- (id)pageBuffer;
- (void)setPageBuffer:(id)arg1;
- (void).cxx_destruct;
@end
