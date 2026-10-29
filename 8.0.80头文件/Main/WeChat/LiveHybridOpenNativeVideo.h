@interface LiveHybridOpenNativeVideo : NSObject
{
    FlutterStandardTypedData * _feedPBData; // +0x8
    NSNumber * _itemIndex; // +0x10
    NSString * _chnlExtra; // +0x18
}
+ (id)makeWithFeedPBData:(id)arg1 itemIndex:(id)arg2 chnlExtra:(id)arg3;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)feedPBData;
- (void)setFeedPBData:(id)arg1;
- (id)itemIndex;
- (void)setItemIndex:(id)arg1;
- (id)chnlExtra;
- (void)setChnlExtra:(id)arg1;
- (void).cxx_destruct;
@end
