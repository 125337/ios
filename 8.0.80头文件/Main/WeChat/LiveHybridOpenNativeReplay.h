@interface LiveHybridOpenNativeReplay : NSObject
{
    FlutterStandardTypedData * _feedPBData; // +0x8
    NSString * _contextId; // +0x10
}
+ (id)makeWithFeedPBData:(id)arg1 contextId:(id)arg2;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)feedPBData;
- (void)setFeedPBData:(id)arg1;
- (id)contextId;
- (void)setContextId:(id)arg1;
- (void).cxx_destruct;
@end
