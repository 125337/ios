@interface TextStateEmojiBoardModel : NSObject
{
    id <TextStateEmojiBoardModelDelegate> _delegate; // +0x8
    TextStatePublishIconList * _publishIconList; // +0x10
    TextStatePublishIconGroup * _recentIconGroup; // +0x18
    TextStateRecentIconList * _recentIconList; // +0x20
    TextStatePublishRecommendIconGroup * _recommendIconGroup; // +0x28
}
- (id)initWithPublishIconList:(id)arg1;
- (void)appendRecentUsedIcon:(id)arg1;
- (id)recentIconList;
- (id)recentIconGroup;
- (id)recommendIconGroup;
- (void)startRequestCustomIconRecommendData:(id)arg1;
- (void)onHandleCustomRecommendData:(id)arg1 resp:(id)arg2;
- (id)iconList;
- (BOOL)checkIconListReloadBeforeShow;
- (id)mmkvKey;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)publishIconList;
- (void)setPublishIconList:(id)arg1;
- (void)setRecentIconGroup:(id)arg1;
- (void)setRecentIconList:(id)arg1;
- (void)setRecommendIconGroup:(id)arg1;
- (void).cxx_destruct;
@end
