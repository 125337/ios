@interface WCFinderEventTabInfo : NSObject
{
    unsigned int _innerTabType; // +0x8
    NSString * _tabName; // +0x10
    unsigned long long _topicId; // +0x18
    NSArray * _filterList; // +0x20
}
- (id)initWithTopicHashTagInfo:(id)arg1;
- (id)initWithMusicTopicHashTagInfo:(id)arg1;
- (id)filterInfoAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfFilterType:(unsigned int)arg1;
- (id)reportDict;
- (unsigned int)innerTabType;
- (void)setInnerTabType:(unsigned int)arg1;
- (id)tabName;
- (void)setTabName:(id)arg1;
- (unsigned long long)topicId;
- (void)setTopicId:(unsigned long long)arg1;
- (id)filterList;
- (void)setFilterList:(id)arg1;
- (void).cxx_destruct;
@end

