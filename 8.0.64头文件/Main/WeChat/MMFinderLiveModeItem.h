@interface MMFinderLiveModeItem : NSObject <PBCoding>
{
    int _liveMode; // +0x8
    NSString * _title; // +0x10
    NSString * _subTitle; // +0x18
}
+ (void)PBArrayAdd_liveMode;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_subTitle;
+ (void)initialize;
- (id)getPBPropertyTable;
- (BOOL)isSameModeItem:(id)arg1;
- (BOOL)isVideoSubItem;
- (BOOL)isAudioSubItem;
- (BOOL)isGameSubItem;
- (BOOL)isSwitchValid;
- (int)liveMode;
- (void)setLiveMode:(int)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)subTitle;
- (void)setSubTitle:(id)arg1;
- (void).cxx_destruct;
@end
