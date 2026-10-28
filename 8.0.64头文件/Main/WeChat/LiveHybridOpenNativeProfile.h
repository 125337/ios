@interface LiveHybridOpenNativeProfile : NSObject
{
    FlutterStandardTypedData * _contactPBData; // +0x8
    FlutterStandardTypedData * _feedPBData; // +0x10
}
+ (id)makeWithContactPBData:(id)arg1 feedPBData:(id)arg2;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)contactPBData;
- (void)setContactPBData:(id)arg1;
- (id)feedPBData;
- (void)setFeedPBData:(id)arg1;
- (void).cxx_destruct;
@end
