@interface MSEFavVideoTask : NSObject <PBCoding>
{
    unsigned int _videoLen; // +0x8
    NSString * _videoUrlStr; // +0x10
}
+ (void)PBArrayAdd_videoUrlStr;
+ (void)PBArrayAdd_videoLen;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)videoUrlStr;
- (void)setVideoUrlStr:(id)arg1;
- (unsigned int)videoLen;
- (void)setVideoLen:(unsigned int)arg1;
- (void).cxx_destruct;
@end

