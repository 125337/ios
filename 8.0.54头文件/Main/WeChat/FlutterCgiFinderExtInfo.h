@interface FlutterCgiFinderExtInfo : NSObject
{
    BOOL _useSessionBuffer; // +0x8
    long long _finderBaseRequestIndex; // +0x10
    NSArray * _feedIdList; // +0x18
    NSNumber * _scene; // +0x20
    NSNumber * _enterScene; // +0x28
}
+ (id)makeWithFinderBaseRequestIndex:(long long)arg1 feedIdList:(id)arg2 scene:(id)arg3 enterScene:(id)arg4 useSessionBuffer:(BOOL)arg5;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (long long)finderBaseRequestIndex;
- (void)setFinderBaseRequestIndex:(long long)arg1;
- (id)feedIdList;
- (void)setFeedIdList:(id)arg1;
- (id)scene;
- (void)setScene:(id)arg1;
- (id)enterScene;
- (void)setEnterScene:(id)arg1;
- (BOOL)useSessionBuffer;
- (void)setUseSessionBuffer:(BOOL)arg1;
- (void).cxx_destruct;
@end

