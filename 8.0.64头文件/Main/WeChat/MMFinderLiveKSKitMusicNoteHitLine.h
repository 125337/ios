@interface MMFinderLiveKSKitMusicNoteHitLine : UIView
{
    MMFinderLiveKSKitMusicNote * _rootMusicNote; // +0x8
    _NSRange _hitRange; // +0x10
}
- (id)initWithRootMusicNote:(id)arg1;
- (BOOL)addHitRange:(_NSRange)arg1;
- (BOOL)checkHitRangeIsContinuous:(_NSRange)arg1;
- (void)updateSelfLeftAndWidth;
- (id)rootMusicNote;
- (void)setRootMusicNote:(id)arg1;
- (_NSRange)hitRange;
- (void)setHitRange:(_NSRange)arg1;
- (void).cxx_destruct;
@end
