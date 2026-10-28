@interface EmoticonHalfScreenSendViewReportInfo : NSObject
{
    int _emoticonScene; // +0x8
    int _addEmoticonSource; // +0xc
    int _emoticonEnterScene; // +0x10
    int _hasRedDot; // +0x14
    unsigned long long _scene; // +0x18
    unsigned long long _searchID; // +0x20
    NSString * _sessionID; // +0x28
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
- (int)emoticonScene;
- (void)setEmoticonScene:(int)arg1;
- (int)addEmoticonSource;
- (void)setAddEmoticonSource:(int)arg1;
- (int)emoticonEnterScene;
- (void)setEmoticonEnterScene:(int)arg1;
- (void)setSdkRequestID:(id)arg1;
- (int)hasRedDot;
- (void)setHasRedDot:(int)arg1;
- (void).cxx_destruct;
@end
