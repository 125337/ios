@interface QMarkerHandler : NSObject
{
    int _markerID; // +0x8
    NSString * _engineMarkerImageKey; // +0x10
}
- (int)markerID;
- (void)setMarkerID:(int)arg1;
- (id)engineMarkerImageKey;
- (void)setEngineMarkerImageKey:(id)arg1;
- (void).cxx_destruct;
@end

