@interface WCFinderShareItemInfo : NSObject
{
    NSString * _name; // +0x8
    NSString * _desc; // +0x10
    NSString * _iconUrl; // +0x18
    NSString * _fromFeedId; // +0x20
    WCFinderDataItem * _fromDataItem; // +0x28
}
- (id)name;
- (void)setName:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (id)fromFeedId;
- (void)setFromFeedId:(id)arg1;
- (id)fromDataItem;
- (void)setFromDataItem:(id)arg1;
- (void).cxx_destruct;
@end
