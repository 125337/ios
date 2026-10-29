@interface WxpayLFSPagComposition : NSObject <WxpayPagComposition>
{
    PAGFile * _file; // +0x8
}
- (long long)durationMs;
- (long long)numImages;
- (id)createPlayerWithTarget:(id)arg1;
- (BOOL)replaceImage:(long long)arg1 image:(id)arg2;
- (void)close;
- (id)file;
- (void)setFile:(id)arg1;
- (void).cxx_destruct;
@end
