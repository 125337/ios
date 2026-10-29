@interface OMJCamLyricsStyle : NSObject
{
    NSString * _lyricsStyleID; // +0x8
    OMJSpatialInfo * _spatialInfo; // +0x10
}
- (id)initWithLyricsStyleID:(id)arg1 spatialInfo:(id)arg2;
- (id)description;
- (id)lyricsStyleID;
- (void)setLyricsStyleID:(id)arg1;
- (id)spatialInfo;
- (void)setSpatialInfo:(id)arg1;
- (void).cxx_destruct;
@end

