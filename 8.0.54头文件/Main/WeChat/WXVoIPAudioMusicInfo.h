@interface WXVoIPAudioMusicInfo : NSObject
{
    id /* block */ _startBlock; // +0x8
    id /* block */ _progressBlock; // +0x10
    id /* block */ _completeBlock; // +0x18
}
- (id /* block */)startBlock;
- (void)setStartBlock:(id /* block */)arg1;
- (id /* block */)progressBlock;
- (void)setProgressBlock:(id /* block */)arg1;
- (id /* block */)completeBlock;
- (void)setCompleteBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

