@interface TextStateEmojiBoardModel : NSObject
{
    id <TextStateEmojiBoardModelDelegate> _delegate; // +0x8
    TextStatePublishIconList * _publishIconList; // +0x10
    TextStatePublishIconGroup * _recentIconGroup; // +0x18
    TextStateRecentIconList * _recentIconList; // +0x20
}
- (id)initWithPublishIconList:(id)arg1;
- (void)appendRecentUsedIcon:(id)arg1;
- (id)recentIconList;
- (id)recentIconGroup;
- (id)iconList;
- (id)mmkvKey;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)publishIconList;
- (void)setPublishIconList:(id)arg1;
- (void)setRecentIconGroup:(id)arg1;
- (void)setRecentIconList:(id)arg1;
- (void).cxx_destruct;
@end

