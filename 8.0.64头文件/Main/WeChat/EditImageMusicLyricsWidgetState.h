@interface EditImageMusicLyricsWidgetState : EditImageWidgetState
{
    NSArray * _lyricsList; // +0x8
    double _lyricsTimeInterval; // +0x10
}
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)lyricsList;
- (void)setLyricsList:(id)arg1;
- (double)lyricsTimeInterval;
- (void)setLyricsTimeInterval:(double)arg1;
- (void).cxx_destruct;
@end
