@interface WAMainListMenuModel : NSObject
{
    NSString * _title; // +0x8
    UIImage * _iconImage; // +0x10
    NSString * _badge; // +0x18
    GetWxaDesktopEntranceResponse_EntranceInfo * _entranceInfo; // +0x20
    TipsShowInfo * _tipsInfo; // +0x28
}
+ (id)createWithIcon:(id)arg1 title:(id)arg2;
+ (id)createWithIcon:(id)arg1 title:(id)arg2 entranceInfo:(id)arg3;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)iconImage;
- (void)setIconImage:(id)arg1;
- (id)badge;
- (void)setBadge:(id)arg1;
- (id)entranceInfo;
- (void)setEntranceInfo:(id)arg1;
- (id)tipsInfo;
- (void)setTipsInfo:(id)arg1;
- (void).cxx_destruct;
@end
