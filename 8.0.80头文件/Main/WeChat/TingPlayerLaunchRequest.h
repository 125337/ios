@interface TingPlayerLaunchRequest : NSObject
{
    BOOL _autoPlay; // +0x8
    FlutterStandardTypedData * _tingItemData; // +0x10
}
+ (id)makeWithTingItemData:(id)arg1 autoPlay:(BOOL)arg2;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)tingItemData;
- (void)setTingItemData:(id)arg1;
- (BOOL)autoPlay;
- (void)setAutoPlay:(BOOL)arg1;
- (void).cxx_destruct;
@end
