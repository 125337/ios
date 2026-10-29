@interface WCAdServerOpAdLiftInfo : NSObject
{
    BOOL _supportExposedFeed; // +0x8
    int _position; // +0xc
}
- (int)position;
- (void)setPosition:(int)arg1;
- (BOOL)supportExposedFeed;
- (void)setSupportExposedFeed:(BOOL)arg1;
@end

