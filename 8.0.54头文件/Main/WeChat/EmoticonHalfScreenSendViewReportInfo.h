@interface EmoticonHalfScreenSendViewReportInfo : NSObject
{
    unsigned long long _scene; // +0x8
    unsigned long long _searchID; // +0x10
    NSString * _sessionID; // +0x18
    long long _emoticonScene; // +0x20
    long long _addEmoticonSource; // +0x28
    NSString * _sdkRequestID; // +0x30
}
- (id)init;
- (id)sdkRequestID;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (unsigned long long)searchID;
- (void)setSearchID:(unsigned long long)arg1;
- (id)sessionID;
- (void)setSessionID:(id)arg1;
- (long long)emoticonScene;
- (void)setEmoticonScene:(long long)arg1;
- (long long)addEmoticonSource;
- (void)setAddEmoticonSource:(long long)arg1;
- (void)setSdkRequestID:(id)arg1;
- (void).cxx_destruct;
@end

