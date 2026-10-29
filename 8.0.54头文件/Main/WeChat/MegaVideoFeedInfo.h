@interface MegaVideoFeedInfo : NSObject
{
    NSString * _feedId; // +0x8
    NSString * _nonceId; // +0x10
    FlutterStandardTypedData * _finderObjectData; // +0x18
}
+ (id)makeWithFeedId:(id)arg1 nonceId:(id)arg2 finderObjectData:(id)arg3;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)feedId;
- (void)setFeedId:(id)arg1;
- (id)nonceId;
- (void)setNonceId:(id)arg1;
- (id)finderObjectData;
- (void)setFinderObjectData:(id)arg1;
- (void).cxx_destruct;
@end

