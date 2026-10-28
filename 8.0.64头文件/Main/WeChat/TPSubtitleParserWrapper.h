@interface TPSubtitleParserWrapper : NSObject
{
    ITPSubtitleParser * _subtitleParser; // +0x8
    TPSubtitleParserCallbackWrapper * _subtitleCb; // +0x10
}
- (id)initWithUrl:(id)arg1 httpHeader:(id)arg2 callback:(id)arg3 outputType:(int)arg4;
- (void)dealloc;
- (void)loadAsync;
- (void)startAsync;
- (void)pauseAsync;
- (vector<TPMediaTrackInfo, std::allocator<TPMediaTrackInfo>>)getTrackInfo;
- (int)selectTrackAsync:(int)arg1 opaque:(long long)arg2;
- (int)selectTracksAsync:(vector<int, std::allocator<int>>)arg1 opaque:(long long)arg2;
- (map<int, std::string, std::less<int>, std::allocator<std::pair<const int, std::string>>>)getSubtitleText:(long long)arg1;
- (void)setRenderParams:(struct)arg1;
- (void)stop;
@end
