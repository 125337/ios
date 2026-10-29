@interface WCFinderMSVideoMediaCell : WCFinderMSActivityBaseCell
{
    WCFinderFeedStaticCoverView * _coverView; // +0x8
    UIView * _timeBGView; // +0x10
    UILabel * _timeLabel; // +0x18
    SightIconView * _playIconView; // +0x20
}
+ (id)cellIdentifier;
+ (CGSize)calculateDisplaySize:(CGSize)arg1 forVM:(id)arg2 cellIdentifier:(id)arg3 showSceneIntroduce:(BOOL)arg4;
+ (CGSize)calculateCoverDisplaySize:(CGSize)arg1 forVM:(id)arg2;
+ (double)calculateBaseLine:(CGSize)arg1 forVM:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)onContentVMChanged;
- (void)onClickVideo;
- (void)onLongPress:(id)arg1;
- (id)coverView;
- (void)setCoverView:(id)arg1;
- (id)timeBGView;
- (void)setTimeBGView:(id)arg1;
- (id)timeLabel;
- (void)setTimeLabel:(id)arg1;
- (id)playIconView;
- (void)setPlayIconView:(id)arg1;
- (void).cxx_destruct;
@end

