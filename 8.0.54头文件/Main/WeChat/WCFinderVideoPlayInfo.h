@interface WCFinderVideoPlayInfo : NSObject <WCTTableCoding>
{
    NSString * _tid; // +0x8
    unsigned long long _playingTimeRecently; // +0x10
    NSString * _tempPath; // +0x18
    NSString * _mediaPath; // +0x20
    WCFinderVideoPlayInfoImagePathArray * _imagePathArray; // +0x28
    double _playbackTime; // +0x30
    double _maxPlaybackTime; // +0x38
    NSString * _contextID; // +0x40
    NSString * _feedContentVMAddress; // +0x48
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)tid;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_tid;
+ (const void *)playingTimeRecently;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_playingTimeRecently;
+ (const void *)tempPath;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_tempPath;
+ (const void *)mediaPath;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_mediaPath;
+ (const void *)imagePathArray;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_imagePathArray;
+ (const void *)playbackTime;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_playbackTime;
+ (const void *)contextID;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_contextID;
+ (const void *)maxPlaybackTime;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_maxPlaybackTime;
+ (const void *)feedContentVMAddress;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_feedContentVMAddress;
+ (void)__wcdb_column_constraint_9:(void *)arg1;
+ (void)__wcdb_index_10:(void *)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (unsigned long long)playingTimeRecently;
- (void)setPlayingTimeRecently:(unsigned long long)arg1;
- (id)tempPath;
- (void)setTempPath:(id)arg1;
- (id)mediaPath;
- (void)setMediaPath:(id)arg1;
- (id)imagePathArray;
- (void)setImagePathArray:(id)arg1;
- (double)playbackTime;
- (void)setPlaybackTime:(double)arg1;
- (double)maxPlaybackTime;
- (void)setMaxPlaybackTime:(double)arg1;
- (id)contextID;
- (void)setContextID:(id)arg1;
- (id)feedContentVMAddress;
- (void)setFeedContentVMAddress:(id)arg1;
- (void).cxx_destruct;
@end

