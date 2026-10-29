@interface MSEMessageMetaDataClientIDs : NSObject <PBCoding>
{
    NSArray * _imgClientIDs; // +0x8
    NSString * _videoClientID; // +0x10
    NSString * _appmsgClientID; // +0x18
}
+ (void)PBArrayAdd_imgClientIDs;
+ (void)PBArrayAdd_videoClientID;
+ (void)PBArrayAdd_appmsgClientID;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)imgClientIDs;
- (void)setImgClientIDs:(id)arg1;
- (id)videoClientID;
- (void)setVideoClientID:(id)arg1;
- (id)appmsgClientID;
- (void)setAppmsgClientID:(id)arg1;
- (void).cxx_destruct;
@end

