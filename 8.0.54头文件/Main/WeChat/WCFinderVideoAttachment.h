@interface WCFinderVideoAttachment : NSObject <WCTColumnCoding, PBCoding>
{
    unsigned long long _videoId; // +0x8
    WCMegaVideo * _video; // +0x10
    NSString * _videoNonceId; // +0x18
}
+ (void)PBArrayAdd_videoId;
+ (void)PBArrayAdd_video;
+ (void)PBArrayAdd_videoNonceId;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnTypeForWCDB;
- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (id)initWithFinderVideoAttachment:(id)arg1;
- (id)initWithMegaVideo:(id)arg1;
- (id)description;
- (id)genVideoAttachment;
- (unsigned long long)videoId;
- (void)setVideoId:(unsigned long long)arg1;
- (id)video;
- (void)setVideo:(id)arg1;
- (id)videoNonceId;
- (void)setVideoNonceId:(id)arg1;
- (void).cxx_destruct;
@end

