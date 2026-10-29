@interface ChatbotGalleryLaunchRequest : NSObject
{
    NSArray * _mediaItems; // +0x8
    long long _enterIndex; // +0x10
    FlutterGalleryMediaRect * _enterRect; // +0x18
    NSDictionary * _reportParams; // +0x20
    FlutterStandardTypedData * _anchorBytes; // +0x28
    NSNumber * _listOrder; // +0x30
    NSString * _sessionId; // +0x38
    NSNumber * _followChatHistory; // +0x40
}
+ (id)makeWithMediaItems:(id)arg1 enterIndex:(long long)arg2 enterRect:(id)arg3 reportParams:(id)arg4 anchorBytes:(id)arg5 listOrder:(id)arg6 sessionId:(id)arg7 followChatHistory:(id)arg8;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)mediaItems;
- (void)setMediaItems:(id)arg1;
- (long long)enterIndex;
- (void)setEnterIndex:(long long)arg1;
- (id)enterRect;
- (void)setEnterRect:(id)arg1;
- (id)reportParams;
- (void)setReportParams:(id)arg1;
- (id)anchorBytes;
- (void)setAnchorBytes:(id)arg1;
- (id)listOrder;
- (void)setListOrder:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)followChatHistory;
- (void)setFollowChatHistory:(id)arg1;
- (void).cxx_destruct;
@end
