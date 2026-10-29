@interface MMFinderLiveKTVSingleIconView : UIView
{
    MMLiveTaskId * _taskId; // +0x8
    UIImageView * _iconView; // +0x10
    NSString * _ktvThemeResourceFetchSessionToken; // +0x18
}
+ (double)preferHeight;
- (id)initWithTaskId:(id)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)updateMainWidgetsColor:(id)arg1;
- (id)liveTask;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)ktvThemeResourceFetchSessionToken;
- (void)setKtvThemeResourceFetchSessionToken:(id)arg1;
- (void).cxx_destruct;
@end

