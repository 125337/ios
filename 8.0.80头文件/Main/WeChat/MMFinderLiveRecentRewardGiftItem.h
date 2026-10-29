@interface MMFinderLiveRecentRewardGiftItem : NSObject
{
    unsigned int _productCount; // +0x8
    FinderLiveGift * _gift; // +0x10
}
+ (id)batchConvert:(id)arg1;
- (id)initWithFinderLiveGift:(id)arg1 count:(unsigned int)arg2;
- (double)length;
- (double)lengthAtLast;
- (id)gift;
- (void)setGift:(id)arg1;
- (unsigned int)productCount;
- (void)setProductCount:(unsigned int)arg1;
- (void).cxx_destruct;
@end
