@interface MMFinderLiveGiftPacketViewModel : NSObject
{
    BOOL _isSelected; // +0x8
    MMFinderLiveTaskId * _taskId; // +0x10
    MMFinderLiveRewardGiftItem * _giftItem; // +0x18
    unsigned long long _productCount; // +0x20
}
- (id)initWithTaskId:(id)arg1 giftItem:(id)arg2;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)giftItem;
- (void)setGiftItem:(id)arg1;
- (unsigned long long)productCount;
- (void)setProductCount:(unsigned long long)arg1;
- (BOOL)isSelected;
- (void)setIsSelected:(BOOL)arg1;
- (void).cxx_destruct;
@end
