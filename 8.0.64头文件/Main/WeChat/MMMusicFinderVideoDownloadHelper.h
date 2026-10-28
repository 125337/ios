@interface MMMusicFinderVideoDownloadHelper : MMObject
{
    id <MMMusicFinderVideoDownloadHelperDelegate> _delegate; // +0x8
}
- (id)init;
- (void)finderMediaVideoStreamDownloadSuccessfulWithTid:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
