@interface TingPlayerConfiguration : NSObject
{
    BOOL _ignoreVideoDecodeError; // +0x8
    BOOL _takeOverDownload; // +0x9
}
- (BOOL)ignoreVideoDecodeError;
- (void)setIgnoreVideoDecodeError:(BOOL)arg1;
- (BOOL)takeOverDownload;
- (void)setTakeOverDownload:(BOOL)arg1;
@end

