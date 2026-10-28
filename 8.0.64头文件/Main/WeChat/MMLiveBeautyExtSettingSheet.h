@interface MMLiveBeautyExtSettingSheet : MMPageSheetBaseView <MMLiveBeautyExtSettingCardDelegate>
{
    int _entry; // +0x8
    MMLiveTaskId * _taskId; // +0x10
    MMLiveBeautyExtSettingCard * _faceOccuSettingCard; // +0x18
}
+ (id)showWithTaskId:(id)arg1 entry:(int)arg2;
+ (id)showChangeFilterNoticeViewWith:(id)arg1 entry:(int)arg2;
+ (id)showWithTaskId:(id)arg1;
+ (id)showChangeFilterNoticeViewWith:(id)arg1;
- (id)initWithTaskId:(id)arg1;
- (void)setupSubviews;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)setupPageSheetConfig;
- (void)updateNavBarUI;
- (id)getCurrentLeftButton;
- (void)leftButtonAction;
- (id)liveTask;
- (id)beautyLogic;
- (BOOL)isInRoom;
- (void)switchDidChanged:(BOOL)arg1 card:(id)arg2;
- (int)entry;
- (void)setEntry:(int)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)faceOccuSettingCard;
- (void)setFaceOccuSettingCard:(id)arg1;
- (void).cxx_destruct;
@end
