@interface WCFinderPlaceholderFeedItem : NSObject <WCFinderFeedArrayConvert>
{
    WCFinderDataItem * _item; // +0x8
    NSArray * _jumpDataItems; // +0x10
    NSString * _localTid; // +0x18
}
+ (id)feedArrayConvertTidFromObject:(id)arg1;
+ (id)feedArrayConvertVMFromItem:(id)arg1 scene:(int)arg2;
+ (id)placeholderItemWithDataItem:(id)arg1 jumpDataItems:(id)arg2;
- (id)item;
- (void)setItem:(id)arg1;
- (id)jumpDataItems;
- (void)setJumpDataItems:(id)arg1;
- (id)localTid;
- (void)setLocalTid:(id)arg1;
- (void).cxx_destruct;
@end
