@interface MMMusicListenLyricsViewController : WCListenLyricsViewController <MMMusicLyricVcCalculatorDelegate, IMusicPlayerExt>
{
    MMMusicLyricVcCalculator * m_lyricCalcuator; // +0x68
    long long _curState; // +0x70
}
- (id)initWithLyrics:(id)arg1;
- (void)updateLyrics:(id)arg1;
- (void)dealloc;
- (void)onCurrentLyricChangeTo:(id)arg1 timeToNext:(double)arg2 currIndex:(unsigned int)arg3;
- (void)onUpdateCurOffset:(double)arg1;
- (void)onMusicPlayStatusChanged;
- (long long)curState;
- (void)setCurState:(long long)arg1;
- (void).cxx_destruct;
@end

