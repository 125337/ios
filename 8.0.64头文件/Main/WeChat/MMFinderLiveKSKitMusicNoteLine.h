@interface MMFinderLiveKSKitMusicNoteLine : UIView
{
    MMFinderLiveKSKitMusicNote * _musicNote; // +0x8
    UIView * _progressLine; // +0x10
    UIColor * _hitlineColor; // +0x18
    NSMutableArray * _hitLineList; // +0x20
}
+ (double)preferHeight;
- (id)initWithMusicNote:(id)arg1;
- (void)initDefaultUI;
- (void)initDefaultDatas;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutHitLines;
- (double)preferWidth;
- (void)addHitRange:(_NSRange)arg1;
- (id)createHitLineWithHitRange:(_NSRange)arg1;
- (void)setHitlineColor:(id)arg1;
- (id)musicNote;
- (void)setMusicNote:(id)arg1;
- (id)progressLine;
- (void)setProgressLine:(id)arg1;
- (id)hitlineColor;
- (id)hitLineList;
- (void)setHitLineList:(id)arg1;
- (void).cxx_destruct;
@end
