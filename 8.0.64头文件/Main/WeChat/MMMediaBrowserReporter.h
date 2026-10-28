@interface MMMediaBrowserReporter : NSObject
{
    HDImageExpireReporter * _imageExpireReporter; // +0x8
    CMessageWrap * _msgWrap; // +0x10
}
- (void)onPlayButtonClicked:(BOOL)arg1;
- (void)onPlayRateChangeFrom:(float)arg1 toRate:(float)arg2;
- (id)imageExpireReporter;
- (void)setImageExpireReporter:(id)arg1;
- (id)msgWrap;
- (void)setMsgWrap:(id)arg1;
- (void).cxx_destruct;
@end
