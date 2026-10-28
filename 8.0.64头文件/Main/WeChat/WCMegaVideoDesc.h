@interface WCMegaVideoDesc : NSObject <WCTColumnCoding, PBCoding>
{
    NSString * _videoDescription; // +0x8
    NSMutableArray * _mediaList; // +0x10
    unsigned long long _mediaType; // +0x18
    NSString * _mixedBuffer; // +0x20
    WCMegaVideoLocation * _location; // +0x28
    WCMegaVideoExtendedReading * _extReading; // +0x30
    WCMegaVideoLocation * _feedLocation; // +0x38
}
+ (void)PBArrayAdd_videoDescription;
+ (void)PBArrayAdd_mediaList;
+ (void)PBArrayAdd_mediaType;
+ (void)PBArrayAdd_mixedBuffer;
+ (void)PBArrayAdd_location;
+ (void)PBArrayAdd_extReading;
+ (void)PBArrayAdd_feedLocation;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnTypeForWCDB;
- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (id)initWithMegaVideoDesc:(id)arg1;
- (id)genMegaVideoDesc;
- (id)description;
- (id)videoDescription;
- (void)setVideoDescription:(id)arg1;
- (id)mediaList;
- (void)setMediaList:(id)arg1;
- (unsigned long long)mediaType;
- (void)setMediaType:(unsigned long long)arg1;
- (id)mixedBuffer;
- (void)setMixedBuffer:(id)arg1;
- (id)location;
- (void)setLocation:(id)arg1;
- (id)extReading;
- (void)setExtReading:(id)arg1;
- (id)feedLocation;
- (void)setFeedLocation:(id)arg1;
- (void).cxx_destruct;
@end
