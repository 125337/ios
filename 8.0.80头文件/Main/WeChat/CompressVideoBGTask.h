@interface CompressVideoBGTask : CompressVideoSilentTask
{
    BOOL _shouldStop; // +0x50
}
- (void)startOperation;
- (BOOL)stop;
@end
