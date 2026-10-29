@interface WCFinderPublishTabViewModel : WCFinderChooseFeedTabViewModel <WCFinderPostDataItemExt>
{
    unsigned long long _maxId; // +0x8
}
- (id)init;
- (id)tabTitle;
- (void)loadData:(BOOL)arg1;
- (int)tabType;
- (BOOL)isPublishTabModel;
- (void)onFinderPostSessionUpLoadSuccessful:(id)arg1;
- (unsigned long long)maxId;
- (void)setMaxId:(unsigned long long)arg1;
@end
